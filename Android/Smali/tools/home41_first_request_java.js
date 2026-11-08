/*
 * Read-only Java-side HOME launch observation.
 * Event kinds, request path CATEGORIES and HTTP response statuses only.
 * No package IDs, actual URL, host, cookies, headers, body, auth data.
 * The observed Java request path may not be used by Unity native networking.
 */
'use strict';
import Java from 'frida-java-bridge';
const t0=Date.now();
let total=0;
const count=Object.create(null);
function emit(event, info) {
  if (total>=150) return;
  const n=count[event]||0;
  if (n>=20) return;
  count[event]=n+1;
  total++;
  send(Object.assign({event,observer_elapsed_ms:Date.now()-t0},info||{}));
}
function category(path) {
  const p=String(path||'').toLowerCase();
  if (/register|signup|createuser/.test(p)) return 'register';
  if (/token|oauth/.test(p)) return 'token';
  if (/login|signin|auth/.test(p)) return 'login';
  if (/language|region|country|locale/.test(p)) return 'locale';
  if (/basic|profile/.test(p)) return 'basic_profile';
  if (/version|config|setting|bootstrap|startup/.test(p)) return 'initial_config';
  return 'other';
}
function officialFamily(host) {
  const h=String(host||'').toLowerCase();
  return h.endsWith('.pokemon.com') || h.endsWith('.pokemonhome.com')
     || h.endsWith('.nintendo.net') || h.endsWith('.nintendo.com')
     || /pokemonhome/.test(h);
}
function staticName(v) {
  const s=String(v||'');
  return /^[A-Za-z_][A-Za-z0-9_.-]{0,63}$/.test(s) ? s : null;
}
emit('java_agent_loaded');
if (!Java.available) {
  emit('java_unavailable');
} else {
  Java.perform(function(){
    emit('java_ready');
    try {
      const check=Java.use('jp.co.ilca.www.checksignature.CheckSignatureCore');
      const fn=check.Check.overload('android.content.Context','java.lang.String','java.lang.String');
      fn.implementation=function(a,b,c) {
        emit('signing_check_java_enter');
        return fn.call(this,a,b,c);
      };
      emit('java_hook_ready',{hook:'signing_check'});
    } catch(_){ emit('java_hook_failed',{hook:'signing_check'}); }
    try {
      const pl=Java.use('com.unity3d.player.UnityPlayer');
      const fn=pl.UnitySendMessage.overload('java.lang.String','java.lang.String','java.lang.String');
      fn.implementation=function(receiver,method,content) {
        try {
          const s=String(content||'');
          const kind=s.startsWith('hash:')?'signature_hash'
            :s.startsWith('toCharsString:')?'certificate_chars'
            :s.startsWith('PackageName:')?'package_name':null;
          if (kind && staticName(receiver)==='Azurill' && staticName(method)==='Tarinor')
            emit('signing_message_to_unity',{message_kind:kind});
        } catch(_){}
        return fn.call(this,receiver,method,content);
      };
      emit('java_hook_ready',{hook:'unity_message'});
    } catch(_){ emit('java_hook_failed',{hook:'unity_message'}); }
    try {
      const url=Java.use('java.net.URL');
      const fn=url.openConnection.overload();
      fn.implementation=function(){
        try {
          if (officialFamily(this.getHost()))
            emit('java_http_connection_open',{request_category:category(this.getPath())});
        }catch(_){}
        return fn.call(this);
      };
      emit('java_hook_ready',{hook:'url_connection'});
    }catch(_){ emit('java_hook_failed',{hook:'url_connection'}); }
    try {
      const conn=Java.use('java.net.HttpURLConnection');
      const fn=conn.getResponseCode.overload();
      fn.implementation=function(){
        const status=fn.call(this);
        try {
          const target=this.getURL();
          if (target && officialFamily(target.getHost())){
            const code=Number(status);
            if (Number.isInteger(code) && code>=100 && code<=599)
              emit('java_http_response_status',{request_category:category(target.getPath()),http_status:code});
          }
        }catch(_){}
        return status;
      };
      emit('java_hook_ready',{hook:'java_http_status'});
    }catch(_){ emit('java_hook_failed',{hook:'java_http_status'}); }
  });
}

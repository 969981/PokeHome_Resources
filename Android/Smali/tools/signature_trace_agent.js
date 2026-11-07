/*
 * Pokémon HOME 4.1.0 signature call-site diagnostics (Frida 17).
 * No return-value or argument edits. Never logs cert bytes, package identities,
 * Unity messages, endpoints, device identifiers or account data.
 */
"use strict";
import Java from "frida-java-bridge";

const start = Date.now();
let sent = 0;
const MAX = 100;
function emit(kind) {
  if (sent++ >= MAX) return;
  send({ event: kind, elapsed_ms: Date.now() - start });
}
emit("agent_loaded");
if (!Java.available) {
  emit("java_unavailable");
} else {
  Java.perform(function () {
    emit("java_ready");
    try {
      const check = Java.use("jp.co.ilca.www.checksignature.CheckSignatureCore");
      const call = check.Check.overload(
        "android.content.Context", "java.lang.String", "java.lang.String");
      call.implementation = function (context, receiver, callback) {
        emit("checksignature_core_called");
        // Original implementation. Neither Context nor result is changed.
        return call.call(this, context, receiver, callback);
      };
      emit("checksignature_hook_ready");
    } catch (_) {
      emit("checksignature_hook_unavailable");
    }

    try {
      const player = Java.use("com.unity3d.player.UnityPlayer");
      const unitySend = player.UnitySendMessage.overload(
        "java.lang.String", "java.lang.String", "java.lang.String");
      unitySend.implementation = function (receiver, callback, content) {
        try {
          const msg = String(content || "");
          // Only record the signature-related message prefix.
          // Never copy message bodies/certificates/actual hash values.
          if (msg.indexOf("toCharsString:") === 0) {
            emit("signature_chars_sent_to_unity");
          } else if (msg.indexOf("hash:") === 0) {
            emit("signature_hash_sent_to_unity");
          } else if (msg.indexOf("PackageName:") === 0) {
            emit("package_name_sent_to_unity");
          }
        } catch (_) {}
        return unitySend.call(this, receiver, callback, content);
      };
      emit("unity_message_hook_ready");
    } catch (_) {
      emit("unity_message_hook_unavailable");
    }
  });
}

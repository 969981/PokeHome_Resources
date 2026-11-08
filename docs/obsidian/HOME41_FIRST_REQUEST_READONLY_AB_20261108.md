---
title: "HOME Android 4.1.0：首次请求字段类别与 HTTP 结果只读 A/B 验收"
tags: [pokemon-home, android, frida, il2cpp, network, read-only, reverse-engineering]
date: 2026-11-08
status: "已提交自动化：具体结果以 Actions 和 FIRST_REQUEST_READONLY_AB.json 为准"
---

# 目的

继续验证官方原始 APK 与**只做 apksigner 重签名**的 HOME Android 4.1.0 首次启动差异，尝试将应用层 `code:400 / detail code:9007` 与真实请求阶段、HTTP 状态码对应。

**切记：**`9007` 不是已经验证的 APK 签名错误专用代码。普通官方使用场景中也有类似错误报道。不能仅由签名 A/B 的失败相关性推导服务器校验具体规则。

## 原始版本与安全边界

- 官方原始 APK SHA-256：`8dee598028cd70441f645c8fff96b093b76778d625cdf07c60109eced50ffac1`，从 `969981/Home_Android/ROMS/4.1.0` 获取、安装前重新哈希校验。
- 对照 APK：原版直接 `apksigner` 以一次性测试密钥重签名，未重新打包 DEX、SO、Manifest 或资源；通过 `audit_direct_resign.py` 验证内容差异。
- 环境：Android API 35 / x86_64 可用 ARM64 Native Bridge 的一次性 AVD；Frida 17.26.1 只读观察。
- 不点击同意条款、不注册、不删除、不登录任何真实账户；不修改认证请求、签名参数、服务器返回，也不做 TLS/证书校验绕过。
- 永不持久化原始请求/响应正文、URL、Host、Cookie、HTTP Header、证书原文、哈希、`basic.utid`、设备 ID、账户令牌。
- 结果只包含事件类型、分类字段、宿主单调相对时间、HTTP 3 位状态码与预定义的布尔值。

## 观察点：静态路径已核实，实际命中以 Frida 实测为准

```text
CheckSignatureCore.Check (Java)
 → UnitySendMessage("Azurill","Tarinor", …)
 → CSM.Tarinor
 → ApiRequestBase.Chenipotte(Draco)
 → ApiRequestBase.Lineon (静态 +0x78)
 → ApiRequestBase.Parecool 读取 (+0x78)
 → Charmillon(Lineon,-4,-3)
 → 写入待序列化对象 (+0x58)
 → SerializeToJson<object>
 → UnityWebRequest.SendWebRequest / get_responseCode [仅在方法存在并被实际命中时成立]
 → ApiRequestBase.Ningale(int resultCode,…)
```

所有钩子只监听函数入口、返回值或指定指令地址，不读取任何敏感内容。**特别区分**：

1. `UnityWebRequest.get_responseCode` / Java `HttpURLConnection.getResponseCode` 返回且在 100–599 范围时，才能记录为“原生/Java 网络层 HTTP 状态”。
2. `ApiRequestBase.Ningale` 的 `resultCode` 即使数字恰好在 100–599，也只能标成 `api_response_callback_result_in_http_range`；尚未证明它的语义就是 HTTP 状态。
3. UI 显示 `code:400` 不等于真实 HTTP 状态 400；`detail code:9007` 不等于证书不符结论。
4. `Lineon` 是签名衍生字段类别的**代码结构证据**，不是读取真实签名字符串。原始签名、转换值、最终 JSON 字段名称均不上传。
5. `SendWebRequest` 或序列化入口未命中，可能是其他网络栈、捕获延迟或脚本钩子未准备好，不应直接解释为“没有发送请求”。

## 文件与验收规则

- `Android/Smali/tools/home41_first_request_java.js`：签名相关 Java 回调 + Java HTTP 状态，只有受限事件。
- `Android/Smali/tools/home41_first_request_native.js`：ARM64 Frida emulated realm 的 `Lineon`、`Parecool`、序列化、响应状态只读跟踪。
- `Android/Smali/tools/resolve_first_request_rvas.py`：从**原版** IL2CPP 4.1.0 `script.json` 查 UnityWebRequest 两个可选函数地址；重复/无效则跳过，不能猜地址。
- `Android/Smali/tools/home41_first_request_ab.py`：清理安装、相同权限前置、启动、先后 35/60/95/130 秒截图、严控事件持久化。
- `.github/workflows/home41-first-request-ab.yml`：构建、两份 APK A/B、提交只读汇总、保留临时 Artifact 7 天。
- `Android/Smali/4.1.0/FIRST_REQUEST_READONLY_AB.json`：运行后的脱敏汇总；如果原版语言页未验证，CI 明确失败，不作对照结论。

**结果只能归因到实际记录的最靠近阶段**；如果没有任何真实 HTTP 状态，则报告“HTTP 状态不可见”，不得为满足验收而虚构 400 或 9007 的网络来源。

## 相关证据

- [签名到请求构建与 Lineon 静态引用详解](HOME41_ANDROID_SIGNATURE_TO_IL2CPP_API_CALLCHAIN_20261108.md)
- [这次真实 GitHub Actions](https://github.com/969981/PokeHome_Resources/actions/runs/42459657452)


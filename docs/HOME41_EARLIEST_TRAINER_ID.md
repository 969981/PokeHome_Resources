# HOME 4.1.0：将六位训练家 ID 判断前移到第一个 basic.utid（只读）

## 核心结论与证据等级

**可以缩短 UI 等待，但不能跳过生成真实服务器身份所需的认证和注册。**

| 阶段 | 已确认 | 对早期检查的意义 |
|---|---|---|
| Android \`/auth/register/user\` 专属响应 | \`ApiAuthRegisterUserResponseParam: uuid,apRes,naRes\` | 不能直接从专属 DTO 得到 UTID |
| \`/auth/create/token\` | 建立 session/token 等 | 没有证据证明独立含 UTID |
| \`ApiManager.CallbackResponseHook\` 解析 \`ResponseParamCommon.basic\` | ELF \`0x1D2BA60: LDR X0,[X21,#0x18]; 0x1D2BA64: BL 0x1D763D0\` | **值得监听的最早客户端数据入口**，无需 UI / 模型下载 |
| \`UDManager.SetBasic\` | \`0x1D76C1C/20\` 拷贝 \`UD_Basic.utid +0xF0\` | 可观察已被服务端下发的 ID 值 |
| HOME 六位训练家 ID | 通行 Gen7+ \`ID32 % 1_000_000\` 显示规则 | **仍需和实际 HOME 账号的可见训练家 ID 比对** |

既有报告：
- [HOME41_REGISTRATION_REQUEST_RESPONSE_MATRIX_20261013.md](../Android/HOME41_REGISTRATION_REQUEST_RESPONSE_MATRIX_20261013.md)
- [UTID_CID_NATIVE_CALLCHAIN_20261013.md](../Android/UTID_CID_NATIVE_CALLCHAIN_20261013.md)
- [REGISTRATION_ID_REROLL_REQUEST_AUDIT_20261013.md](../Android/REGISTRATION_ID_REROLL_REQUEST_AUDIT_20261013.md)

### 初始 ID 到底能否在注册成功那一刻拿到？

仍未知：\`register/user\` 的 **专属响应**不含 \`utid\`，但是业务响应还有公共 \`ResponseParamCommon\`。原生代码证明公共基本资料有接收路径，不证明注册回包实际包含 \`basic\`。只有完成一次自有测试账户正常注册，按回调时序读取实际 \`basic.utid\`，才能判断“注册后立即可读”还是必须等首次 \`login\`。

预期优先调查顺序：
1. \`ApiRequestAuthRegisterUser.SerializeRequestParameter\` = \`0x1D334A4\` 标记注册请求构造时刻。
2. \`ApiRequestAuthRegisterUser.CallAfterResponse\` = \`0x1D33294\` 标记注册响应处理时刻。
3. \`UDManager.SetBasic\` = \`0x1D763D0\` 标记首次携带非空 \`utid\` 的 \`basic\` 消费时刻。
4. 若第 3 项在第 2 项之前或附近出现，则查注册公共响应有无 \`basic\`；若只在后续 login 出现则以 login 为最早可信接收点。这里只提供**时序线索**；即使时序相邻，也不能单凭时序认定来自哪一次 HTTP 响应。

## 已提交的两个观察工具

**只读 Frida 原生监听脚本：** [\`tools/early_home_tid_observer.js\`](../tools/early_home_tid_observer.js)

- 使用已验证 APK 与 libil2cpp.so 的 RVA；在个人持有的 ARM64 测试设备上运行。
- Frida 17+ \`Process.findModuleByName("libil2cpp.so")\` 延迟发现模块，等待加载后安装 \`Interceptor.attach\`。
- \`SetBasic\` 输入的 \`UD_Basic + 0xF0\` 是托管字符串引用（不是 uint32 槽）；在 **ARM64 IL2CPP** 中以 \`length +0x10\`、UTF-16 \`chars +0x14\` 读取至多十个数字字符。
- 只输出第一个有效数值的六位候选、是否等于目标与回调顺序，不输出 UUID、token、nonce、原始 HTTP、Nintendo account 标识，也不写内存。
- **该脚本语法有 CI 校验，真实 Frida 附加/内存读取尚未实机验收。** x86_64 AVD 的 \`libndk_translation\` 环境未验证原生 ARM64 地址能否附加，不应直接认为支持。

安装工具并按自己设备环境部署与其架构匹配的 Frida，命令形态（仅授权自有设备）：

\`\`\`bash
frida -U -f jp.pokemon.pokemonhome -l tools/early_home_tid_observer.js
\`\`\`

**离线数字计算：** [\`tools/early_tid_candidate.py\`](../tools/early_tid_candidate.py)

\`\`\`bash
python tools/early_tid_candidate.py --utid 888888 --target 888888
\`\`\`

结果包含 \`candidate_tid7\` 和 \`candidate_equals_target\`，始终标明 \`semantic_validation:not_proven_against_home_visible_trainer_id\`。千万不要将其它类型的 UUID/CID、或未经类型验证的字符串转成 trainer ID。

## 验收路径（重要）

1. 确认设备上 HOME APK/ELF SHA-256 与记录完全一致、设备为原生 ARM64。否则此 RVA 不可使用。
2. 使用**自有测试账号**正常首次启动，允许应用按其正式流程认证。工具仅观察首次出现的 \`basic.utid\`；无请求重放、自动注册或删除。
3. 在实际 HOME 发放给新用户的宝可梦资料中确认 **可见 6 位训练家 ID**，与候选值对比。只有至少一组成功匹配，才能把 \`UTID\` 与此六位号码的语义联系升格为实测。
4. 要证明 *ID 最早获取时刻*，必须区分注册回调与普通登录回调。观测结果若仅发生在首次登录，说明可跳过 UI/图鉴，不代表可跳过登录。
5. **绝不自动化大批量注册、删号、认证重放或规避服务限流**；注册/删除服务器端操作仍遵循官方客户端流程。尤其不要将无账号的模拟器“进程启动成功”当作已完成注册。

## 仍无证据证明的事项

- 云端训练家 ID 的真实生成算法/分布，是否每次重新建立 HOME 都换 ID；
- 注册响应的公共部分是否包含 \`basic.utid\`；
- 在 ARM native bridge x86_64 模拟器上稳定附加 ARM64 hook；
- \`utid\` 数值的 HOME 训练家可见六位 ID 语义；
- 是否存在合法省略 Nintendo Account 认证、账户绑定或各项服务端状态变更的流程。

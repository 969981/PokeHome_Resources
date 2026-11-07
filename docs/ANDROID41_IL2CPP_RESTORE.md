# Pokémon HOME Android 4.1.0 IL2CPP 静态恢复试验

这份工作流仅用本仓库已提供的合法 APK 和匹配 ELF + metadata 执行静态分析，不尝试绕过账号、DRM 或服务器鉴权。

通过版本锁定的 `ChanGu54/Il2CppDumper`（commit `cbd5daba1e0cc1b6dcabda46191d988b694c5222`）编译 .NET 8 Linux 工具；先确认 metadata v31，再从匹配的 `libil2cpp.so` 尝试生成 method/field 定义、Ghidra/IDA 辅助映射及 DummyDll。输出至 `Unpack/Android/4.1.0/il2cpp`，并用 `restore_summary.json` 实际计数判定成功与否。

请区分：
- `metadata version=31`：已验证输入版本；
- `script_method_entries>0`：静态方法与地址映射有产物，还须与 Ghidra 交叉验证；
- `DummyDll`：只有类型/接口定义，不包含原始托管方法体；
- `native function bodies`：由 ARM64 ELF 原生机器码提供，未自动恢复成原始 C# 源码。

流程不会因工具内部不支持该版本而伪造成功，错误日志将写入私有仓库。后续需要以同一 ELF BuildID 在 Ghidra 验证 CodeRegistration 和 MetadataRegistration。

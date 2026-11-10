# HOME 4.1.0 全量指令与 C 注释（静态证据分级）

源码原始 SHA-256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a

- c_annotated/: 15,415 个 C 函数逐条非空代码行的解释，保留原代码不改写
- asm_annotated/: 1,029,451 条真实 Ghidra 指令地址/机器码/操作数/解释，一行一条
- function_catalog.csv: 每个 Ghidra 函数的用途、来源和置信度
- ghidra_function_comments.tsv: 注释回填到真正 Ghidra 数据库的安全 TSV
- fde_catalog.csv: 原始 25,803 条 FDE，未识别者标记 NOT_DECOMPILED
- annotation_db/: 独立 SQLite 注释数据库的可无损拼接原始字节片（<=40MiB）
- annotation_manifest.json: 统计、原始版本、完整 SHA256 和每片 SHA256

等级: VERIFIED_NATIVE_STATIC 仅用于已经核查的原生功能；SYMBOL_EVIDENCE 是原始符号线索；BEHAVIOR_OBSERVED 仅表示观察到 API/算术等静态特征；UNRESOLVED 不作业务断言。
逐行注释是**机器级/表达式级的自动解释**，不能等同于每个函数的真实业务逻辑均已人工恢复。

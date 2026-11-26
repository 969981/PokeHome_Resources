# HOME 4.1.0 native image selector audit — HIR-05/07/08

直接读取原版二进制而非从 PNG 名字反推。源 commit b9adf78007bd3ae02b84a53cd73a1a2614e22509。本轮解析 344352 字节 pokemon_image_list.bin 的 5 层表：species(field0 u32) -> form(field0 u32) -> level3(field0 u8) -> level4(field0 u32) -> leaf(field0 u32, field1 string)。缺省 field0 按 0 记录。每行保留原始表和字符串偏移；全部 leaf 的 species/form 与资源名一致。第三/四层和 leaf 的业务枚举及 ELF 选择函数仍未证实。

结果：1026 species，1492 form，3506 leaf，3506 不同原始资源名称；0 表内名称未找到 PNG，32 PNG 不在表内。详见差异 JSON，不能将未引用文件删掉。

道具：直接从 icon_item.arc 内 BNTX 指针表恢复 38 个原始 BRTI 名（保留 ^o，不能使用旧解码器被截断的 name）。全部 64x64 / 0x1A01 BC1。使用原生 getter 已有 ELF 证据 main+0x4FD784, 0x4FD130, 0x2C3018：record = start + 48 * u16(0x44+2*ItemID)，sprite = i16(record+0x1A)。非负格式化 item_%04d^o，负数为 item_dummy^o。1829 个逻辑 ItemID 与真实 BRTI 名精确连接：{"native_dummy_key":683,"exact_brti_name":38,"missing_in_icon_item_arc":1108}。未找到的资源键保持 missing，不擅自替换 dummy。PNG 为已有解包文件，按纹理序号连接，未新做像素验证。

icon_pokemon.arc 直接获取 GitHub 文件内容为空；blob 接口不能解码二进制，52,879,496 字节成员尚未实际读取。后续需要在 checkout 上运行 BRTI 扫描。原始归档及 Unpack 不变。此研究仅限离线资源映射。

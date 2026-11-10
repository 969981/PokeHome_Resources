/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001D4EC4
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002d4ec4; name: FUN_.text__002d4ec4
 */


void FUN__text__002d4ec4(void *param_1,long param_2,ushort param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined *__src; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (0x4b9 < param_3) { // [自动静态注释] 条件判断/分支
    memcpy(param_1,&DAT_008e53b8,0x84); // [自动静态注释] 内存复制、清零或移动
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  __src = &DAT_008e53b8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(param_2 + 0x60) != 0) { // [自动静态注释] 条件判断/分支
    __src = (undefined *)(*(long *)(param_2 + 0x60) + (ulong)param_3 * 0x84); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  memcpy(param_1,__src,0x84); // [自动静态注释] 内存复制、清零或移动
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



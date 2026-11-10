/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003FCB00
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004fcb00; name: FUN_.text__004fcb00
 */


void FUN__text__004fcb00(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 local_2c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_24; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((*(byte *)(param_1 + 0x5a) & 0xf) == 0) { // [自动静态注释] 条件判断/分支
    local_24 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x98) + 8) + 0x68) = 0;
    local_2c = 0x400000000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__004ebee4(*(undefined8 *)(*(long *)(param_1 + 0x98) + 8),&local_2c); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__004ebc10(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__004ebc10(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



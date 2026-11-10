/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0025D3C4
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0035d3c4; name: FUN_.text__0035d3c4
 */


char FUN__text__0035d3c4(long param_1,uint param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  char cVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  param_1 = param_1 + (ulong)param_2 * 0xc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  cVar1 = *(short *)(param_1 + 0x526) != -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(short *)(param_1 + 0x524) != -1) { // [自动静态注释] 条件判断/分支
    cVar1 = cVar1 + '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (*(short *)(param_1 + 0x528) != -1) { // [自动静态注释] 条件判断/分支
    cVar1 = cVar1 + '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (*(short *)(param_1 + 0x52a) != -1) { // [自动静态注释] 条件判断/分支
    cVar1 = cVar1 + '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (*(short *)(param_1 + 0x52c) != -1) { // [自动静态注释] 条件判断/分支
    cVar1 = cVar1 + '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (*(short *)(param_1 + 0x52e) != -1) { // [自动静态注释] 条件判断/分支
    cVar1 = cVar1 + '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return cVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



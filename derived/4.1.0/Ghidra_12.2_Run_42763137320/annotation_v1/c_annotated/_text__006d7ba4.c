/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005D7BA4
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006d7ba4; name: FUN_.text__006d7ba4
 */


void FUN__text__006d7ba4(long param_1,undefined8 param_2,ulong param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long local_8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(undefined8 *)(param_1 + 0x98) = 0;
  if ((param_3 & 1) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__006d7660(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    local_8 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__006d7900(&local_8); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  if (*(long *)(param_1 + 0x228) != 0) { // [自动静态注释] 条件判断/分支
    *(int *)(param_1 + 0x838) = *(int *)(param_1 + 0x838) + -1;
    FUN__text__006d84e0(*(long *)(param_1 + 0x228),1); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined8 *)(param_1 + 0x228) = 0;
  } // [自动静态注释] 作用域/控制流边界
  if (*(long *)(param_1 + 0x6e0) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__006d80f0(*(undefined8 *)(param_1 + 0x6f0),*(long *)(param_1 + 0x6e0),0); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined8 *)(param_1 + 0x6e0) = 0;
  } // [自动静态注释] 作用域/控制流边界
  if (*(long *)(param_1 + 0x708) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__006d80f0(*(undefined8 *)(param_1 + 0x718),*(long *)(param_1 + 0x708),0); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined8 *)(param_1 + 0x708) = 0;
  } // [自动静态注释] 作用域/控制流边界
  if (*(long *)(param_1 + 0x728) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__006d80f0(*(undefined8 *)(param_1 + 0x738),*(long *)(param_1 + 0x728),0); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined8 *)(param_1 + 0x728) = 0;
  } // [自动静态注释] 作用域/控制流边界
  if (*(long *)(param_1 + 0x748) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__006d80f0(*(undefined8 *)(param_1 + 0x758),*(long *)(param_1 + 0x748),0); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined8 *)(param_1 + 0x748) = 0;
  } // [自动静态注释] 作用域/控制流边界
  if (*(long *)(param_1 + 0x768) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__006d80f0(*(undefined8 *)(param_1 + 0x778),*(long *)(param_1 + 0x768),0); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined8 *)(param_1 + 0x768) = 0;
  } // [自动静态注释] 作用域/控制流边界
  if (*(long *)(param_1 + 0x788) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__006d80f0(*(undefined8 *)(param_1 + 0x798),*(long *)(param_1 + 0x788),0); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined8 *)(param_1 + 0x788) = 0;
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__006eafe8(param_1 + 0x7a8); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



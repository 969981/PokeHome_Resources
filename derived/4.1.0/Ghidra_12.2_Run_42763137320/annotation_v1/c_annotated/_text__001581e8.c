/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000581E8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001581e8; name: FUN_.text__001581e8
 */


byte * FUN__text__001581e8(long param_1,uint param_2,uint param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte *pbVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  pbVar1 = *(byte **)(*(long *)(param_1 + (ulong)*(uint *)(param_1 + 0xc08) * 0x110 + 0x58) + 400); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*pbVar1 < param_2) { // [自动静态注释] 条件判断/分支
    return (byte *)0x72461e; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if (pbVar1[1] < param_3) { // [自动静态注释] 条件判断/分支
    return (byte *)0x72461e; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  return pbVar1 + (ulong)pbVar1[(ulong)param_3 + (ulong)(uint)pbVar1[1] * (ulong)param_2 + // [自动静态注释] 返回表达式；具体返回语义取决于调用者
                                (ulong)*pbVar1 * 2 + 2] + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                  (ulong)*(ushort *)(pbVar1 + (ulong)param_2 * 2 + 2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
} // [自动静态注释] 作用域/控制流边界



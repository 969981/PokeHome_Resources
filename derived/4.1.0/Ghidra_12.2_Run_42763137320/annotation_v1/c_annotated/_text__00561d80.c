/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00461D80
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00561d80; name: FUN_.text__00561d80
 */


undefined8 FUN__text__00561d80(long param_1,int param_2,long param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_3 == 0) { // [自动静态注释] 条件判断/分支
    return 0x1f; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar1 = (uint)(short)param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar1 < 0x14) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x00561db4 */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(&UNK__text__00561dc0 + (ulong)*(byte *)((ulong)uVar1 + 0x73e400) * 4))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  param_2 = param_2 + (uVar1 >> 0x1c & 7); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1 = param_1 + (ulong)(uint)(param_2 * 0x10000 >> 0x13); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(byte *)(param_1 + 8) =
       *(byte *)(param_1 + 8) |
       (byte)(1 << (ulong)(uVar1 - ((int)(short)param_2 & 0xfffffff8U) & 0x1f)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



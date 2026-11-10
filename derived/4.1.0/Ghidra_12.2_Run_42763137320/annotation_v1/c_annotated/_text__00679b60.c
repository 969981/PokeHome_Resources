/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00579B60
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00679b60; name: FUN_.text__00679b60
 */


undefined8 FUN__text__00679b60(int param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_1 + 0x218U < 0x24) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x00679b78 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&UNK__text__00679b84 + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                      (ulong)*(byte *)((ulong)(param_1 + 0x218U) + 0x760f44) * 4))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    return uVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if (param_1 + 0x388U < 4) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x00679ba8 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&UNK__text__00679bb4 + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                      (ulong)*(byte *)((ulong)(param_1 + 0x388U) + 0x760f40) * 4))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    return uVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if (param_1 == 0) { // [自动静态注释] 条件判断/分支
    return 0x70be42; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  return 0x70feb9; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



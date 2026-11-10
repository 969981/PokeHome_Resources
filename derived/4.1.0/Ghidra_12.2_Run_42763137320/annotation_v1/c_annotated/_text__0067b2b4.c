/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0057B2B4
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0067b2b4; name: FUN_.text__0067b2b4
 */


long FUN__text__0067b2b4(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  iVar1 = FUN__text__0067b14c(); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (iVar1 < -900) { // [自动静态注释] 条件判断/分支
    return (long)iVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  do { // [自动静态注释] 循环/迭代
  } while (3 < *(uint *)(param_1 + 0x198)); // [自动静态注释] 循环/迭代
                    /* WARNING: Could not emulate address calculation at 0x0067b324 */
                    /* WARNING: Treating indirect jump as call */
  lVar2 = (*(code *)(&UNK__text__0067b330 + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    (ulong)*(byte *)((ulong)*(uint *)(param_1 + 0x198) + 0x7618b2) * 4))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return lVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



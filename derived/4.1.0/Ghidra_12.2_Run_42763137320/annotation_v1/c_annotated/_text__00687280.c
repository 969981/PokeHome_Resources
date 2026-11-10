/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00587280
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00687280; name: FUN_.text__00687280
 */


undefined8 FUN__text__00687280(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  Libz_SigloMiddlewareInfo(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if ((((((param_1 != (long *)0x0) && (param_1[8] != 0)) && (param_1[9] != 0)) && // [自动静态注释] 条件判断/分支
       ((plVar3 = (long *)param_1[7], plVar3 != (long *)0x0 && ((long *)*plVar3 == param_1)))) && // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      ((iVar2 = (int)plVar3[1], iVar2 - 0x3f34U < 0x20 && (param_1[3] != 0)))) && // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
     ((*param_1 != 0 || ((int)param_1[1] == 0)))) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (iVar2 == 0x3f3f) { // [自动静态注释] 条件判断/分支
      iVar2 = 0x3f40; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(plVar3 + 1) = 0x3f40;
    } // [自动静态注释] 作用域/控制流边界
    if (iVar2 - 0x3f34U < 0x1f) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x00687380 */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(&UNK__text__00687394 + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                        (ulong)*(ushort *)((ulong)(iVar2 - 0x3f34U) * 2 + 0x7652e8) * 4)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                        (0xfffffffd); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      return uVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return 0xfffffffe; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00113830
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00213830; name: FUN_.text__00213830
 */


undefined8 FUN__text__00213830(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((*(long *)(param_1 + 0x68) == 0) || // [自动静态注释] 条件判断/分支
     (puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar4 == (undefined8 *)0x0)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__00213c00: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  plVar1 = (long *)(**(code **)*puVar4)(puVar4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2 = (long *)FUN__text__0020a9bc(); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (plVar2 != plVar1) { // [自动静态注释] 条件判断/分支
    do { // [自动静态注释] 循环/迭代
      plVar1 = (long *)*plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (plVar1 != plVar2 && plVar1 != (long *)0x0); // [自动静态注释] 循环/迭代
    if (plVar1 == (long *)0x0) goto LAB__text__00213c00; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  if (*(uint *)(param_1 + 0xa0) < 7) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x002138ac */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*(code *)(&UNK__text__002138b8 + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                      (ulong)*(byte *)((ulong)*(uint *)(param_1 + 0xa0) + 0x729015) * 4))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    return uVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



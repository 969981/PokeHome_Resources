/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000436D0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001436d0; name: FUN_.text__001436d0
 */


void FUN__text__001436d0(undefined8 *param_1,long *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  code *pcVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar4 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = uVar4 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar4 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(long **)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x18) = param_2;
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x370,0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (puVar2 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*param_2 + 0xb8))(param_2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__005e8634(0,0x100000); // [自动静态注释] 调用尚未恢复正式名称的函数
                    /* WARNING: Does not return */
    pcVar1 = (code *)UndefinedInstructionException(0,0x1437d4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (*pcVar1)(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005e8634(puVar2,0x100000); // [自动静态注释] 调用尚未恢复正式名称的函数
  *puVar2 = 0x86a1d0;
  puVar2[0xb] = 0x86a278; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar3 = puVar2 + 9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *plVar3 = 0x86a248;
  FUN__text__005e896c(puVar2,0x70acb1,0xffffffff,0x10); // [自动静态注释] 调用尚未恢复正式名称的函数
  puVar2[1] = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar2[2] = puVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = puVar2;
  puVar2[3] = 0x370; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar2[4] = 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
                    /* WARNING: Could not recover jumptable at 0x001437b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x10))(plVar3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



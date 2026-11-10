/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004E73A0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e73a0; name: FUN_.text__005e73a0
 */


void FUN__text__005e73a0(long param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar3 = *(long **)(param_1 + 0xc0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar1 = *(long **)(param_1 + 200); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar3 != plVar1) { // [自动静态注释] 条件判断/分支
    do { // [自动静态注释] 循环/迭代
      if (*plVar3 == param_2) goto LAB__text__005e73dc; // [自动静态注释] 条件判断/分支
      plVar3 = plVar3 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (plVar3 != plVar1); // [自动静态注释] 循环/迭代
    plVar3 = plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
LAB__text__005e73dc: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  local_8 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar3 == plVar1) { // [自动静态注释] 条件判断/分支
    if (plVar1 == *(long **)(param_1 + 0xd0)) { // [自动静态注释] 条件判断/分支
      FUN__text__005e5380((long *)(param_1 + 0xc0),&local_8); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar4 = *(ulong *)(param_1 + 0x130); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar2 = (uint)uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      goto joined_r0x005e7438; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    uVar4 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = uVar4 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(uVar4 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    *(undefined8 *)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0xd8);
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
    *plVar1 = param_2;
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
    *(long **)(param_1 + 200) = plVar1 + 1;
  } // [自动静态注释] 作用域/控制流边界
  uVar4 = *(ulong *)(param_1 + 0x130); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = (uint)uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
joined_r0x005e7438: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if ((uVar2 >> 2 & 1) == 0) { // [自动静态注释] 条件判断/分支
    *(ulong *)(param_1 + 0x130) = uVar4 | 4;
    FUN__text__005e4890(*(undefined8 *)(param_1 + 0x150),param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



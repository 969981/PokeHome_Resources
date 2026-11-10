/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003C7920
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c7920; name: FUN_.text__004c7920
 */


void FUN__text__004c7920(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  bool bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar7 = *(long **)(param_1 + 0x138); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar7 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    do { // [自动静态注释] 循环/迭代
      if ((long *)plVar7[3] != (long *)0x0) { // [自动静态注释] 条件判断/分支
        *(undefined4 *)(plVar7 + 4) = 0;
        if ((long *)plVar7[3] != plVar7 + 2) { // [自动静态注释] 条件判断/分支
          FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
        } // [自动静态注释] 作用域/控制流边界
        plVar7[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined4 *)((long)plVar7 + 0x24) = 0;
      } // [自动静态注释] 作用域/控制流边界
      plVar7 = (long *)*plVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (plVar7 != (long *)0x0); // [自动静态注释] 循环/迭代
    puVar6 = *(undefined8 **)(param_1 + 0x138); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    while (puVar6 != (undefined8 *)0x0) { // [自动静态注释] 循环/迭代
      *(undefined8 *)(param_1 + 0x138) = *puVar6;
      if (*(undefined8 **)(param_1 + 0x140) == puVar6) { // [自动静态注释] 条件判断/分支
        *(undefined8 *)(param_1 + 0x140) = 0;
      } // [自动静态注释] 作用域/控制流边界
      *puVar6 = *(undefined8 *)(param_1 + 0x148);
      *(undefined8 **)(param_1 + 0x148) = puVar6;
      *(int *)(param_1 + 0x15c) = *(int *)(param_1 + 0x15c) + -1;
      puVar6 = *(undefined8 **)(param_1 + 0x138); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x188) = 0;
  plVar7 = *(long **)(param_1 + 0x160); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long **)(param_1 + 0x160) != (long *)0x0) { // [自动静态注释] 条件判断/分支
    do { // [自动静态注释] 循环/迭代
      plVar4 = plVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long *)(param_1 + 0x160) = *plVar4;
      if (*(long **)(param_1 + 0x168) == plVar4) { // [自动静态注释] 条件判断/分支
        *(undefined8 *)(param_1 + 0x168) = 0;
      } // [自动静态注释] 作用域/控制流边界
      *plVar4 = *(long *)(param_1 + 0x170);
      *(long **)(param_1 + 0x170) = plVar4;
      *(int *)(param_1 + 0x184) = *(int *)(param_1 + 0x184) + -1;
      plVar7 = *(long **)(param_1 + 0x160); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*(long **)(param_1 + 0x160) == (long *)0x0) goto LAB__text__004c79a8; // [自动静态注释] 条件判断/分支
    } while( true ); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  plVar4 = (long *)*(long *)(param_1 + 0x170); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (plVar4 != (long *)0x0) { // [自动静态注释] 循环/迭代
LAB__text__004c79a8: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    plVar7 = (long *)*plVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar1 = plVar4 < *(long **)(param_1 + 0x178); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar2 = *(long **)(param_1 + 0x178) + (ulong)*(uint *)(param_1 + 0x180) * 3 <= plVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar4 = plVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (bVar1 || bVar2) { // [自动静态注释] 条件判断/分支
      FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  if (*(long *)(param_1 + 0x178) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined8 *)(param_1 + 0x178) = 0;
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  puVar3 = *(ulong **)(param_1 + 0x138); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(ulong **)(param_1 + 0x138) == (ulong *)0x0) { // [自动静态注释] 条件判断/分支
    puVar5 = *(ulong **)(param_1 + 0x148); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (puVar5 == (ulong *)0x0) goto LAB__text__004c7b00; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    do { // [自动静态注释] 循环/迭代
      puVar5 = puVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(ulong *)(param_1 + 0x138) = *puVar5;
      if (*(ulong **)(param_1 + 0x140) == puVar5) { // [自动静态注释] 条件判断/分支
        *(undefined8 *)(param_1 + 0x140) = 0;
      } // [自动静态注释] 作用域/控制流边界
      *puVar5 = *(ulong *)(param_1 + 0x148);
      *(ulong **)(param_1 + 0x148) = puVar5;
      *(int *)(param_1 + 0x15c) = *(int *)(param_1 + 0x15c) + -1;
      puVar3 = *(ulong **)(param_1 + 0x138); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (*(ulong **)(param_1 + 0x138) != (ulong *)0x0); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  do { // [自动静态注释] 循环/迭代
    uVar8 = *puVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (puVar5 < *(ulong *)(param_1 + 0x150) || // [自动静态注释] 条件判断/分支
        *(ulong *)(param_1 + 0x150) + (ulong)*(uint *)(param_1 + 0x158) * 0x28 <= puVar5) {
      FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    puVar5 = (ulong *)uVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while (uVar8 != 0); // [自动静态注释] 循环/迭代
LAB__text__004c7b00: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (*(long *)(param_1 + 0x150) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined8 *)(param_1 + 0x150) = 0;
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(long *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  FUN__text__0049cd14(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



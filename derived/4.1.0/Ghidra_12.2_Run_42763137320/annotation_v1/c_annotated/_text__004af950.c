/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003AF950
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004af950; name: FUN_.text__004af950
 */


void FUN__text__004af950(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  bool bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong *puVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__004afb00(); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__004afde0(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__004aff00(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*(long *)(param_1 + 0x20) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__00400fc0(0x10); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined8 *)(param_1 + 0x20) = 0;
  } // [自动静态注释] 作用域/控制流边界
  plVar5 = *(long **)(param_1 + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar5 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    do { // [自动静态注释] 循环/迭代
      plVar3 = plVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long *)(param_1 + 0x38) = *plVar3;
      if (*(long **)(param_1 + 0x40) == plVar3) { // [自动静态注释] 条件判断/分支
        *(undefined8 *)(param_1 + 0x40) = 0;
      } // [自动静态注释] 作用域/控制流边界
      *plVar3 = *(long *)(param_1 + 0x48);
      *(long **)(param_1 + 0x48) = plVar3;
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -1;
      plVar5 = *(long **)(param_1 + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*(long **)(param_1 + 0x38) == (long *)0x0) goto LAB__text__004af9b8; // [自动静态注释] 条件判断/分支
    } while( true ); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  plVar3 = (long *)*(long *)(param_1 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (plVar3 != (long *)0x0) { // [自动静态注释] 循环/迭代
LAB__text__004af9b8: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    plVar5 = (long *)*plVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar1 = plVar3 < *(long **)(param_1 + 0x50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar2 = *(long **)(param_1 + 0x50) + (ulong)*(uint *)(param_1 + 0x58) * 3 <= plVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar3 = plVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (bVar1 || bVar2) { // [自动静态注释] 条件判断/分支
      FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  if (*(long *)(param_1 + 0x50) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined8 *)(param_1 + 0x50) = 0;
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  puVar6 = *(ulong **)(param_1 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (puVar6 == (ulong *)0x0) { // [自动静态注释] 条件判断/分支
    puVar4 = *(ulong **)(param_1 + 0x70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (puVar4 == (ulong *)0x0) goto LAB__text__004afad0; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    do { // [自动静态注释] 循环/迭代
      puVar4 = puVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(ulong *)(param_1 + 0x60) = *puVar4;
      if (*(ulong **)(param_1 + 0x68) == puVar4) { // [自动静态注释] 条件判断/分支
        *(undefined8 *)(param_1 + 0x68) = 0;
      } // [自动静态注释] 作用域/控制流边界
      *puVar4 = *(ulong *)(param_1 + 0x70);
      *(ulong **)(param_1 + 0x70) = puVar4;
      *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -1;
      puVar6 = *(ulong **)(param_1 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (*(ulong **)(param_1 + 0x60) != (ulong *)0x0); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  do { // [自动静态注释] 循环/迭代
    uVar7 = *puVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (puVar4 < *(ulong *)(param_1 + 0x78) || // [自动静态注释] 条件判断/分支
        *(ulong *)(param_1 + 0x78) + (ulong)*(uint *)(param_1 + 0x80) * 0x18 <= puVar4) {
      FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    puVar4 = (ulong *)uVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while (uVar7 != 0); // [自动静态注释] 循环/迭代
LAB__text__004afad0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (*(long *)(param_1 + 0x78) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined8 *)(param_1 + 0x78) = 0;
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



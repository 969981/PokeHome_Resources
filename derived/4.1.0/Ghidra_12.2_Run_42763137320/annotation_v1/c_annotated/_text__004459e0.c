/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003459E0
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004459e0; name: FUN_.text__004459e0
 */


void FUN__text__004459e0(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int *piVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong *puVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong *puVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar10 = (long *)(param_1 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar11 = (long *)*plVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar11 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    do { // [自动静态注释] 循环/迭代
      lVar6 = plVar11[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      piVar1 = (int *)(lVar6 + 0x24); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        iVar2 = *piVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        cVar3 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
        if (bVar4) { // [自动静态注释] 条件判断/分支
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
        } // [自动静态注释] 作用域/控制流边界
      } while (cVar3 != '\0'); // [自动静态注释] 循环/迭代
      if (iVar2 + -1 == 0) { // [自动静态注释] 条件判断/分支
        (**(code **)(*(long *)(lVar6 + 0x10) + 0x20))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      plVar11 = (long *)*plVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (plVar11 != (long *)0x0); // [自动静态注释] 循环/迭代
    plVar11 = (long *)*plVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((long *)*plVar10 != (long *)0x0) { // [自动静态注释] 条件判断/分支
      do { // [自动静态注释] 循环/迭代
        plVar7 = plVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(long *)(param_1 + 0x20) = *plVar7;
        if (*(long **)(param_1 + 0x28) == plVar7) { // [自动静态注释] 条件判断/分支
          *(undefined8 *)(param_1 + 0x28) = 0;
        } // [自动静态注释] 作用域/控制流边界
        *plVar7 = *(long *)(param_1 + 0x30);
        *(long **)(param_1 + 0x30) = plVar7;
        *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + -1;
        plVar11 = *(long **)(param_1 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (*(long **)(param_1 + 0x20) == (long *)0x0) goto LAB__text__00445b3c; // [自动静态注释] 条件判断/分支
      } while( true ); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  plVar7 = (long *)*(long *)(param_1 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (plVar7 != (long *)0x0) { // [自动静态注释] 循环/迭代
LAB__text__00445b3c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    plVar11 = (long *)*plVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar4 = plVar7 < *(long **)(param_1 + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar5 = *(long **)(param_1 + 0x38) + (ulong)*(uint *)(param_1 + 0x40) * 4 <= plVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar7 = plVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (bVar4 || bVar5) { // [自动静态注释] 条件判断/分支
      FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  if (*(long *)(param_1 + 0x38) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined8 *)(param_1 + 0x38) = 0;
  } // [自动静态注释] 作用域/控制流边界
  *plVar10 = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  plVar10 = *(long **)(param_1 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (plVar10 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    do { // [自动静态注释] 循环/迭代
      plVar11 = plVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long *)(param_1 + 0x48) = *plVar11;
      if (*(long **)(param_1 + 0x50) == plVar11) { // [自动静态注释] 条件判断/分支
        *(undefined8 *)(param_1 + 0x50) = 0;
      } // [自动静态注释] 作用域/控制流边界
      *plVar11 = *(long *)(param_1 + 0x58);
      *(long **)(param_1 + 0x58) = plVar11;
      *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + -1;
      plVar10 = *(long **)(param_1 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*(long **)(param_1 + 0x48) == (long *)0x0) goto LAB__text__00445a8c; // [自动静态注释] 条件判断/分支
    } while( true ); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  plVar11 = (long *)*(long *)(param_1 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (plVar11 != (long *)0x0) { // [自动静态注释] 循环/迭代
LAB__text__00445a8c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    plVar10 = (long *)*plVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar4 = plVar11 < *(long **)(param_1 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar5 = *(long **)(param_1 + 0x60) + (ulong)*(uint *)(param_1 + 0x68) * 3 <= plVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar11 = plVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (bVar4 || bVar5) { // [自动静态注释] 条件判断/分支
      FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  if (*(long *)(param_1 + 0x60) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined8 *)(param_1 + 0x60) = 0;
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  puVar9 = *(ulong **)(param_1 + 0x70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (puVar9 == (ulong *)0x0) { // [自动静态注释] 条件判断/分支
    puVar8 = *(ulong **)(param_1 + 0x80); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (puVar8 == (ulong *)0x0) goto LAB__text__00445c10; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    do { // [自动静态注释] 循环/迭代
      puVar8 = puVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(ulong *)(param_1 + 0x70) = *puVar8;
      if (*(ulong **)(param_1 + 0x78) == puVar8) { // [自动静态注释] 条件判断/分支
        *(undefined8 *)(param_1 + 0x78) = 0;
      } // [自动静态注释] 作用域/控制流边界
      *puVar8 = *(ulong *)(param_1 + 0x80);
      *(ulong **)(param_1 + 0x80) = puVar8;
      *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + -1;
      puVar9 = *(ulong **)(param_1 + 0x70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (*(ulong **)(param_1 + 0x70) != (ulong *)0x0); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  do { // [自动静态注释] 循环/迭代
    uVar12 = *puVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (puVar8 < *(ulong *)(param_1 + 0x88) || // [自动静态注释] 条件判断/分支
        *(ulong *)(param_1 + 0x88) + (ulong)*(uint *)(param_1 + 0x90) * 0x18 <= puVar8) {
      FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    puVar8 = (ulong *)uVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while (uVar12 != 0); // [自动静态注释] 循环/迭代
LAB__text__00445c10: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (*(long *)(param_1 + 0x88) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined8 *)(param_1 + 0x88) = 0;
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



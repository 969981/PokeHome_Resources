/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003726E0
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004726e0; name: FUN_.text__004726e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004726e0(undefined8 param_1,ulong param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *pcVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar15; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  pcVar9 = _DAT_008a4d00; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar8 = _DAT_008a4cf8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  piVar7 = _DAT_008a4cf0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar3 = *(long **)(_DAT_008a4cf0 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (plVar3 != (long *)0x0) { // [自动静态注释] 循环/迭代
    plVar1 = plVar3 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *plVar8 = (long)plVar3;
    piVar2 = (int *)((long)plVar3 + 0x24); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *pcVar9 = '\0';
    do { // [自动静态注释] 循环/迭代
      cVar5 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
      if (bVar6) { // [自动静态注释] 条件判断/分支
        *piVar2 = *piVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
      } // [自动静态注释] 作用域/控制流边界
    } while (cVar5 != '\0'); // [自动静态注释] 循环/迭代
    (**(code **)(*plVar3 + 0x98))(plVar3,param_1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    plVar15 = (long *)plVar3[8]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *plVar8 = 0;
    if (*pcVar9 != '\0') { // [自动静态注释] 条件判断/分支
      plVar13 = (long *)(piVar7 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *pcVar9 = '\0';
      plVar12 = (long *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        plVar11 = plVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        plVar12 = (long *)*plVar13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        plVar13 = plVar12 + 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (plVar12 != (long *)0x0 && plVar12 != plVar3); // [自动静态注释] 循环/迭代
      if (plVar12 != (long *)0x0) { // [自动静态注释] 条件判断/分支
        plVar3 = (long *)(piVar7 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (*(long **)(piVar7 + 4) != plVar12) { // [自动静态注释] 条件判断/分支
          plVar3 = plVar11 + 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        *plVar3 = plVar12[8];
        if (*(long **)(piVar7 + 2) == plVar12) { // [自动静态注释] 条件判断/分支
          *(long **)(piVar7 + 2) = plVar11;
        } // [自动静态注释] 作用域/控制流边界
        *piVar7 = *piVar7 + -1;
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    do { // [自动静态注释] 循环/迭代
      iVar4 = *piVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      cVar5 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
      if (bVar6) { // [自动静态注释] 条件判断/分支
        *piVar2 = iVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
      } // [自动静态注释] 作用域/控制流边界
    } while (cVar5 != '\0'); // [自动静态注释] 循环/迭代
    plVar3 = plVar15; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (iVar4 + -1 == 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*plVar1 + 0x20))(plVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  puVar10 = *(undefined8 **)(_DAT_008a4d08 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (puVar10 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    if ((param_2 & 1) == 0) { // [自动静态注释] 条件判断/分支
      do { // [自动静态注释] 循环/迭代
        puVar14 = (undefined8 *)puVar10[0x48]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        FUN__text__004743fc(puVar10,param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
        puVar10 = puVar14; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (puVar14 != (undefined8 *)0x0); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      do { // [自动静态注释] 循环/迭代
        puVar14 = (undefined8 *)puVar10[0x48]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        (**(code **)*puVar10)(puVar10,0,1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        puVar10 = puVar14; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (puVar14 != (undefined8 *)0x0); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



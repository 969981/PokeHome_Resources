/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003BDB50
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 内存顺序控制, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004bdb50; name: FUN_.text__004bdb50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__004bdb50(long param_1,int param_2,undefined4 param_3,undefined4 param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  MutexType *pMVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(undefined4 *)(param_1 + 0x48) = 0;
  puVar10 = _DAT_008a45c0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0xa8) = 0;
  FUN__text__004b42a0(*puVar10,*(undefined4 *)(param_1 + 0x6c)); // [自动静态注释] 调用尚未恢复正式名称的函数
  piVar2 = DAT_00ae9a38; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((param_2 == 0) && (uVar5 = *(uint *)(param_1 + 0x90), uVar5 != 0)) { // [自动静态注释] 条件判断/分支
    pMVar1 = (MutexType *)(DAT_00ae9a38 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    while( true ) { // [自动静态注释] 循环/迭代
      while (iVar4 = *piVar2, -1 < iVar4) { // [自动静态注释] 循环/迭代
        while (*piVar2 == iVar4) { // [自动静态注释] 循环/迭代
          cVar7 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
          if (bVar8) { // [自动静态注释] 条件判断/分支
            *piVar2 = iVar4 + 1;
            cVar7 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
          } // [自动静态注释] 作用域/控制流边界
          if (cVar7 == '\0') goto LAB__text__004bdc08; // [自动静态注释] 条件判断/分支
        } // [自动静态注释] 作用域/控制流边界
        ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      nn::os::LockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if (*piVar2 < 0) break; // [自动静态注释] 条件判断/分支
      nn::os::UnlockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
LAB__text__004bdc08: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar6 = piVar2[0x1a]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar6 == 0) { // [自动静态注释] 条件判断/分支
      plVar12 = (long *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar9 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (uVar6 != 0) { // [自动静态注释] 条件判断/分支
        uVar9 = uVar5 / uVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      plVar12 = *(long **)(*(long *)(piVar2 + 0x18) + (ulong)(uVar5 - uVar9 * uVar6) * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (plVar12 != (long *)0x0) { // [自动静态注释] 条件判断/分支
LAB__text__004bdc24: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        if (*(uint *)(plVar12 + 2) != uVar5) goto code_r0x004bdc30; // [自动静态注释] 条件判断/分支
        piVar3 = (int *)((long)plVar12 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        do { // [自动静态注释] 循环/迭代
          cVar7 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
          if (bVar8) { // [自动静态注释] 条件判断/分支
            *piVar3 = *piVar3 + 1;
            cVar7 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
          } // [自动静态注释] 作用域/控制流边界
        } while (cVar7 != '\0'); // [自动静态注释] 循环/迭代
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
LAB__text__004bdc68: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    while (iVar4 = *piVar2, -1 < iVar4) { // [自动静态注释] 循环/迭代
      while (*piVar2 == iVar4) { // [自动静态注释] 循环/迭代
        cVar7 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
        if (bVar8) { // [自动静态注释] 条件判断/分支
          *piVar2 = iVar4 + -1;
          cVar7 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
        } // [自动静态注释] 作用域/控制流边界
        if (cVar7 == '\0') { // [自动静态注释] 条件判断/分支
          if ((iVar4 + -1 == 0) && (0 < piVar2[0xc])) { // [自动静态注释] 条件判断/分支
            nn::os::SignalEvent((EventType *)(piVar2 + 0xe)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          } // [自动静态注释] 作用域/控制流边界
          goto joined_r0x004bdca4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    nn::os::UnlockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
joined_r0x004bdca4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (plVar12 != (long *)0x0) { // [自动静态注释] 条件判断/分支
      FUN__text__0046469c(plVar12 + -2,*(undefined8 *)(param_1 + 0x50), // [自动静态注释] 调用尚未恢复正式名称的函数
                          *(undefined4 *)(param_1 + 0x6c),param_3,param_4);
      piVar2 = (int *)((long)plVar12 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        iVar4 = *piVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        cVar7 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
        if (bVar8) { // [自动静态注释] 条件判断/分支
          *piVar2 = iVar4 + -1;
          cVar7 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
        } // [自动静态注释] 作用域/控制流边界
      } while (cVar7 != '\0'); // [自动静态注释] 循环/迭代
      if (iVar4 + -1 == 0) { // [自动静态注释] 条件判断/分支
        (**(code **)(*plVar12 + 0x20))(plVar12); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    nn::os::LockMutex((MutexType *)(param_1 + 0x28)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x28)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  piVar2 = DAT_00ae9a38; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = *(uint *)(param_1 + 0x78); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar5 != 0) { // [自动静态注释] 条件判断/分支
    pMVar1 = (MutexType *)(DAT_00ae9a38 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    while( true ) { // [自动静态注释] 循环/迭代
      while (iVar4 = *piVar2, -1 < iVar4) { // [自动静态注释] 循环/迭代
        while (*piVar2 == iVar4) { // [自动静态注释] 循环/迭代
          cVar7 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
          if (bVar8) { // [自动静态注释] 条件判断/分支
            *piVar2 = iVar4 + 1;
            cVar7 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
          } // [自动静态注释] 作用域/控制流边界
          if (cVar7 == '\0') goto LAB__text__004bdd68; // [自动静态注释] 条件判断/分支
        } // [自动静态注释] 作用域/控制流边界
        ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      nn::os::LockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if (*piVar2 < 0) break; // [自动静态注释] 条件判断/分支
      nn::os::UnlockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
LAB__text__004bdd68: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar6 = piVar2[0x1a]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar6 == 0) { // [自动静态注释] 条件判断/分支
      plVar12 = (long *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar9 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (uVar6 != 0) { // [自动静态注释] 条件判断/分支
        uVar9 = uVar5 / uVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      plVar12 = *(long **)(*(long *)(piVar2 + 0x18) + (ulong)(uVar5 - uVar9 * uVar6) * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (plVar12 != (long *)0x0) { // [自动静态注释] 条件判断/分支
LAB__text__004bdd84: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        if (*(uint *)(plVar12 + 2) != uVar5) goto code_r0x004bdd90; // [自动静态注释] 条件判断/分支
        piVar3 = (int *)((long)plVar12 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        do { // [自动静态注释] 循环/迭代
          cVar7 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
          if (bVar8) { // [自动静态注释] 条件判断/分支
            *piVar3 = *piVar3 + 1;
            cVar7 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
          } // [自动静态注释] 作用域/控制流边界
        } while (cVar7 != '\0'); // [自动静态注释] 循环/迭代
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
LAB__text__004bddc8: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    while (iVar4 = *piVar2, -1 < iVar4) { // [自动静态注释] 循环/迭代
      while (*piVar2 == iVar4) { // [自动静态注释] 循环/迭代
        cVar7 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
        if (bVar8) { // [自动静态注释] 条件判断/分支
          *piVar2 = iVar4 + -1;
          cVar7 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
        } // [自动静态注释] 作用域/控制流边界
        if (cVar7 == '\0') { // [自动静态注释] 条件判断/分支
          if ((iVar4 + -1 == 0) && (0 < piVar2[0xc])) { // [自动静态注释] 条件判断/分支
            nn::os::SignalEvent((EventType *)(piVar2 + 0xe)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          } // [自动静态注释] 作用域/控制流边界
          if (plVar12 == (long *)0x0) { // [自动静态注释] 条件判断/分支
            return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
          } // [自动静态注释] 作用域/控制流边界
          goto LAB__text__004bde08; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    nn::os::UnlockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (plVar12 != (long *)0x0) { // [自动静态注释] 条件判断/分支
LAB__text__004bde08: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      plVar11 = plVar12 + -2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (param_2 == 0) { // [自动静态注释] 条件判断/分支
        FUN__text__0046469c(plVar11,*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x6c), // [自动静态注释] 调用尚未恢复正式名称的函数
                            param_3,param_4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        (**(code **)(*plVar11 + 0xb0))(plVar11,*(undefined8 *)(param_1 + 0x50),plVar11); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      piVar2 = (int *)((long)plVar12 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        iVar4 = *piVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        cVar7 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
        if (bVar8) { // [自动静态注释] 条件判断/分支
          *piVar2 = iVar4 + -1;
          cVar7 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
        } // [自动静态注释] 作用域/控制流边界
      } while (cVar7 != '\0'); // [自动静态注释] 循环/迭代
      if (iVar4 + -1 == 0) { // [自动静态注释] 条件判断/分支
        (**(code **)(*plVar12 + 0x20))(plVar12); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
code_r0x004bdc30: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  plVar12 = (long *)plVar12[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar12 == (long *)0x0) goto LAB__text__004bdc68; // [自动静态注释] 条件判断/分支
  goto LAB__text__004bdc24; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
code_r0x004bdd90: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  plVar12 = (long *)plVar12[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar12 == (long *)0x0) goto LAB__text__004bddc8; // [自动静态注释] 条件判断/分支
  goto LAB__text__004bdd84; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
} // [自动静态注释] 作用域/控制流边界



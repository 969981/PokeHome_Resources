/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003CE250
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 内存顺序控制, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ce250; name: FUN_.text__004ce250
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004ce250(long *param_1,uint *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int *piVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  MutexType *pMVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar5 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = 0;
  if (uVar5 != 0) { // [自动静态注释] 条件判断/分支
    lVar11 = *_DAT_008a45c8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(char *)((long)param_2 + 5) == '\0') { // [自动静态注释] 条件判断/分支
      piVar1 = (int *)(lVar11 + 0x4b0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      pMVar2 = (MutexType *)(lVar11 + 0x4c0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      while( true ) { // [自动静态注释] 循环/迭代
        while (iVar4 = *piVar1, -1 < iVar4) { // [自动静态注释] 循环/迭代
          while (*piVar1 == iVar4) { // [自动静态注释] 循环/迭代
            cVar7 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
            if (bVar8) { // [自动静态注释] 条件判断/分支
              *piVar1 = iVar4 + 1;
              cVar7 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
            } // [自动静态注释] 作用域/控制流边界
            if (cVar7 == '\0') goto LAB__text__004ce378; // [自动静态注释] 条件判断/分支
          } // [自动静态注释] 作用域/控制流边界
          ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        nn::os::LockMutex(pMVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        if (*piVar1 < 0) break; // [自动静态注释] 条件判断/分支
        nn::os::UnlockMutex(pMVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
LAB__text__004ce378: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar6 = *(uint *)(lVar11 + 0x518); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (uVar6 == 0) { // [自动静态注释] 条件判断/分支
        lVar12 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        uVar9 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (uVar6 != 0) { // [自动静态注释] 条件判断/分支
          uVar9 = uVar5 / uVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        lVar12 = *(long *)(*(long *)(lVar11 + 0x510) + (ulong)(uVar5 - uVar9 * uVar6) * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (lVar12 != 0) { // [自动静态注释] 条件判断/分支
LAB__text__004ce394: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          if (*(uint *)(lVar12 + 0x10) != uVar5) goto code_r0x004ce3a0; // [自动静态注释] 条件判断/分支
          piVar3 = (int *)(lVar12 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
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
LAB__text__004ce458: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      while (iVar4 = *piVar1, -1 < iVar4) { // [自动静态注释] 循环/迭代
        while (*piVar1 == iVar4) { // [自动静态注释] 循环/迭代
          cVar7 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
          if (bVar8) { // [自动静态注释] 条件判断/分支
            *piVar1 = iVar4 + -1;
            cVar7 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
          } // [自动静态注释] 作用域/控制流边界
          if (cVar7 == '\0') { // [自动静态注释] 条件判断/分支
            if ((iVar4 + -1 == 0) && (0 < *(int *)(lVar11 + 0x4e0))) { // [自动静态注释] 条件判断/分支
              nn::os::SignalEvent((EventType *)(lVar11 + 0x4e8)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            } // [自动静态注释] 作用域/控制流边界
            plVar10 = (long *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *param_1 = lVar12;
            goto joined_r0x004ce49c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          } // [自动静态注释] 作用域/控制流边界
        } // [自动静态注释] 作用域/控制流边界
        ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      nn::os::UnlockMutex(pMVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      plVar10 = (long *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *param_1 = lVar12;
joined_r0x004ce49c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if (plVar10 == (long *)0x0) { // [自动静态注释] 条件判断/分支
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      piVar1 = (int *)((long)plVar10 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        iVar4 = *piVar1 + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        cVar7 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
        if (bVar8) { // [自动静态注释] 条件判断/分支
          *piVar1 = iVar4;
          cVar7 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
        } // [自动静态注释] 作用域/控制流边界
      } while (cVar7 != '\0'); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      piVar1 = (int *)(lVar11 + 0x528); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      pMVar2 = (MutexType *)(lVar11 + 0x538); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      while( true ) { // [自动静态注释] 循环/迭代
        while (iVar4 = *piVar1, -1 < iVar4) { // [自动静态注释] 循环/迭代
          while (*piVar1 == iVar4) { // [自动静态注释] 循环/迭代
            cVar7 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
            if (bVar8) { // [自动静态注释] 条件判断/分支
              *piVar1 = iVar4 + 1;
              cVar7 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
            } // [自动静态注释] 作用域/控制流边界
            if (cVar7 == '\0') goto LAB__text__004ce2e8; // [自动静态注释] 条件判断/分支
          } // [自动静态注释] 作用域/控制流边界
          ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        nn::os::LockMutex(pMVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        if (*piVar1 < 0) break; // [自动静态注释] 条件判断/分支
        nn::os::UnlockMutex(pMVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
LAB__text__004ce2e8: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar6 = *(uint *)(lVar11 + 0x590); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (uVar6 == 0) { // [自动静态注释] 条件判断/分支
        lVar12 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        uVar9 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (uVar6 != 0) { // [自动静态注释] 条件判断/分支
          uVar9 = uVar5 / uVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        lVar12 = *(long *)(*(long *)(lVar11 + 0x588) + (ulong)(uVar5 - uVar9 * uVar6) * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (lVar12 != 0) { // [自动静态注释] 条件判断/分支
LAB__text__004ce304: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          if (*(uint *)(lVar12 + 0x10) != uVar5) goto code_r0x004ce310; // [自动静态注释] 条件判断/分支
          piVar3 = (int *)(lVar12 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
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
LAB__text__004ce3d8: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      while (iVar4 = *piVar1, -1 < iVar4) { // [自动静态注释] 循环/迭代
        while (*piVar1 == iVar4) { // [自动静态注释] 循环/迭代
          cVar7 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
          if (bVar8) { // [自动静态注释] 条件判断/分支
            *piVar1 = iVar4 + -1;
            cVar7 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
          } // [自动静态注释] 作用域/控制流边界
          if (cVar7 == '\0') { // [自动静态注释] 条件判断/分支
            if ((iVar4 + -1 == 0) && (0 < *(int *)(lVar11 + 0x558))) { // [自动静态注释] 条件判断/分支
              nn::os::SignalEvent((EventType *)(lVar11 + 0x560)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            } // [自动静态注释] 作用域/控制流边界
            plVar10 = (long *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *param_1 = lVar12;
            goto joined_r0x004ce41c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          } // [自动静态注释] 作用域/控制流边界
        } // [自动静态注释] 作用域/控制流边界
        ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      nn::os::UnlockMutex(pMVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      plVar10 = (long *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *param_1 = lVar12;
joined_r0x004ce41c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if (plVar10 == (long *)0x0) { // [自动静态注释] 条件判断/分支
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      piVar1 = (int *)((long)plVar10 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        iVar4 = *piVar1 + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        cVar7 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
        if (bVar8) { // [自动静态注释] 条件判断/分支
          *piVar1 = iVar4;
          cVar7 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
        } // [自动静态注释] 作用域/控制流边界
      } while (cVar7 != '\0'); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    if (iVar4 == 0) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not recover jumptable at 0x004ce4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar10 + 0x20))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
code_r0x004ce3a0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  lVar12 = *(long *)(lVar12 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar12 == 0) goto LAB__text__004ce458; // [自动静态注释] 条件判断/分支
  goto LAB__text__004ce394; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
code_r0x004ce310: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  lVar12 = *(long *)(lVar12 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar12 == 0) goto LAB__text__004ce3d8; // [自动静态注释] 条件判断/分支
  goto LAB__text__004ce304; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
} // [自动静态注释] 作用域/控制流边界



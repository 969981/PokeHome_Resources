/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0036D390
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 内存顺序控制, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0046d390; name: FUN_.text__0046d390
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0046d390(long *param_1,undefined8 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

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
  long *plVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar10 = _DAT_008a45c8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((int)param_1[1] != 0) { // [自动静态注释] 条件判断/分支
    puVar12 = (undefined8 *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      if (*(char *)((long)*puVar12 + 0xd) == '\x04') { // [自动静态注释] 条件判断/分支
        lVar13 = *plVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        piVar1 = (int *)(lVar13 + 0x348); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar5 = *(uint *)*puVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        pMVar2 = (MutexType *)(lVar13 + 0x358); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        while( true ) { // [自动静态注释] 循环/迭代
          while (iVar4 = *piVar1, -1 < iVar4) { // [自动静态注释] 循环/迭代
            while (*piVar1 == iVar4) { // [自动静态注释] 循环/迭代
              cVar7 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
              if (bVar8) { // [自动静态注释] 条件判断/分支
                *piVar1 = iVar4 + 1;
                cVar7 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
              } // [自动静态注释] 作用域/控制流边界
              if (cVar7 == '\0') goto LAB__text__0046d460; // [自动静态注释] 条件判断/分支
            } // [自动静态注释] 作用域/控制流边界
            ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          } // [自动静态注释] 作用域/控制流边界
          nn::os::LockMutex(pMVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          if (*piVar1 < 0) break; // [自动静态注释] 条件判断/分支
          nn::os::UnlockMutex(pMVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
LAB__text__0046d460: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        uVar6 = *(uint *)(lVar13 + 0x3b0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (uVar6 == 0) { // [自动静态注释] 条件判断/分支
          plVar11 = (long *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          uVar9 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (uVar6 != 0) { // [自动静态注释] 条件判断/分支
            uVar9 = uVar5 / uVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
          plVar11 = *(long **)(*(long *)(lVar13 + 0x3a8) + (ulong)(uVar5 - uVar9 * uVar6) * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (plVar11 != (long *)0x0) { // [自动静态注释] 条件判断/分支
LAB__text__0046d480: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            if (*(uint *)(plVar11 + 2) != uVar5) goto code_r0x0046d48c; // [自动静态注释] 条件判断/分支
            piVar3 = (int *)((long)plVar11 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
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
LAB__text__0046d4c4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        while (iVar4 = *piVar1, -1 < iVar4) { // [自动静态注释] 循环/迭代
          while (*piVar1 == iVar4) { // [自动静态注释] 循环/迭代
            cVar7 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
            if (bVar8) { // [自动静态注释] 条件判断/分支
              *piVar1 = iVar4 + -1;
              cVar7 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
            } // [自动静态注释] 作用域/控制流边界
            if (cVar7 == '\0') { // [自动静态注释] 条件判断/分支
              if ((iVar4 + -1 == 0) && (0 < *(int *)(lVar13 + 0x378))) { // [自动静态注释] 条件判断/分支
                nn::os::SignalEvent((EventType *)(lVar13 + 0x380)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              } // [自动静态注释] 作用域/控制流边界
              if (plVar11 == (long *)0x0) goto LAB__text__0046d3d0; // [自动静态注释] 条件判断/分支
              goto LAB__text__0046d504; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            } // [自动静态注释] 作用域/控制流边界
          } // [自动静态注释] 作用域/控制流边界
          ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        nn::os::UnlockMutex(pMVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        if (plVar11 != (long *)0x0) { // [自动静态注释] 条件判断/分支
LAB__text__0046d504: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          FUN__text__0046d570(param_2,plVar11); // [自动静态注释] 调用尚未恢复正式名称的函数
          piVar1 = (int *)((long)plVar11 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          do { // [自动静态注释] 循环/迭代
            iVar4 = *piVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            cVar7 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
            if (bVar8) { // [自动静态注释] 条件判断/分支
              *piVar1 = iVar4 + -1;
              cVar7 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
            } // [自动静态注释] 作用域/控制流边界
          } while (cVar7 != '\0'); // [自动静态注释] 循环/迭代
          if (iVar4 + -1 == 0) { // [自动静态注释] 条件判断/分支
            (**(code **)(*plVar11 + 0x20))(plVar11); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          } // [自动静态注释] 作用域/控制流边界
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
LAB__text__0046d3d0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      puVar12 = puVar12 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (puVar12 != (undefined8 *)(*param_1 + (ulong)*(uint *)(param_1 + 1) * 8)); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
code_r0x0046d48c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  plVar11 = (long *)plVar11[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar11 == (long *)0x0) goto LAB__text__0046d4c4; // [自动静态注释] 条件判断/分支
  goto LAB__text__0046d480; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
} // [自动静态注释] 作用域/控制流边界



/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00364A20
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 内存顺序控制, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00464a20; name: FUN_.text__00464a20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00464a20(uint param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  MutexType *pMVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  piVar9 = (int *)*_DAT_008a45c8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pMVar1 = (MutexType *)(piVar9 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while( true ) { // [自动静态注释] 循环/迭代
    while (iVar3 = *piVar9, -1 < iVar3) { // [自动静态注释] 循环/迭代
      while (*piVar9 == iVar3) { // [自动静态注释] 循环/迭代
        cVar5 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar6 = (bool)ExclusiveMonitorPass(piVar9,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
        if (bVar6) { // [自动静态注释] 条件判断/分支
          *piVar9 = iVar3 + 1;
          cVar5 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
        } // [自动静态注释] 作用域/控制流边界
        if (cVar5 == '\0') goto LAB__text__00464a98; // [自动静态注释] 条件判断/分支
      } // [自动静态注释] 作用域/控制流边界
      ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    nn::os::LockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (*piVar9 < 0) break; // [自动静态注释] 条件判断/分支
    nn::os::UnlockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
LAB__text__00464a98: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar4 = piVar9[0x1a]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar4 == 0) { // [自动静态注释] 条件判断/分支
    plVar8 = (long *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar7 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar4 != 0) { // [自动静态注释] 条件判断/分支
      uVar7 = param_1 / uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    for (plVar8 = *(long **)(*(long *)(piVar9 + 0x18) + (ulong)(param_1 - uVar7 * uVar4) * 8); // [自动静态注释] 循环/迭代
        plVar8 != (long *)0x0; plVar8 = (long *)plVar8[1]) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*(uint *)(plVar8 + 2) == param_1) { // [自动静态注释] 条件判断/分支
        piVar2 = (int *)((long)plVar8 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        do { // [自动静态注释] 循环/迭代
          cVar5 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
          if (bVar6) { // [自动静态注释] 条件判断/分支
            *piVar2 = *piVar2 + 1;
            cVar5 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
          } // [自动静态注释] 作用域/控制流边界
        } while (cVar5 != '\0'); // [自动静态注释] 循环/迭代
        break; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  do { // [自动静态注释] 循环/迭代
    iVar3 = *piVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (iVar3 < 0) { // [自动静态注释] 条件判断/分支
      nn::os::UnlockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
joined_r0x00464bac: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if (plVar8 != (long *)0x0) { // [自动静态注释] 条件判断/分支
        (**(code **)(plVar8[-2] + 0x140))(plVar8 + -2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        piVar9 = (int *)((long)plVar8 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        do { // [自动静态注释] 循环/迭代
          iVar3 = *piVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          cVar5 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar6 = (bool)ExclusiveMonitorPass(piVar9,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
          if (bVar6) { // [自动静态注释] 条件判断/分支
            *piVar9 = iVar3 + -1;
            cVar5 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
          } // [自动静态注释] 作用域/控制流边界
        } while (cVar5 != '\0'); // [自动静态注释] 循环/迭代
        if (iVar3 + -1 == 0) { // [自动静态注释] 条件判断/分支
          (**(code **)(*plVar8 + 0x20))(plVar8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        do { // [自动静态注释] 循环/迭代
          iVar3 = *piVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          cVar5 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar6 = (bool)ExclusiveMonitorPass(piVar9,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
          if (bVar6) { // [自动静态注释] 条件判断/分支
            *piVar9 = iVar3 + -1;
            cVar5 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
          } // [自动静态注释] 作用域/控制流边界
        } while (cVar5 != '\0'); // [自动静态注释] 循环/迭代
        if (iVar3 + -1 == 0) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not recover jumptable at 0x00464ba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar8 + 0x20))(plVar8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    while (*piVar9 == iVar3) { // [自动静态注释] 循环/迭代
      cVar5 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar6 = (bool)ExclusiveMonitorPass(piVar9,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
      if (bVar6) { // [自动静态注释] 条件判断/分支
        *piVar9 = iVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
      } // [自动静态注释] 作用域/控制流边界
      if (cVar5 == '\0') { // [自动静态注释] 条件判断/分支
        if ((iVar3 + -1 == 0) && (0 < piVar9[0xc])) { // [自动静态注释] 条件判断/分支
          nn::os::SignalEvent((EventType *)(piVar9 + 0xe)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        goto joined_r0x00464bac; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } while( true ); // [自动静态注释] 循环/迭代
} // [自动静态注释] 作用域/控制流边界



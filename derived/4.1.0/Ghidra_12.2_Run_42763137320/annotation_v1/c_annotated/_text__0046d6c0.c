/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0036D6C0
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 内存顺序控制, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0046d6c0; name: FUN_.text__0046d6c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN__text__0046d6c0(uint param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int *piVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  MutexType *pMVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar11 = *_DAT_008a45c8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  piVar1 = (int *)(lVar11 + 0x348); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pMVar2 = (MutexType *)(lVar11 + 0x358); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while( true ) { // [自动静态注释] 循环/迭代
    while (iVar4 = *piVar1, -1 < iVar4) { // [自动静态注释] 循环/迭代
      while (*piVar1 == iVar4) { // [自动静态注释] 循环/迭代
        cVar7 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
        if (bVar8) { // [自动静态注释] 条件判断/分支
          *piVar1 = iVar4 + 1;
          cVar7 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
        } // [自动静态注释] 作用域/控制流边界
        if (cVar7 == '\0') goto LAB__text__0046d748; // [自动静态注释] 条件判断/分支
      } // [自动静态注释] 作用域/控制流边界
      ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    nn::os::LockMutex(pMVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (*piVar1 < 0) break; // [自动静态注释] 条件判断/分支
    nn::os::UnlockMutex(pMVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
LAB__text__0046d748: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar5 = *(uint *)(lVar11 + 0x3b0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar5 == 0) { // [自动静态注释] 条件判断/分支
    plVar10 = (long *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar9 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar5 != 0) { // [自动静态注释] 条件判断/分支
      uVar9 = param_1 / uVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    for (plVar10 = *(long **)(*(long *)(lVar11 + 0x3a8) + (ulong)(param_1 - uVar9 * uVar5) * 8); // [自动静态注释] 循环/迭代
        plVar10 != (long *)0x0; plVar10 = (long *)plVar10[1]) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*(uint *)(plVar10 + 2) == param_1) { // [自动静态注释] 条件判断/分支
        piVar3 = (int *)((long)plVar10 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        do { // [自动静态注释] 循环/迭代
          cVar7 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
          if (bVar8) { // [自动静态注释] 条件判断/分支
            *piVar3 = *piVar3 + 1;
            cVar7 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
          } // [自动静态注释] 作用域/控制流边界
        } while (cVar7 != '\0'); // [自动静态注释] 循环/迭代
        break; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  do { // [自动静态注释] 循环/迭代
    iVar4 = *piVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (iVar4 < 0) { // [自动静态注释] 条件判断/分支
      nn::os::UnlockMutex(pMVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
joined_r0x0046d838: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if (plVar10 == (long *)0x0) { // [自动静态注释] 条件判断/分支
        return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      bVar6 = *(byte *)((long)plVar10 + 0x94); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      piVar1 = (int *)((long)plVar10 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
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
        (**(code **)(*plVar10 + 0x20))(plVar10); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      return bVar6 & 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    while (*piVar1 == iVar4) { // [自动静态注释] 循环/迭代
      cVar7 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
      if (bVar8) { // [自动静态注释] 条件判断/分支
        *piVar1 = iVar4 + -1;
        cVar7 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
      } // [自动静态注释] 作用域/控制流边界
      if (cVar7 == '\0') { // [自动静态注释] 条件判断/分支
        if ((iVar4 + -1 == 0) && (0 < *(int *)(lVar11 + 0x378))) { // [自动静态注释] 条件判断/分支
          nn::os::SignalEvent((EventType *)(lVar11 + 0x380)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        goto joined_r0x0046d838; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } while( true ); // [自动静态注释] 循环/迭代
} // [自动静态注释] 作用域/控制流边界



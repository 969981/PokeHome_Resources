/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0036D170
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 内存顺序控制, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0046d170; name: FUN_.text__0046d170
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0046d170(undefined8 param_1,undefined8 *param_2,uint param_3,undefined8 param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        undefined8 param_5) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  int *piVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  MutexType *pMVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_78; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar13 = *_DAT_008a45c8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  piVar1 = (int *)(lVar13 + 0x348); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pMVar2 = (MutexType *)(lVar13 + 0x358); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while( true ) { // [自动静态注释] 循环/迭代
    while (iVar4 = *piVar1, -1 < iVar4) { // [自动静态注释] 循环/迭代
      while (*piVar1 == iVar4) { // [自动静态注释] 循环/迭代
        cVar6 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
        if (bVar7) { // [自动静态注释] 条件判断/分支
          *piVar1 = iVar4 + 1;
          cVar6 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
        } // [自动静态注释] 作用域/控制流边界
        if (cVar6 == '\0') goto LAB__text__0046d208; // [自动静态注释] 条件判断/分支
      } // [自动静态注释] 作用域/控制流边界
      ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    nn::os::LockMutex(pMVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (*piVar1 < 0) break; // [自动静态注释] 条件判断/分支
    nn::os::UnlockMutex(pMVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
LAB__text__0046d208: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar5 = *(uint *)(lVar13 + 0x3b0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar5 == 0) { // [自动静态注释] 条件判断/分支
    plVar11 = (long *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar8 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar5 != 0) { // [自动静态注释] 条件判断/分支
      uVar8 = param_3 / uVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    for (plVar11 = *(long **)(*(long *)(lVar13 + 0x3a8) + (ulong)(param_3 - uVar8 * uVar5) * 8); // [自动静态注释] 循环/迭代
        plVar11 != (long *)0x0; plVar11 = (long *)plVar11[1]) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*(uint *)(plVar11 + 2) == param_3) { // [自动静态注释] 条件判断/分支
        piVar3 = (int *)((long)plVar11 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        do { // [自动静态注释] 循环/迭代
          cVar6 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
          if (bVar7) { // [自动静态注释] 条件判断/分支
            *piVar3 = *piVar3 + 1;
            cVar6 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
          } // [自动静态注释] 作用域/控制流边界
        } while (cVar6 != '\0'); // [自动静态注释] 循环/迭代
        break; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  do { // [自动静态注释] 循环/迭代
    iVar4 = *piVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (iVar4 < 0) { // [自动静态注释] 条件判断/分支
      nn::os::UnlockMutex(pMVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
joined_r0x0046d37c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if (plVar11 != (long *)0x0) { // [自动静态注释] 条件判断/分支
        local_78 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uStack_70 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        local_68 = *(undefined4 *)(param_2 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar9 = (ulong)*(uint *)(plVar11 + 10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (*(uint *)(plVar11 + 10) != 0) { // [自动静态注释] 条件判断/分支
          puVar10 = (undefined8 *)plVar11[9]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar12 = puVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          do { // [自动静态注释] 循环/迭代
            if (*(char *)((long)*puVar12 + 0xd) == '\x04') { // [自动静态注释] 条件判断/分支
              FUN__text__0046d170(param_1,&local_78,*(undefined4 *)*puVar12,param_4,param_5); // [自动静态注释] 调用尚未恢复正式名称的函数
              puVar10 = (undefined8 *)plVar11[9]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              uVar9 = (ulong)*(uint *)(plVar11 + 10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            } // [自动静态注释] 作用域/控制流边界
            puVar12 = puVar12 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } while (puVar12 != puVar10 + uVar9); // [自动静态注释] 循环/迭代
        } // [自动静态注释] 作用域/控制流边界
        FUN__text__0046d088(param_1,plVar11,param_2,param_4,param_5); // [自动静态注释] 调用尚未恢复正式名称的函数
        piVar1 = (int *)((long)plVar11 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        do { // [自动静态注释] 循环/迭代
          iVar4 = *piVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          cVar6 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
          if (bVar7) { // [自动静态注释] 条件判断/分支
            *piVar1 = iVar4 + -1;
            cVar6 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
          } // [自动静态注释] 作用域/控制流边界
        } while (cVar6 != '\0'); // [自动静态注释] 循环/迭代
        if (iVar4 + -1 == 0) { // [自动静态注释] 条件判断/分支
          (**(code **)(*plVar11 + 0x20))(plVar11); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    while (*piVar1 == iVar4) { // [自动静态注释] 循环/迭代
      cVar6 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
      if (bVar7) { // [自动静态注释] 条件判断/分支
        *piVar1 = iVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
      } // [自动静态注释] 作用域/控制流边界
      if (cVar6 == '\0') { // [自动静态注释] 条件判断/分支
        if ((iVar4 + -1 == 0) && (0 < *(int *)(lVar13 + 0x378))) { // [自动静态注释] 条件判断/分支
          nn::os::SignalEvent((EventType *)(lVar13 + 0x380)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        goto joined_r0x0046d37c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } while( true ); // [自动静态注释] 循环/迭代
} // [自动静态注释] 作用域/控制流边界



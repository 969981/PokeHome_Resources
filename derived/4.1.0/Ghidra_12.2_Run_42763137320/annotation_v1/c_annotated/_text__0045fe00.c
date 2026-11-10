/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0035FE00
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 内存顺序控制, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0045fe00; name: FUN_.text__0045fe00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0045fe00(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int *piVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  MutexType *pMVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar15; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar11 = _DAT_008a45c8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar14 = *(long **)(param_1 + 0x120); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    if (plVar14 == (long *)0x0) { // [自动静态注释] 条件判断/分支
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    lVar15 = *plVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    piVar1 = (int *)(lVar15 + 0x78); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar6 = *(uint *)(plVar14 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    pMVar2 = (MutexType *)(lVar15 + 0x88); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    while( true ) { // [自动静态注释] 循环/迭代
      while (iVar5 = *piVar1, -1 < iVar5) { // [自动静态注释] 循环/迭代
        while (*piVar1 == iVar5) { // [自动静态注释] 循环/迭代
          cVar8 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
          if (bVar9) { // [自动静态注释] 条件判断/分支
            *piVar1 = iVar5 + 1;
            cVar8 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
          } // [自动静态注释] 作用域/控制流边界
          if (cVar8 == '\0') goto LAB__text__0045fea0; // [自动静态注释] 条件判断/分支
        } // [自动静态注释] 作用域/控制流边界
        ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      nn::os::LockMutex(pMVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if (*piVar1 < 0) break; // [自动静态注释] 条件判断/分支
      nn::os::UnlockMutex(pMVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
LAB__text__0045fea0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar7 = *(uint *)(lVar15 + 0xe0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar7 == 0) { // [自动静态注释] 条件判断/分支
      plVar13 = (long *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar10 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (uVar7 != 0) { // [自动静态注释] 条件判断/分支
        uVar10 = uVar6 / uVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      plVar13 = *(long **)(*(long *)(lVar15 + 0xd8) + (ulong)(uVar6 - uVar10 * uVar7) * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (plVar13 != (long *)0x0) { // [自动静态注释] 条件判断/分支
LAB__text__0045fec0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        if (*(uint *)(plVar13 + 2) != uVar6) break; // [自动静态注释] 条件判断/分支
        piVar3 = (int *)((long)plVar13 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        do { // [自动静态注释] 循环/迭代
          cVar8 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar9 = (bool)ExclusiveMonitorPass(piVar3,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
          if (bVar9) { // [自动静态注释] 条件判断/分支
            *piVar3 = *piVar3 + 1;
            cVar8 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
          } // [自动静态注释] 作用域/控制流边界
        } while (cVar8 != '\0'); // [自动静态注释] 循环/迭代
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
LAB__text__0045ff08: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    while (iVar5 = *piVar1, -1 < iVar5) { // [自动静态注释] 循环/迭代
      while (*piVar1 == iVar5) { // [自动静态注释] 循环/迭代
        cVar8 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
        if (bVar9) { // [自动静态注释] 条件判断/分支
          *piVar1 = iVar5 + -1;
          cVar8 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
        } // [自动静态注释] 作用域/控制流边界
        if (cVar8 == '\0') { // [自动静态注释] 条件判断/分支
          if ((iVar5 + -1 == 0) && (0 < *(int *)(lVar15 + 0xa8))) { // [自动静态注释] 条件判断/分支
            nn::os::SignalEvent((EventType *)(lVar15 + 0xb0)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          } // [自动静态注释] 作用域/控制流边界
          goto joined_r0x0045ff44; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    nn::os::UnlockMutex(pMVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
joined_r0x0045ff44: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (plVar13 != (long *)0x0) { // [自动静态注释] 条件判断/分支
      plVar12 = plVar13 + -2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar4 = *(byte *)(param_1 + 0x19c) & 7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (bVar4 == 2) { // [自动静态注释] 条件判断/分支
        FUN__text__0045fce0(plVar12,*(undefined4 *)(param_1 + 0x20)); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
      else if (bVar4 == 1) { // [自动静态注释] 条件判断/分支
        FUN__text__0045f8d0(*(undefined4 *)((long)plVar14 + 0xc),plVar12, // [自动静态注释] 调用尚未恢复正式名称的函数
                            *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(plVar14 + 2),
                            *(undefined4 *)(plVar14 + 3),*(undefined4 *)((long)plVar14 + 0x1c));
      } // [自动静态注释] 作用域/控制流边界
      else if ((*(byte *)(param_1 + 0x19c) & 7) == 0) { // [自动静态注释] 条件判断/分支
        FUN__text__0045fb20(plVar12,*(undefined4 *)(param_1 + 0x20), // [自动静态注释] 调用尚未恢复正式名称的函数
                            *(undefined4 *)((long)plVar14 + 0x14),*(undefined4 *)(plVar14 + 3),
                            *(undefined4 *)((long)plVar14 + 0x1c));
      } // [自动静态注释] 作用域/控制流边界
      piVar1 = (int *)((long)plVar13 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        iVar5 = *piVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        cVar8 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
        if (bVar9) { // [自动静态注释] 条件判断/分支
          *piVar1 = iVar5 + -1;
          cVar8 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
        } // [自动静态注释] 作用域/控制流边界
      } while (cVar8 != '\0'); // [自动静态注释] 循环/迭代
      if (iVar5 + -1 == 0) { // [自动静态注释] 条件判断/分支
        (**(code **)(*plVar13 + 0x20))(plVar13); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    plVar14 = (long *)*plVar14; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while( true ); // [自动静态注释] 循环/迭代
  plVar13 = (long *)plVar13[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar13 == (long *)0x0) goto LAB__text__0045ff08; // [自动静态注释] 条件判断/分支
  goto LAB__text__0045fec0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
} // [自动静态注释] 作用域/控制流边界



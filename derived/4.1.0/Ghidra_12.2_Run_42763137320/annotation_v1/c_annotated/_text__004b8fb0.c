/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003B8FB0
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 内存顺序控制, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004b8fb0; name: FUN_.text__004b8fb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004b8fb0(long param_1,long *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  MutexType *pMVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar10 = *(long *)(param_1 + 0xf0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  if (((param_2 != (long *)0x0) && (*param_2 != 0)) && // [自动静态注释] 条件判断/分支
     (iVar9 = FUN__text__0047c040(*_DAT_008a4650), iVar9 == 1)) { // [自动静态注释] 调用尚未恢复正式名称的函数
    *(long *)(param_1 + 0x50) = *param_2;
    uVar4 = *(uint *)(param_2 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    piVar11 = (int *)*_DAT_008a45c8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(uint *)(param_1 + 0x58) = uVar4;
    pMVar1 = (MutexType *)(piVar11 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    while( true ) { // [自动静态注释] 循环/迭代
      while (iVar9 = *piVar11, -1 < iVar9) { // [自动静态注释] 循环/迭代
        while (*piVar11 == iVar9) { // [自动静态注释] 循环/迭代
          cVar6 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar7 = (bool)ExclusiveMonitorPass(piVar11,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
          if (bVar7) { // [自动静态注释] 条件判断/分支
            *piVar11 = iVar9 + 1;
            cVar6 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
          } // [自动静态注释] 作用域/控制流边界
          if (cVar6 == '\0') goto LAB__text__004b9074; // [自动静态注释] 条件判断/分支
        } // [自动静态注释] 作用域/控制流边界
        ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      nn::os::LockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if (*piVar11 < 0) break; // [自动静态注释] 条件判断/分支
      nn::os::UnlockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
LAB__text__004b9074: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar5 = piVar11[0x1a]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar5 == 0) { // [自动静态注释] 条件判断/分支
      lVar12 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar8 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (uVar5 != 0) { // [自动静态注释] 条件判断/分支
        uVar8 = uVar4 / uVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      lVar12 = *(long *)(*(long *)(piVar11 + 0x18) + (ulong)(uVar4 - uVar8 * uVar5) * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (lVar12 != 0) { // [自动静态注释] 条件判断/分支
LAB__text__004b9090: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        if (*(uint *)(lVar12 + 0x10) != uVar4) goto code_r0x004b909c; // [自动静态注释] 条件判断/分支
        piVar2 = (int *)(lVar12 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        do { // [自动静态注释] 循环/迭代
          cVar6 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
          if (bVar7) { // [自动静态注释] 条件判断/分支
            *piVar2 = *piVar2 + 1;
            cVar6 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
          } // [自动静态注释] 作用域/控制流边界
        } while (cVar6 != '\0'); // [自动静态注释] 循环/迭代
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
LAB__text__004b90cc: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    while (iVar9 = *piVar11, -1 < iVar9) { // [自动静态注释] 循环/迭代
      while (*piVar11 == iVar9) { // [自动静态注释] 循环/迭代
        cVar6 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar7 = (bool)ExclusiveMonitorPass(piVar11,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
        if (bVar7) { // [自动静态注释] 条件判断/分支
          *piVar11 = iVar9 + -1;
          cVar6 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
        } // [自动静态注释] 作用域/控制流边界
        if (cVar6 == '\0') { // [自动静态注释] 条件判断/分支
          if ((iVar9 + -1 == 0) && (0 < piVar11[0xc])) { // [自动静态注释] 条件判断/分支
            nn::os::SignalEvent((EventType *)(piVar11 + 0xe)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          } // [自动静态注释] 作用域/控制流边界
          goto LAB__text__004b911c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    nn::os::UnlockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
LAB__text__004b911c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar12 != 0) { // [自动静态注释] 条件判断/分支
      lVar3 = lVar12 + -0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *(long *)(param_1 + 0xf0) = lVar3;
  } // [自动静态注释] 作用域/控制流边界
  if (lVar10 != 0) { // [自动静态注释] 条件判断/分支
    piVar11 = (int *)(lVar10 + 0x24); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      iVar9 = *piVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      cVar6 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar7 = (bool)ExclusiveMonitorPass(piVar11,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
      if (bVar7) { // [自动静态注释] 条件判断/分支
        *piVar11 = iVar9 + -1;
        cVar6 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
      } // [自动静态注释] 作用域/控制流边界
    } while (cVar6 != '\0'); // [自动静态注释] 循环/迭代
    if (iVar9 + -1 == 0) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not recover jumptable at 0x004b9164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar10 + 0x10) + 0x20))((long *)(lVar10 + 0x10)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
code_r0x004b909c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  lVar12 = *(long *)(lVar12 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar12 == 0) goto LAB__text__004b90cc; // [自动静态注释] 条件判断/分支
  goto LAB__text__004b9090; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
} // [自动静态注释] 作用域/控制流边界



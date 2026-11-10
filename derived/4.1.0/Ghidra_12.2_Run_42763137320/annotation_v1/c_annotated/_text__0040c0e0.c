/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0030C0E0
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 同步/原子操作, 内存顺序控制, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0040c0e0; name: FUN_.text__0040c0e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__0040c0e0(undefined8 param_1,uint param_2,long param_3,void *param_4,ushort param_5, // [自动静态注释] 调用尚未恢复正式名称的函数
                       ushort param_6,undefined4 param_7,undefined8 param_8,undefined8 param_9, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                       int param_10) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  int *piVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  MutexType *pMVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar15; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar16; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar17; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long alStack_80 [2]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_64 [4]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*_DAT_008a45a0 == '\0') { // [自动静态注释] 条件判断/分支
    return 0x66; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if (param_4 == (void *)0x0) { // [自动静态注释] 条件判断/分支
    return 0x1f; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if (param_5 == 0) { // [自动静态注释] 条件判断/分支
    return 0x1f; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  alStack_80[1] = param_9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar14 = *_DAT_008a45c8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  piVar1 = (int *)(lVar14 + 0x168); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pMVar2 = (MutexType *)(lVar14 + 0x178); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_70 = param_8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while( true ) { // [自动静态注释] 循环/迭代
    while (iVar9 = *piVar1, -1 < iVar9) { // [自动静态注释] 循环/迭代
      while (*piVar1 == iVar9) { // [自动静态注释] 循环/迭代
        cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
        if (bVar5) { // [自动静态注释] 条件判断/分支
          *piVar1 = iVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
        } // [自动静态注释] 作用域/控制流边界
        if (cVar4 == '\0') goto LAB__text__0040c1b0; // [自动静态注释] 条件判断/分支
      } // [自动静态注释] 作用域/控制流边界
      ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    nn::os::LockMutex(pMVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (*piVar1 < 0) break; // [自动静态注释] 条件判断/分支
    nn::os::UnlockMutex(pMVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
LAB__text__0040c1b0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar8 = *(uint *)(lVar14 + 0x1d0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar8 == 0) { // [自动静态注释] 条件判断/分支
    plVar16 = (long *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar12 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar8 != 0) { // [自动静态注释] 条件判断/分支
      uVar12 = param_2 / uVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    plVar16 = *(long **)(*(long *)(lVar14 + 0x1c8) + (ulong)(param_2 - uVar12 * uVar8) * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (plVar16 != (long *)0x0) { // [自动静态注释] 条件判断/分支
LAB__text__0040c1d0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if (*(uint *)(plVar16 + 2) != param_2) goto code_r0x0040c1dc; // [自动静态注释] 条件判断/分支
      piVar3 = (int *)((long)plVar16 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
        if (bVar5) { // [自动静态注释] 条件判断/分支
          *piVar3 = *piVar3 + 1;
          cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
        } // [自动静态注释] 作用域/控制流边界
      } while (cVar4 != '\0'); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
LAB__text__0040c214: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  while (iVar9 = *piVar1, local_68 = param_7, -1 < iVar9) { // [自动静态注释] 循环/迭代
    while (*piVar1 == iVar9) { // [自动静态注释] 循环/迭代
      cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
      if (bVar5) { // [自动静态注释] 条件判断/分支
        *piVar1 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
      } // [自动静态注释] 作用域/控制流边界
      if (cVar4 == '\0') { // [自动静态注释] 条件判断/分支
        if ((iVar9 + -1 == 0) && (0 < *(int *)(lVar14 + 0x198))) { // [自动静态注释] 条件判断/分支
          nn::os::SignalEvent((EventType *)(lVar14 + 0x1a0)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        goto joined_r0x0040c250; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  nn::os::UnlockMutex(pMVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
joined_r0x0040c250: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (plVar16 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    uVar8 = FUN__text__004af6a0(); // [自动静态注释] 调用尚未恢复正式名称的函数
    plVar6 = _DAT_008a45c0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar8 = (uint)param_5 * 0x14 + (uVar8 & 0xffff); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar12 = *(uint *)(*_DAT_008a45c0 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (0xfffe < uVar12) { // [自动静态注释] 条件判断/分支
      uVar12 = 0xffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    if (uVar12 < uVar8) { // [自动静态注释] 条件判断/分支
      FUN__text__004af6a0(); // [自动静态注释] 调用尚未恢复正式名称的函数
      piVar1 = (int *)((long)plVar16 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        iVar9 = *piVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
        if (bVar5) { // [自动静态注释] 条件判断/分支
          *piVar1 = iVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
        } // [自动静态注释] 作用域/控制流边界
      } while (cVar4 != '\0'); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      lVar14 = -((ulong)(uVar8 + 0xf) & 0x7ffff0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar17 = (long *)((long)alStack_80 + lVar14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(uint *)((long)alStack_80 + lVar14 + 0x10) = param_2;
      *(ushort *)(auStack_64 + lVar14 + -4) = param_6 & 1;
      *plVar17 = param_3;
      *(long **)((long)alStack_80 + lVar14 + 8) = plVar16;
      *(ushort *)(auStack_64 + lVar14 + -2) = param_5;
      memcpy(auStack_64 + lVar14,param_4,((ulong)param_5 + (ulong)param_5 * 4) * 4); // [自动静态注释] 内存复制、清零或移动
      puVar7 = _DAT_008a45d8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)((long)alStack_80 + lVar14 + 0x14) = 0;
      if ((param_10 != 0) && // [自动静态注释] 条件判断/分支
         (uVar10 = FUN__text__0048cf60(*_DAT_008a45d8,param_10,param_3,param_2), (uVar10 & 1) != 0)) // [自动静态注释] 调用尚未恢复正式名称的函数
      { // [自动静态注释] 作用域/控制流边界
        *(int *)((long)alStack_80 + lVar14 + 0x14) = param_10;
LAB__text__0040c364: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        FUN__text__00411c2c(auStack_64 + 3); // [自动静态注释] 调用尚未恢复正式名称的函数
        lVar15 = *plVar17; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar11 = FUN__text__00449a80(*_DAT_008a45e0,lVar15,param_10,(int)plVar16[2],0x71d123); // [自动静态注释] 调用尚未恢复正式名称的函数
        if ((lVar11 == 0) && (lVar15 != -1)) { // [自动静态注释] 条件判断/分支
          iVar13 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          iVar9 = param_10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          FUN__text__004b35d0(*plVar6,*(undefined8 *)((long)alStack_80 + lVar14 + 8),plVar17,lVar11) // [自动静态注释] 调用尚未恢复正式名称的函数
          ; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          iVar9 = *(int *)((long)alStack_80 + lVar14 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          iVar13 = param_10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        FUN__text__0048e190(*puVar7,iVar9); // [自动静态注释] 调用尚未恢复正式名称的函数
        plVar16 = *(long **)((long)alStack_80 + lVar14 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        piVar1 = (int *)((long)plVar16 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        do { // [自动静态注释] 循环/迭代
          iVar9 = *piVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
          if (bVar5) { // [自动静态注释] 条件判断/分支
            *piVar1 = iVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
          } // [自动静态注释] 作用域/控制流边界
        } while (cVar4 != '\0'); // [自动静态注释] 循环/迭代
        if (iVar9 + -1 == 0) { // [自动静态注释] 条件判断/分支
          (**(code **)(*plVar16 + 0x20))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        FUN__text__00411c70(auStack_64 + 3); // [自动静态注释] 调用尚未恢复正式名称的函数
        return iVar13; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      do { // [自动静态注释] 循环/迭代
        param_10 = *_DAT_008a45d0 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar5 = (bool)ExclusiveMonitorPass(_DAT_008a45d0,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
        if (bVar5) { // [自动静态注释] 条件判断/分支
          *_DAT_008a45d0 = param_10;
          cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
        } // [自动静态注释] 作用域/控制流边界
      } while (cVar4 != '\0'); // [自动静态注释] 循环/迭代
      *(int *)((long)alStack_80 + lVar14 + 0x14) = param_10;
      iVar9 = FUN__text__0048cf24(*puVar7,param_10,param_3,uStack_70,alStack_80[1],local_68, // [自动静态注释] 调用尚未恢复正式名称的函数
                                  (int)plVar16[2]); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if (iVar9 == 1) { // [自动静态注释] 条件判断/分支
        if (param_10 != 0) goto LAB__text__0040c364; // [自动静态注释] 条件判断/分支
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *(undefined4 *)((long)alStack_80 + lVar14 + 0x14) = 0;
      } // [自动静态注释] 作用域/控制流边界
      piVar1 = (int *)((long)plVar16 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        iVar9 = *piVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
        if (bVar5) { // [自动静态注释] 条件判断/分支
          *piVar1 = iVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
        } // [自动静态注释] 作用域/控制流边界
      } while (cVar4 != '\0'); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    if (iVar9 == 1) { // [自动静态注释] 条件判断/分支
      (**(code **)(*plVar16 + 0x20))(plVar16); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
code_r0x0040c1dc: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  plVar16 = (long *)plVar16[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar16 == (long *)0x0) goto LAB__text__0040c214; // [自动静态注释] 条件判断/分支
  goto LAB__text__0040c1d0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
} // [自动静态注释] 作用域/控制流边界



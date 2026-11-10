/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004B5BB0
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 同步/原子操作, 内存顺序控制, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005b5bb0; name: FUN_.text__005b5bb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005b5bb0(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte *pbVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *pcVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  size_t __n; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *pcVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *__dest; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *__src; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *pvVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar15; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *local_e0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *local_d8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 *local_d0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *local_c8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *local_c0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lStack_b8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_b0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar11 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar6 = (byte)((uint)uVar11 >> 0xd) & 0x4f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pbVar1 = (byte *)(param_1 + 0xe6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (*pbVar1 == 0x4f) { // [自动静态注释] 循环/迭代
    cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar5) { // [自动静态注释] 条件判断/分支
      *pbVar1 = bVar6;
      cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
    if (cVar4 == '\0') goto LAB__text__005b5c74; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  pcVar2 = (char *)(param_1 + 0xe7); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar5 = (bool)ExclusiveMonitorPass(pcVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar5) { // [自动静态注释] 条件判断/分支
      *pcVar2 = *pcVar2 + '\x01';
      cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar4 != '\0'); // [自动静态注释] 循环/迭代
  DataMemoryBarrier(2,3); // [自动静态注释] AArch64 独占访问或内存屏障
  do { // [自动静态注释] 循环/迭代
    if (*pbVar1 != 0x4f) { // [自动静态注释] 条件判断/分支
      do { // [自动静态注释] 循环/迭代
        ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xe4)); // [自动静态注释] nn::os 事件等待/通知
        while (*pbVar1 == 0x4f) { // [自动静态注释] 循环/迭代
          cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
          if (bVar5) { // [自动静态注释] 条件判断/分支
            *pbVar1 = bVar6;
            cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
          } // [自动静态注释] 作用域/控制流边界
          if (cVar4 == '\0') goto LAB__text__005b5c64; // [自动静态注释] 条件判断/分支
        } // [自动静态注释] 作用域/控制流边界
      } while( true ); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar5) { // [自动静态注释] 条件判断/分支
      *pbVar1 = bVar6;
      cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar4 != '\0'); // [自动静态注释] 循环/迭代
LAB__text__005b5c64: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar5 = (bool)ExclusiveMonitorPass(pcVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar5) { // [自动静态注释] 条件判断/分支
      *pcVar2 = *pcVar2 + -1;
      cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar4 != '\0'); // [自动静态注释] 循环/迭代
LAB__text__005b5c74: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  iVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(int *)(param_1 + 0xe0) < 2) { // [自动静态注释] 条件判断/分支
    iVar3 = *(int *)(param_1 + 0xe0) + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  lVar9 = param_1 + (long)iVar3 * 0x30; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(int *)(param_1 + 0xe0) = iVar3;
  plVar10 = (long *)(lVar9 + 0x50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*plVar10 != *(long *)(lVar9 + 0x58)) { // [自动静态注释] 条件判断/分支
    __dest = (void *)(**(code **)(**(long **)(param_1 + 8) + 0x10)) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                               (*(long **)(param_1 + 8),*(long *)(lVar9 + 0x58) - *plVar10,8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    __src = (void *)*plVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    __n = *(long *)(lVar9 + 0x58) - (long)__src; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (__n == 0) { // [自动静态注释] 条件判断/分支
      pvVar8 = __src; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      memmove(__dest,__src,__n); // [自动静态注释] 内存复制、清零或移动
      __src = (void *)*plVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      pvVar8 = *(void **)(lVar9 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    uVar15 = *(undefined8 *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar13 = (long)pvVar8 - (long)__src >> 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar12 = *(long *)(*_DAT_008a57e8 + 0x50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    nn::os::LockMutex((MutexType *)(lVar12 + 0x3a0)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    puVar14 = *(undefined8 **)(lVar12 + 0x378); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_e0 = FUN__text__005b6a80; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_d8 = FUN__text__005b6b30; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_d0 = &LAB__text__005b6b34; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_c8 = FUN__text__005b6b48; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_c0 = __dest; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lStack_b8 = lVar13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_b0 = uVar15; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (puVar14 < *(undefined8 **)(lVar12 + 0x380)) { // [自动静态注释] 条件判断/分支
      uVar11 = uVar11 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*(long *)(uVar11 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
        FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
      *(undefined8 *)(uVar11 + *(long *)(uVar11 + 0x98) * 8 + 0x18) =
           *(undefined8 *)(lVar12 + 0x388);
      *(long *)(uVar11 + 0x98) = *(long *)(uVar11 + 0x98) + 1;
      puVar14[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar14[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *puVar14 = 0;
      puVar14[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__005b6b48(&local_c0,puVar14 + 4); // [自动静态注释] 调用尚未恢复正式名称的函数
      pcVar7 = local_d8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar14[3] = local_c8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *puVar14 = local_e0;
      puVar14[1] = local_d8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar14[2] = local_d0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (local_d8 != (code *)0x0) { // [自动静态注释] 条件判断/分支
        local_d0 = (undefined1 *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        local_c8 = (code *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        local_e0 = (code *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        local_d8 = (code *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        (*pcVar7)(&local_c0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      *(long *)(uVar11 + 0x98) = *(long *)(uVar11 + 0x98) + -1;
      *(undefined8 **)(lVar12 + 0x378) = puVar14 + 0x10;
      pcVar7 = local_d8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      FUN__text__005b67e0(lVar12 + 0x370,&local_e0); // [自动静态注释] 调用尚未恢复正式名称的函数
      pcVar7 = local_d8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    local_d8 = pcVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (pcVar7 != (code *)0x0) { // [自动静态注释] 条件判断/分支
      local_d0 = (undefined1 *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_c8 = (code *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_e0 = (code *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_d8 = (code *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      (*pcVar7)(&local_c0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    nn::os::SignalConditionVariable((ConditionVariableType *)(lVar12 + 0x3c0)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    nn::os::UnlockMutex((MutexType *)(lVar12 + 0x3a0)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(long *)(lVar9 + 0x58) = *plVar10;
  } // [自动静态注释] 作用域/控制流边界
  *_DAT_008a0300 = 1 - *_DAT_008a0300;
  do { // [自动静态注释] 循环/迭代
    cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar5) { // [自动静态注释] 条件判断/分支
      *pbVar1 = 0x4f;
      cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar4 != '\0'); // [自动静态注释] 循环/迭代
  DataMemoryBarrier(2,3); // [自动静态注释] AArch64 独占访问或内存屏障
  if (*(char *)(param_1 + 0xe7) != '\0') { // [自动静态注释] 条件判断/分支
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xe4)); // [自动静态注释] nn::os 事件等待/通知
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



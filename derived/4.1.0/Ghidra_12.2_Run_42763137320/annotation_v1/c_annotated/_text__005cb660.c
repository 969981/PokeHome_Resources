/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004CB660
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 内存顺序控制, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005cb660; name: FUN_.text__005cb660
 */


long FUN__text__005cb660(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte *pbVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *pcVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar7 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar6 = (byte)((uint)uVar7 >> 0xd) & 0x4f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pbVar1 = (byte *)(param_1 + 0xe2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (*pbVar1 == 0x4f) { // [自动静态注释] 循环/迭代
    cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar5) { // [自动静态注释] 条件判断/分支
      *pbVar1 = bVar6;
      cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
    if (cVar4 == '\0') goto LAB__text__005cb714; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  pcVar2 = (char *)(param_1 + 0xe3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
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
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xe0)); // [自动静态注释] nn::os 事件等待/通知
        while (*pbVar1 == 0x4f) { // [自动静态注释] 循环/迭代
          cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
          if (bVar5) { // [自动静态注释] 条件判断/分支
            *pbVar1 = bVar6;
            cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
          } // [自动静态注释] 作用域/控制流边界
          if (cVar4 == '\0') goto LAB__text__005cb704; // [自动静态注释] 条件判断/分支
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
LAB__text__005cb704: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar5 = (bool)ExclusiveMonitorPass(pcVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar5) { // [自动静态注释] 条件判断/分支
      *pcVar2 = *pcVar2 + -1;
      cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar4 != '\0'); // [自动静态注释] 循环/迭代
LAB__text__005cb714: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  plVar11 = *(long **)(param_1 + 0x120); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar3 = *(long **)(param_1 + 0x128); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar11 == plVar3) { // [自动静态注释] 条件判断/分支
LAB__text__005cb770: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    plVar11 = *(long **)(param_1 + 0xf0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar3 = *(long **)(param_1 + 0xf8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (plVar11 != plVar3) { // [自动静态注释] 条件判断/分支
      do { // [自动静态注释] 循环/迭代
        plVar8 = (long *)(*(code *)**(undefined8 **)(*plVar11 + 8))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        plVar9 = (long *)FUN__text__005cb828(); // [自动静态注释] 调用尚未恢复正式名称的函数
        if (plVar9 == plVar8) goto LAB__text__005cb7c4; // [自动静态注释] 条件判断/分支
        do { // [自动静态注释] 循环/迭代
          plVar8 = (long *)*plVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } while (plVar8 != plVar9 && plVar8 != (long *)0x0); // [自动静态注释] 循环/迭代
        if (plVar8 != (long *)0x0) goto LAB__text__005cb7c4; // [自动静态注释] 条件判断/分支
        plVar11 = plVar11 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (plVar11 != plVar3); // [自动静态注释] 循环/迭代
      plVar11 = plVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__005cb7c4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if (plVar11 != *(long **)(param_1 + 0xf8)) goto LAB__text__005cb7d0; // [自动静态注释] 条件判断/分支
    } // [自动静态注释] 作用域/控制流边界
    lVar10 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    do { // [自动静态注释] 循环/迭代
      plVar8 = (long *)(*(code *)**(undefined8 **)(*plVar11 + 8))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar9 = (long *)FUN__text__005cb828(); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (plVar9 == plVar8) goto LAB__text__005cb764; // [自动静态注释] 条件判断/分支
      do { // [自动静态注释] 循环/迭代
        plVar8 = (long *)*plVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (plVar8 != plVar9 && plVar8 != (long *)0x0); // [自动静态注释] 循环/迭代
      if (plVar8 != (long *)0x0) goto LAB__text__005cb764; // [自动静态注释] 条件判断/分支
      plVar11 = plVar11 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (plVar11 != plVar3); // [自动静态注释] 循环/迭代
    plVar11 = plVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__005cb764: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (plVar11 == *(long **)(param_1 + 0x128)) goto LAB__text__005cb770; // [自动静态注释] 条件判断/分支
LAB__text__005cb7d0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar10 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*plVar11 != 0) { // [自动静态注释] 条件判断/分支
      lVar10 = *plVar11 + -0x48; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  do { // [自动静态注释] 循环/迭代
    cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar5) { // [自动静态注释] 条件判断/分支
      *pbVar1 = 0x4f;
      cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar4 != '\0'); // [自动静态注释] 循环/迭代
  DataMemoryBarrier(2,3); // [自动静态注释] AArch64 独占访问或内存屏障
  if (*(char *)(param_1 + 0xe3) != '\0') { // [自动静态注释] 条件判断/分支
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xe0)); // [自动静态注释] nn::os 事件等待/通知
  } // [自动静态注释] 作用域/控制流边界
  return lVar10; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004E77F0
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 同步/原子操作, 内存顺序控制, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e77f0; name: FUN_.text__005e77f0
 */


void FUN__text__005e77f0(long param_1,long param_2,long param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte *pbVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *pcVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  size_t sVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar15; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar10 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar8 = (byte)((uint)uVar10 >> 0xd) & 0x4f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pbVar1 = (byte *)(param_1 + 0x146); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (*pbVar1 == 0x4f) { // [自动静态注释] 循环/迭代
    cVar6 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar7 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar7) { // [自动静态注释] 条件判断/分支
      *pbVar1 = bVar8;
      cVar6 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
    if (cVar6 == '\0') goto LAB__text__005e78b4; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  pcVar2 = (char *)(param_1 + 0x147); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    cVar6 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar7 = (bool)ExclusiveMonitorPass(pcVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar7) { // [自动静态注释] 条件判断/分支
      *pcVar2 = *pcVar2 + '\x01';
      cVar6 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar6 != '\0'); // [自动静态注释] 循环/迭代
  DataMemoryBarrier(2,3); // [自动静态注释] AArch64 独占访问或内存屏障
  do { // [自动静态注释] 循环/迭代
    if (*pbVar1 != 0x4f) { // [自动静态注释] 条件判断/分支
      do { // [自动静态注释] 循环/迭代
        ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x144)); // [自动静态注释] nn::os 事件等待/通知
        while (*pbVar1 == 0x4f) { // [自动静态注释] 循环/迭代
          cVar6 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar7 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
          if (bVar7) { // [自动静态注释] 条件判断/分支
            *pbVar1 = bVar8;
            cVar6 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
          } // [自动静态注释] 作用域/控制流边界
          if (cVar6 == '\0') goto LAB__text__005e78a4; // [自动静态注释] 条件判断/分支
        } // [自动静态注释] 作用域/控制流边界
      } while( true ); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    cVar6 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar7 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar7) { // [自动静态注释] 条件判断/分支
      *pbVar1 = bVar8;
      cVar6 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar6 != '\0'); // [自动静态注释] 循环/迭代
LAB__text__005e78a4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    cVar6 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar7 = (bool)ExclusiveMonitorPass(pcVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar7) { // [自动静态注释] 条件判断/分支
      *pcVar2 = *pcVar2 + -1;
      cVar6 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar6 != '\0'); // [自动静态注释] 循环/迭代
LAB__text__005e78b4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (((param_1 != param_2) && (*(long *)(param_1 + 0xc0) == *(long *)(param_1 + 200))) && // [自动静态注释] 条件判断/分支
     (*(long *)(param_1 + 0x60) == *(long *)(param_1 + 0x68))) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__005e6ec0(param_1,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    plVar3 = *(long **)(param_1 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    for (plVar13 = *(long **)(param_1 + 0x90); plVar13 != plVar3; plVar13 = plVar13 + 1) { // [自动静态注释] 循环/迭代
      plVar12 = *(long **)(param_2 + 0x90); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar4 = *(long **)(param_2 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar14 = *plVar13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (plVar12 != plVar4) { // [自动静态注释] 条件判断/分支
        do { // [自动静态注释] 循环/迭代
          if (*plVar12 == lVar14) goto LAB__text__005e7930; // [自动静态注释] 条件判断/分支
          plVar12 = plVar12 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } while (plVar12 != plVar4); // [自动静态注释] 循环/迭代
        plVar12 = plVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
LAB__text__005e7930: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if (plVar12 != plVar4) { // [自动静态注释] 条件判断/分支
        sVar9 = (long)plVar4 - (long)(plVar12 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (sVar9 != 0) { // [自动静态注释] 条件判断/分支
          memmove(plVar12,plVar12 + 1,sVar9); // [自动静态注释] 内存复制、清零或移动
        } // [自动静态注释] 作用域/控制流边界
        *(size_t *)(param_2 + 0x98) = (long)plVar12 + sVar9;
        lVar14 = *plVar13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      plVar12 = *(long **)(lVar14 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar4 = *(long **)(lVar14 + 0x68); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (plVar12 != plVar4) { // [自动静态注释] 条件判断/分支
        do { // [自动静态注释] 循环/迭代
          if (*plVar12 == param_2) goto LAB__text__005e798c; // [自动静态注释] 条件判断/分支
          plVar12 = plVar12 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } while (plVar12 != plVar4); // [自动静态注释] 循环/迭代
        plVar12 = plVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
LAB__text__005e798c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if (plVar12 != plVar4) { // [自动静态注释] 条件判断/分支
        sVar9 = (long)plVar4 - (long)(plVar12 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (sVar9 != 0) { // [自动静态注释] 条件判断/分支
          memmove(plVar12,plVar12 + 1,sVar9); // [自动静态注释] 内存复制、清零或移动
        } // [自动静态注释] 作用域/控制流边界
        *(size_t *)(lVar14 + 0x68) = (long)plVar12 + sVar9;
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  if (((param_1 != param_3) && (*(long *)(param_1 + 0xf0) == *(long *)(param_1 + 0xf8))) && // [自动静态注释] 条件判断/分支
     (*(long *)(param_1 + 0x90) == *(long *)(param_1 + 0x98))) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__005e7660(param_1,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
    plVar3 = *(long **)(param_1 + 0x68); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    for (plVar13 = *(long **)(param_1 + 0x60); plVar13 != plVar3; plVar13 = plVar13 + 1) { // [自动静态注释] 循环/迭代
      lVar14 = *plVar13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar12 = *(long **)(lVar14 + 0x90); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar4 = *(long **)(lVar14 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (plVar12 != plVar4) { // [自动静态注释] 条件判断/分支
        do { // [自动静态注释] 循环/迭代
          if (*plVar12 == param_3) goto LAB__text__005e7a2c; // [自动静态注释] 条件判断/分支
          plVar12 = plVar12 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } while (plVar12 != plVar4); // [自动静态注释] 循环/迭代
        plVar12 = plVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
LAB__text__005e7a2c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if (plVar12 != plVar4) { // [自动静态注释] 条件判断/分支
        sVar9 = (long)plVar4 - (long)(plVar12 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (sVar9 != 0) { // [自动静态注释] 条件判断/分支
          memmove(plVar12,plVar12 + 1,sVar9); // [自动静态注释] 内存复制、清零或移动
        } // [自动静态注释] 作用域/控制流边界
        *(size_t *)(lVar14 + 0x98) = (long)plVar12 + sVar9;
        lVar14 = *plVar13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      plVar12 = *(long **)(param_3 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar4 = *(long **)(param_3 + 0x68); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (plVar12 != plVar4) { // [自动静态注释] 条件判断/分支
        do { // [自动静态注释] 循环/迭代
          if (*plVar12 == lVar14) goto LAB__text__005e7a80; // [自动静态注释] 条件判断/分支
          plVar12 = plVar12 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } while (plVar12 != plVar4); // [自动静态注释] 循环/迭代
        plVar12 = plVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
LAB__text__005e7a80: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if (plVar12 != plVar4) { // [自动静态注释] 条件判断/分支
        sVar9 = (long)plVar4 - (long)(plVar12 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (sVar9 != 0) { // [自动静态注释] 条件判断/分支
          memmove(plVar12,plVar12 + 1,sVar9); // [自动静态注释] 内存复制、清零或移动
        } // [自动静态注释] 作用域/控制流边界
        *(size_t *)(param_3 + 0x68) = (long)plVar12 + sVar9;
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  plVar13 = *(long **)(param_1 + 0xc0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar3 = *(long **)(param_1 + 200); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    if (plVar13 == plVar3) { // [自动静态注释] 条件判断/分支
      plVar13 = *(long **)(param_1 + 0xf0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar3 = *(long **)(param_1 + 0xf8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (plVar13 != plVar3) { // [自动静态注释] 条件判断/分支
        do { // [自动静态注释] 循环/迭代
          FUN__text__005e7660(param_1,*plVar13); // [自动静态注释] 调用尚未恢复正式名称的函数
          plVar4 = *(long **)(param_1 + 0x68); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          for (plVar12 = *(long **)(param_1 + 0x60); plVar12 != plVar4; plVar12 = plVar12 + 1) { // [自动静态注释] 循环/迭代
            lVar14 = *plVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            lVar15 = *plVar13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            plVar11 = *(long **)(lVar14 + 0x90); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            plVar5 = *(long **)(lVar14 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            if (plVar11 != plVar5) { // [自动静态注释] 条件判断/分支
              do { // [自动静态注释] 循环/迭代
                if (*plVar11 == lVar15) goto LAB__text__005e7c1c; // [自动静态注释] 条件判断/分支
                plVar11 = plVar11 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              } while (plVar11 != plVar5); // [自动静态注释] 循环/迭代
              plVar11 = plVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            } // [自动静态注释] 作用域/控制流边界
LAB__text__005e7c1c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            if (plVar11 != plVar5) { // [自动静态注释] 条件判断/分支
              sVar9 = (long)plVar5 - (long)(plVar11 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              if (sVar9 != 0) { // [自动静态注释] 条件判断/分支
                memmove(plVar11,plVar11 + 1,sVar9); // [自动静态注释] 内存复制、清零或移动
              } // [自动静态注释] 作用域/控制流边界
              *(size_t *)(lVar14 + 0x98) = (long)plVar11 + sVar9;
              lVar15 = *plVar13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              lVar14 = *plVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            } // [自动静态注释] 作用域/控制流边界
            plVar11 = *(long **)(lVar15 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            plVar5 = *(long **)(lVar15 + 0x68); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            if (plVar11 != plVar5) { // [自动静态注释] 条件判断/分支
              do { // [自动静态注释] 循环/迭代
                if (*plVar11 == lVar14) goto LAB__text__005e7c7c; // [自动静态注释] 条件判断/分支
                plVar11 = plVar11 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              } while (plVar11 != plVar5); // [自动静态注释] 循环/迭代
              plVar11 = plVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            } // [自动静态注释] 作用域/控制流边界
LAB__text__005e7c7c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            if (plVar11 != plVar5) { // [自动静态注释] 条件判断/分支
              sVar9 = (long)plVar5 - (long)(plVar11 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              if (sVar9 != 0) { // [自动静态注释] 条件判断/分支
                memmove(plVar11,plVar11 + 1,sVar9); // [自动静态注释] 内存复制、清零或移动
              } // [自动静态注释] 作用域/控制流边界
              *(size_t *)(lVar15 + 0x68) = (long)plVar11 + sVar9;
            } // [自动静态注释] 作用域/控制流边界
          } // [自动静态注释] 作用域/控制流边界
          plVar13 = plVar13 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } while (plVar13 != plVar3); // [自动静态注释] 循环/迭代
        plVar13 = *(long **)(param_1 + 0xf0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      *(long **)(param_1 + 0xf8) = plVar13;
      *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0xc0);
      *(ulong *)(param_1 + 0x130) = *(ulong *)(param_1 + 0x130) & 0xfffffffffffffffb | 1;
      do { // [自动静态注释] 循环/迭代
        cVar6 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar7 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
        if (bVar7) { // [自动静态注释] 条件判断/分支
          *pbVar1 = 0x4f;
          cVar6 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
        } // [自动静态注释] 作用域/控制流边界
      } while (cVar6 != '\0'); // [自动静态注释] 循环/迭代
      DataMemoryBarrier(2,3); // [自动静态注释] AArch64 独占访问或内存屏障
      if (*(char *)(param_1 + 0x147) == '\0') { // [自动静态注释] 条件判断/分支
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x144)); // [自动静态注释] nn::os 事件等待/通知
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__005e6ec0(param_1,*plVar13); // [自动静态注释] 调用尚未恢复正式名称的函数
    plVar4 = *(long **)(param_1 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    for (plVar12 = *(long **)(param_1 + 0x90); plVar12 != plVar4; plVar12 = plVar12 + 1) { // [自动静态注释] 循环/迭代
      lVar14 = *plVar13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar15 = *plVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar11 = *(long **)(lVar14 + 0x90); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar5 = *(long **)(lVar14 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (plVar11 != plVar5) { // [自动静态注释] 条件判断/分支
        do { // [自动静态注释] 循环/迭代
          if (*plVar11 == lVar15) goto LAB__text__005e7b1c; // [自动静态注释] 条件判断/分支
          plVar11 = plVar11 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } while (plVar11 != plVar5); // [自动静态注释] 循环/迭代
        plVar11 = plVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
LAB__text__005e7b1c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if (plVar11 != plVar5) { // [自动静态注释] 条件判断/分支
        sVar9 = (long)plVar5 - (long)(plVar11 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (sVar9 != 0) { // [自动静态注释] 条件判断/分支
          memmove(plVar11,plVar11 + 1,sVar9); // [自动静态注释] 内存复制、清零或移动
        } // [自动静态注释] 作用域/控制流边界
        *(size_t *)(lVar14 + 0x98) = (long)plVar11 + sVar9;
        lVar15 = *plVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar14 = *plVar13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      plVar11 = *(long **)(lVar15 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar5 = *(long **)(lVar15 + 0x68); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (plVar11 != plVar5) { // [自动静态注释] 条件判断/分支
        do { // [自动静态注释] 循环/迭代
          if (*plVar11 == lVar14) goto LAB__text__005e7b7c; // [自动静态注释] 条件判断/分支
          plVar11 = plVar11 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } while (plVar11 != plVar5); // [自动静态注释] 循环/迭代
        plVar11 = plVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
LAB__text__005e7b7c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if (plVar11 != plVar5) { // [自动静态注释] 条件判断/分支
        sVar9 = (long)plVar5 - (long)(plVar11 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (sVar9 != 0) { // [自动静态注释] 条件判断/分支
          memmove(plVar11,plVar11 + 1,sVar9); // [自动静态注释] 内存复制、清零或移动
        } // [自动静态注释] 作用域/控制流边界
        *(size_t *)(lVar15 + 0x68) = (long)plVar11 + sVar9;
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    plVar13 = plVar13 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while( true ); // [自动静态注释] 循环/迭代
} // [自动静态注释] 作用域/控制流边界



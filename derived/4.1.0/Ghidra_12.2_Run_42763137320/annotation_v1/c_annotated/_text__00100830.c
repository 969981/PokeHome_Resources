/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：nnMain
 * 用途/行为：Ghidra 保留符号名称 nnMain；调用者与业务副作用需独立复核
 * 证据等级：SYMBOL_EVIDENCE；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00100830; name: nnMain
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void nnMain(void) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  LightEventType *pLVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  LightEventType *pLVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *__src; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  LightEventType LVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  LightEventType *pLVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *__dest; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar15; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar16; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar17; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_14c0 [400]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_1330; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_1320 [3808]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  SystemEventType aSStack_440 [40]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cStack_418; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_408 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_400; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_3e8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_3d8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_3c8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_3c0 [108]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar15 = _DAT_0089f3c0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_3c8 = _DAT_0089f3c0 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pLVar11 = (LightEventType *)FUN__text__005f6af4(); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar7 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  LVar6 = (LightEventType)((byte)((uint)uVar7 >> 0xd) & 0x4f); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pLVar1 = pLVar11 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (*pLVar1 == (LightEventType)0x4f) { // [自动静态注释] 循环/迭代
    cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar5 = (bool)ExclusiveMonitorPass(pLVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar5) { // [自动静态注释] 条件判断/分支
      *pLVar1 = LVar6;
      cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
    if (cVar4 == '\0') goto LAB__text__00100904; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  pLVar2 = pLVar11 + 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar5 = (bool)ExclusiveMonitorPass(pLVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar5) { // [自动静态注释] 条件判断/分支
      *pLVar2 = (LightEventType)((char)*pLVar2 + '\x01');
      cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar4 != '\0'); // [自动静态注释] 循环/迭代
  DataMemoryBarrier(2,3); // [自动静态注释] AArch64 独占访问或内存屏障
  do { // [自动静态注释] 循环/迭代
    if (*pLVar1 != (LightEventType)0x4f) { // [自动静态注释] 条件判断/分支
      do { // [自动静态注释] 循环/迭代
        ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        nn::os::WaitLightEvent(pLVar11); // [自动静态注释] nn::os 事件等待/通知
        while (*pLVar1 == (LightEventType)0x4f) { // [自动静态注释] 循环/迭代
          cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar5 = (bool)ExclusiveMonitorPass(pLVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
          if (bVar5) { // [自动静态注释] 条件判断/分支
            *pLVar1 = LVar6;
            cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
          } // [自动静态注释] 作用域/控制流边界
          if (cVar4 == '\0') goto LAB__text__001008f4; // [自动静态注释] 条件判断/分支
        } // [自动静态注释] 作用域/控制流边界
      } while( true ); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar5 = (bool)ExclusiveMonitorPass(pLVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar5) { // [自动静态注释] 条件判断/分支
      *pLVar1 = LVar6;
      cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar4 != '\0'); // [自动静态注释] 循环/迭代
LAB__text__001008f4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar5 = (bool)ExclusiveMonitorPass(pLVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar5) { // [自动静态注释] 条件判断/分支
      *pLVar2 = (LightEventType)((char)*pLVar2 + -1);
      cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar4 != '\0'); // [自动静态注释] 循环/迭代
LAB__text__00100904: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  puVar9 = _DAT_0089f3c8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (_DAT_0089f3c8[0x100] == 0x100) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  _DAT_0089f3c8[_DAT_0089f3c8[0x100]] = &local_3c8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar9[0x100] = puVar9[0x100] + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar5 = (bool)ExclusiveMonitorPass(pLVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar5) { // [自动静态注释] 条件判断/分支
      *pLVar1 = (LightEventType)0x4f;
      cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar4 != '\0'); // [自动静态注释] 循环/迭代
  DataMemoryBarrier(2,3); // [自动静态注释] AArch64 独占访问或内存屏障
  if (pLVar11[3] != (LightEventType)0x0) { // [自动静态注释] 条件判断/分支
    nn::os::SignalLightEvent(pLVar11); // [自动静态注释] nn::os 事件等待/通知
  } // [自动静态注释] 作用域/控制流边界
  local_3c8 = _DAT_0089f3d0 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  memset(local_3c0,0,0x360); // [自动静态注释] 内存复制、清零或移动
  plVar10 = _DAT_0089f3d8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *_DAT_0089f3d8 = (long)&local_3c8;
  plVar12 = (long *)FUN__text__005f5290(); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar16 = *plVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long **)(lVar16 + 0x10) = plVar12;
  plVar8 = _DAT_0089f378; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar14 = *_DAT_0089f378; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(lVar16 + 0x20) = lVar14;
  plVar13 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,lVar14,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long **)(lVar16 + 0x18) = plVar13;
  if (plVar13 == (long *)0x0) { // [自动静态注释] 条件判断/分支
    (**(code **)(**(long **)(lVar16 + 0x10) + 0xb8))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    plVar13 = *(long **)(lVar16 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005f6b94(plVar13,plVar13 + 0x15,*plVar8 + -0xa8,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar17 = *plVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long **)(lVar16 + 8) = plVar13;
  *(long **)(lVar17 + 0x30) = plVar12;
  plVar8 = _DAT_0089f380; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar14 = *_DAT_0089f380; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(lVar17 + 0x40) = lVar14;
  lVar14 = (**(code **)(*plVar12 + 0x10))(plVar12,lVar14,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(lVar17 + 0x38) = lVar14;
  if (lVar14 == 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(**(long **)(lVar17 + 0x30) + 0xb8))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar14 = *(long *)(lVar17 + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005f6b94(lVar14,lVar14 + 0xa8,*plVar8 + -0xa8,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(long *)(lVar17 + 0x28) = lVar14;
  lVar16 = *plVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long **)(lVar16 + 0x50) = plVar12;
  plVar8 = _DAT_0089f388; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar14 = *_DAT_0089f388; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(lVar16 + 0x60) = lVar14;
  lVar14 = (**(code **)(*plVar12 + 0x10))(plVar12,lVar14,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(lVar16 + 0x58) = lVar14;
  if (lVar14 == 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(**(long **)(lVar16 + 0x50) + 0xb8))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar14 = *(long *)(lVar16 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005f6b94(lVar14,lVar14 + 0xa8,*plVar8 + -0xa8,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(long *)(lVar16 + 0x48) = lVar14;
  lVar16 = *plVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long **)(lVar16 + 0x70) = plVar12;
  plVar8 = _DAT_0089f390; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar14 = *_DAT_0089f390; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(lVar16 + 0x80) = lVar14;
  lVar14 = (**(code **)(*plVar12 + 0x10))(plVar12,lVar14,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(lVar16 + 0x78) = lVar14;
  if (lVar14 == 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(**(long **)(lVar16 + 0x70) + 0xb8))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar14 = *(long *)(lVar16 + 0x78); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005f6b94(lVar14,lVar14 + 0xa8,*plVar8 + -0xa8,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(long *)(lVar16 + 0x68) = lVar14;
  lVar16 = *plVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long **)(lVar16 + 0x90) = plVar12;
  plVar8 = _DAT_0089f398; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar14 = *_DAT_0089f398; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(lVar16 + 0xa0) = lVar14;
  lVar14 = (**(code **)(*plVar12 + 0x10))(plVar12,lVar14,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(lVar16 + 0x98) = lVar14;
  if (lVar14 == 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(**(long **)(lVar16 + 0x90) + 0xb8))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar14 = *(long *)(lVar16 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005f6b94(lVar14,lVar14 + 0xa8,*plVar8 + -0xa8,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(long *)(lVar16 + 0x88) = lVar14;
  lVar16 = *plVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long **)(lVar16 + 0xb0) = plVar12;
  plVar8 = _DAT_0089f3a0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar14 = *_DAT_0089f3a0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(lVar16 + 0xc0) = lVar14;
  lVar14 = (**(code **)(*plVar12 + 0x10))(plVar12,lVar14,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(lVar16 + 0xb8) = lVar14;
  if (lVar14 == 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(**(long **)(lVar16 + 0xb0) + 0xb8))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar14 = *(long *)(lVar16 + 0xb8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005f6b94(lVar14,lVar14 + 0xa8,*plVar8 + -0xa8,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar17 = *plVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(lVar16 + 0xa8) = lVar14;
  *(long **)(lVar17 + 0xd0) = plVar13;
  plVar8 = _DAT_0089f2d0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar14 = *_DAT_0089f2d0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(lVar17 + 0xe0) = lVar14;
  plVar12 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13,lVar14,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long **)(lVar17 + 0xd8) = plVar12;
  if (plVar12 == (long *)0x0) { // [自动静态注释] 条件判断/分支
    (**(code **)(**(long **)(lVar17 + 0xd0) + 0xb8))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    plVar12 = *(long **)(lVar17 + 0xd8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005f6b94(plVar12,plVar12 + 0x16,*plVar8 + -0xb0,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar14 = _DAT_0089f3b0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)(plVar12 + 0x15) = 0;
  *plVar12 = lVar14 + 0x10;
  plVar12[1] = lVar14 + 0xe8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long **)(lVar17 + 200) = plVar12;
  lVar17 = *plVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long **)(lVar17 + 0xf0) = plVar13;
  plVar8 = _DAT_0089f2d8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar16 = *_DAT_0089f2d8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(lVar17 + 0x100) = lVar16;
  lVar16 = (**(code **)(*plVar13 + 0x10))(plVar13,lVar16,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(lVar17 + 0xf8) = lVar16;
  if (lVar16 == 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(**(long **)(lVar17 + 0xf0) + 0xb8))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar16 = *(long *)(lVar17 + 0xf8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005f6b94(lVar16,lVar16 + 0xa8,*plVar8 + -0xa8,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(long *)(lVar17 + 0xe8) = lVar16;
  lVar17 = *plVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long **)(lVar17 + 0x110) = plVar13;
  plVar8 = _DAT_0089f2e8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar16 = *_DAT_0089f2e8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(lVar17 + 0x120) = lVar16;
  lVar16 = (**(code **)(*plVar13 + 0x10))(plVar13,lVar16,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(lVar17 + 0x118) = lVar16;
  if (lVar16 == 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(**(long **)(lVar17 + 0x110) + 0xb8))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar16 = *(long *)(lVar17 + 0x118); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005f6b94(lVar16,lVar16 + 0xa8,*plVar8 + -0xa8,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(long *)(lVar17 + 0x108) = lVar16;
  lVar17 = *plVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long **)(lVar17 + 0x130) = plVar13;
  plVar8 = _DAT_0089f2f0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar16 = *_DAT_0089f2f0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(lVar17 + 0x140) = lVar16;
  lVar16 = (**(code **)(*plVar13 + 0x10))(plVar13,lVar16,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(lVar17 + 0x138) = lVar16;
  if (lVar16 == 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(**(long **)(lVar17 + 0x130) + 0xb8))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar16 = *(long *)(lVar17 + 0x138); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005f6b94(lVar16,lVar16 + 0xa8,*plVar8 + -0xa8,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(long *)(lVar17 + 0x128) = lVar16;
  lVar17 = *plVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long **)(lVar17 + 0x150) = plVar13;
  plVar8 = _DAT_0089f2e0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar16 = *_DAT_0089f2e0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(lVar17 + 0x160) = lVar16;
  plVar12 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13,lVar16,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long **)(lVar17 + 0x158) = plVar12;
  if (plVar12 == (long *)0x0) { // [自动静态注释] 条件判断/分支
    (**(code **)(**(long **)(lVar17 + 0x150) + 0xb8))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    plVar12 = *(long **)(lVar17 + 0x158); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005f6b94(plVar12,plVar12 + 0x16,*plVar8 + -0xb0,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined1 *)(plVar12 + 0x15) = 0;
  *plVar12 = lVar14 + 0x10;
  plVar12[1] = lVar14 + 0xe8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar16 = *plVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long **)(lVar17 + 0x148) = plVar12;
  *(long **)(lVar16 + 0x170) = plVar13;
  plVar8 = _DAT_0089f2f8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar14 = *_DAT_0089f2f8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(lVar16 + 0x180) = lVar14;
  lVar14 = (**(code **)(*plVar13 + 0x10))(plVar13,lVar14,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(lVar16 + 0x178) = lVar14;
  if (lVar14 == 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(**(long **)(lVar16 + 0x170) + 0xb8))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar14 = *(long *)(lVar16 + 0x178); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005f6b94(lVar14,lVar14 + 0xa8,*plVar8 + -0xa8,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(long *)(lVar16 + 0x168) = lVar14;
  lVar16 = *plVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long **)(lVar16 + 400) = plVar13;
  plVar8 = _DAT_0089f300; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar14 = *_DAT_0089f300; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(lVar16 + 0x1a0) = lVar14;
  lVar14 = (**(code **)(*plVar13 + 0x10))(plVar13,lVar14,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(lVar16 + 0x198) = lVar14;
  if (lVar14 == 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(**(long **)(lVar16 + 400) + 0xb8))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar14 = *(long *)(lVar16 + 0x198); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005f6b94(lVar14,lVar14 + 0xa8,*plVar8 + -0xa8,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(long *)(lVar16 + 0x188) = lVar14;
  lVar16 = *plVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long **)(lVar16 + 0x1b0) = plVar13;
  plVar8 = _DAT_0089f308; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar14 = *_DAT_0089f308; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(lVar16 + 0x1c0) = lVar14;
  lVar14 = (**(code **)(*plVar13 + 0x10))(plVar13,lVar14,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(lVar16 + 0x1b8) = lVar14;
  if (lVar14 == 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(**(long **)(lVar16 + 0x1b0) + 0xb8))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar14 = *(long *)(lVar16 + 0x1b8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005f6b94(lVar14,lVar14 + 0xa8,*plVar8 + -0xa8,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(long *)(lVar16 + 0x1a8) = lVar14;
  lVar16 = *plVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long **)(lVar16 + 0x1d0) = plVar13;
  plVar8 = _DAT_0089f310; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar14 = *_DAT_0089f310; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(lVar16 + 0x1e0) = lVar14;
  lVar14 = (**(code **)(*plVar13 + 0x10))(plVar13,lVar14,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(lVar16 + 0x1d8) = lVar14;
  if (lVar14 == 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(**(long **)(lVar16 + 0x1d0) + 0xb8))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar14 = *(long *)(lVar16 + 0x1d8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005f6b94(lVar14,lVar14 + 0xa8,*plVar8 + -0xa8,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(long *)(lVar16 + 0x1c8) = lVar14;
  lVar16 = *plVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long **)(lVar16 + 0x1f0) = plVar13;
  plVar8 = _DAT_0089f318; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar14 = *_DAT_0089f318; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(lVar16 + 0x200) = lVar14;
  lVar14 = (**(code **)(*plVar13 + 0x10))(plVar13,lVar14,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(lVar16 + 0x1f8) = lVar14;
  if (lVar14 == 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(**(long **)(lVar16 + 0x1f0) + 0xb8))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar14 = *(long *)(lVar16 + 0x1f8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005f6b94(lVar14,lVar14 + 0xa8,*plVar8 + -0xa8,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(long *)(lVar16 + 0x1e8) = lVar14;
  lVar16 = *plVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long **)(lVar16 + 0x210) = plVar13;
  plVar8 = _DAT_0089f320; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar14 = *_DAT_0089f320; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(lVar16 + 0x220) = lVar14;
  lVar14 = (**(code **)(*plVar13 + 0x10))(plVar13,lVar14,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(lVar16 + 0x218) = lVar14;
  if (lVar14 == 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(**(long **)(lVar16 + 0x210) + 0xb8))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar14 = *(long *)(lVar16 + 0x218); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005f6b94(lVar14,lVar14 + 0xa8,*plVar8 + -0xa8,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(long *)(lVar16 + 0x208) = lVar14;
  lVar16 = *plVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long **)(lVar16 + 0x230) = plVar13;
  plVar8 = _DAT_0089f328; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar14 = *_DAT_0089f328; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(lVar16 + 0x240) = lVar14;
  lVar14 = (**(code **)(*plVar13 + 0x10))(plVar13,lVar14,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(lVar16 + 0x238) = lVar14;
  if (lVar14 == 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(**(long **)(lVar16 + 0x230) + 0xb8))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar14 = *(long *)(lVar16 + 0x238); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005f6b94(lVar14,lVar14 + 0xa8,*plVar8 + -0xa8,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(long *)(lVar16 + 0x228) = lVar14;
  lVar16 = *plVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long **)(lVar16 + 0x250) = plVar13;
  plVar8 = _DAT_0089f330; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar14 = *_DAT_0089f330; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(lVar16 + 0x260) = lVar14;
  lVar14 = (**(code **)(*plVar13 + 0x10))(plVar13,lVar14,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(lVar16 + 600) = lVar14;
  if (lVar14 == 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(**(long **)(lVar16 + 0x250) + 0xb8))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar14 = *(long *)(lVar16 + 600); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005f6b94(lVar14,lVar14 + 0xa8,*plVar8 + -0xa8,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(long *)(lVar16 + 0x248) = lVar14;
  lVar16 = *plVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long **)(lVar16 + 0x270) = plVar13;
  plVar8 = _DAT_0089f338; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar14 = *_DAT_0089f338; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(lVar16 + 0x280) = lVar14;
  lVar14 = (**(code **)(*plVar13 + 0x10))(plVar13,lVar14,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(lVar16 + 0x278) = lVar14;
  if (lVar14 == 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(**(long **)(lVar16 + 0x270) + 0xb8))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar14 = *(long *)(lVar16 + 0x278); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005f6b94(lVar14,lVar14 + 0xa8,*plVar8 + -0xa8,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(long *)(lVar16 + 0x268) = lVar14;
  lVar16 = *plVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long **)(lVar16 + 0x290) = plVar13;
  plVar8 = _DAT_0089f340; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar14 = *_DAT_0089f340; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(lVar16 + 0x2a0) = lVar14;
  lVar14 = (**(code **)(*plVar13 + 0x10))(plVar13,lVar14,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(lVar16 + 0x298) = lVar14;
  if (lVar14 == 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(**(long **)(lVar16 + 0x290) + 0xb8))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar14 = *(long *)(lVar16 + 0x298); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005f6b94(lVar14,lVar14 + 0xa8,*plVar8 + -0xa8,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(long *)(lVar16 + 0x288) = lVar14;
  lVar16 = *plVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long **)(lVar16 + 0x2b0) = plVar13;
  plVar8 = _DAT_0089f348; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar14 = *_DAT_0089f348; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(lVar16 + 0x2c0) = lVar14;
  lVar14 = (**(code **)(*plVar13 + 0x10))(plVar13,lVar14,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(lVar16 + 0x2b8) = lVar14;
  if (lVar14 == 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(**(long **)(lVar16 + 0x2b0) + 0xb8))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar14 = *(long *)(lVar16 + 0x2b8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005f6b94(lVar14,lVar14 + 0xa8,*plVar8 + -0xa8,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(long *)(lVar16 + 0x2a8) = lVar14;
  FUN__text__005f54f0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__005f8018(auStack_408,*(undefined8 *)(*plVar10 + 0x28)); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_400 = 0x4c2c00; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_3e8 = *_DAT_0089f2c0 + 0x400000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_3d8 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__00102c1c(auStack_14c0,auStack_408); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__005f54f0(1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__005f8c90(auStack_14c0); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar14 = *plVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (**(code **)**(undefined8 **)(lVar14 + 0x168))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined8 *)(lVar14 + 0x168) = 0;
  (**(code **)(**(long **)(lVar14 + 0x170) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            (*(long **)(lVar14 + 0x170),*(undefined8 *)(lVar14 + 0x178), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
             *(undefined8 *)(lVar14 + 0x180),8);
  *(undefined8 *)(lVar14 + 0x178) = 0;
  *(undefined8 *)(lVar14 + 0x180) = 0;
  *(undefined8 *)(lVar14 + 0x170) = 0;
  lVar14 = *plVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (**(code **)**(undefined8 **)(lVar14 + 0x188))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined8 *)(lVar14 + 0x188) = 0;
  (**(code **)(**(long **)(lVar14 + 400) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            (*(long **)(lVar14 + 400),*(undefined8 *)(lVar14 + 0x198), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
             *(undefined8 *)(lVar14 + 0x1a0),8);
  *(undefined8 *)(lVar14 + 0x198) = 0;
  *(undefined8 *)(lVar14 + 0x1a0) = 0;
  *(undefined8 *)(lVar14 + 400) = 0;
  lVar14 = *plVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (**(code **)**(undefined8 **)(lVar14 + 0x1a8))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined8 *)(lVar14 + 0x1a8) = 0;
  (**(code **)(**(long **)(lVar14 + 0x1b0) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            (*(long **)(lVar14 + 0x1b0),*(undefined8 *)(lVar14 + 0x1b8), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
             *(undefined8 *)(lVar14 + 0x1c0),8);
  *(undefined8 *)(lVar14 + 0x1b8) = 0;
  *(undefined8 *)(lVar14 + 0x1c0) = 0;
  *(undefined8 *)(lVar14 + 0x1b0) = 0;
  lVar14 = *plVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (**(code **)**(undefined8 **)(lVar14 + 0x1c8))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined8 *)(lVar14 + 0x1c8) = 0;
  (**(code **)(**(long **)(lVar14 + 0x1d0) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            (*(long **)(lVar14 + 0x1d0),*(undefined8 *)(lVar14 + 0x1d8), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
             *(undefined8 *)(lVar14 + 0x1e0),8);
  *(undefined8 *)(lVar14 + 0x1d8) = 0;
  *(undefined8 *)(lVar14 + 0x1e0) = 0;
  *(undefined8 *)(lVar14 + 0x1d0) = 0;
  lVar14 = *plVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (**(code **)**(undefined8 **)(lVar14 + 0x1e8))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined8 *)(lVar14 + 0x1e8) = 0;
  (**(code **)(**(long **)(lVar14 + 0x1f0) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            (*(long **)(lVar14 + 0x1f0),*(undefined8 *)(lVar14 + 0x1f8), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
             *(undefined8 *)(lVar14 + 0x200),8);
  *(undefined8 *)(lVar14 + 0x1f8) = 0;
  *(undefined8 *)(lVar14 + 0x200) = 0;
  *(undefined8 *)(lVar14 + 0x1f0) = 0;
  lVar14 = *plVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (**(code **)**(undefined8 **)(lVar14 + 0x208))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined8 *)(lVar14 + 0x208) = 0;
  (**(code **)(**(long **)(lVar14 + 0x210) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            (*(long **)(lVar14 + 0x210),*(undefined8 *)(lVar14 + 0x218), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
             *(undefined8 *)(lVar14 + 0x220),8);
  *(undefined8 *)(lVar14 + 0x220) = 0;
  *(undefined8 *)(lVar14 + 0x218) = 0;
  *(undefined8 *)(lVar14 + 0x210) = 0;
  lVar14 = *plVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (**(code **)**(undefined8 **)(lVar14 + 0x228))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined8 *)(lVar14 + 0x228) = 0;
  (**(code **)(**(long **)(lVar14 + 0x230) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            (*(long **)(lVar14 + 0x230),*(undefined8 *)(lVar14 + 0x238), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
             *(undefined8 *)(lVar14 + 0x240),8);
  *(undefined8 *)(lVar14 + 0x240) = 0;
  *(undefined8 *)(lVar14 + 0x238) = 0;
  *(undefined8 *)(lVar14 + 0x230) = 0;
  lVar14 = *plVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (**(code **)**(undefined8 **)(lVar14 + 0x148))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined8 *)(lVar14 + 0x148) = 0;
  (**(code **)(**(long **)(lVar14 + 0x150) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            (*(long **)(lVar14 + 0x150),*(undefined8 *)(lVar14 + 0x158), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
             *(undefined8 *)(lVar14 + 0x160),8);
  *(undefined8 *)(lVar14 + 0x158) = 0;
  *(undefined8 *)(lVar14 + 0x160) = 0;
  *(undefined8 *)(lVar14 + 0x150) = 0;
  lVar14 = *plVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (**(code **)**(undefined8 **)(lVar14 + 0x128))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined8 *)(lVar14 + 0x128) = 0;
  (**(code **)(**(long **)(lVar14 + 0x130) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            (*(long **)(lVar14 + 0x130),*(undefined8 *)(lVar14 + 0x138), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
             *(undefined8 *)(lVar14 + 0x140),8);
  *(undefined8 *)(lVar14 + 0x138) = 0;
  *(undefined8 *)(lVar14 + 0x140) = 0;
  *(undefined8 *)(lVar14 + 0x130) = 0;
  lVar14 = *plVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (**(code **)**(undefined8 **)(lVar14 + 0x108))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined8 *)(lVar14 + 0x108) = 0;
  (**(code **)(**(long **)(lVar14 + 0x110) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            (*(long **)(lVar14 + 0x110),*(undefined8 *)(lVar14 + 0x118), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
             *(undefined8 *)(lVar14 + 0x120),8);
  *(undefined8 *)(lVar14 + 0x118) = 0;
  *(undefined8 *)(lVar14 + 0x120) = 0;
  *(undefined8 *)(lVar14 + 0x110) = 0;
  lVar14 = *plVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (**(code **)**(undefined8 **)(lVar14 + 0xe8))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined8 *)(lVar14 + 0xe8) = 0;
  (**(code **)(**(long **)(lVar14 + 0xf0) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            (*(long **)(lVar14 + 0xf0),*(undefined8 *)(lVar14 + 0xf8), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
             *(undefined8 *)(lVar14 + 0x100),8);
  *(undefined8 *)(lVar14 + 0xf8) = 0;
  *(undefined8 *)(lVar14 + 0x100) = 0;
  *(undefined8 *)(lVar14 + 0xf0) = 0;
  lVar14 = *plVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (**(code **)**(undefined8 **)(lVar14 + 200))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined8 *)(lVar14 + 200) = 0;
  (**(code **)(**(long **)(lVar14 + 0xd0) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            (*(long **)(lVar14 + 0xd0),*(undefined8 *)(lVar14 + 0xd8),*(undefined8 *)(lVar14 + 0xe0) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
             ,8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined8 *)(lVar14 + 0xd8) = 0;
  *(undefined8 *)(lVar14 + 0xe0) = 0;
  *(undefined8 *)(lVar14 + 0xd0) = 0;
  lVar14 = *plVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (**(code **)**(undefined8 **)(lVar14 + 0x248))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined8 *)(lVar14 + 0x248) = 0;
  (**(code **)(**(long **)(lVar14 + 0x250) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            (*(long **)(lVar14 + 0x250),*(undefined8 *)(lVar14 + 600), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
             *(undefined8 *)(lVar14 + 0x260),8);
  *(undefined8 *)(lVar14 + 0x260) = 0;
  *(undefined8 *)(lVar14 + 600) = 0;
  *(undefined8 *)(lVar14 + 0x250) = 0;
  lVar14 = *plVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (**(code **)**(undefined8 **)(lVar14 + 0x268))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined8 *)(lVar14 + 0x268) = 0;
  (**(code **)(**(long **)(lVar14 + 0x270) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            (*(long **)(lVar14 + 0x270),*(undefined8 *)(lVar14 + 0x278), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
             *(undefined8 *)(lVar14 + 0x280),8);
  *(undefined8 *)(lVar14 + 0x280) = 0;
  *(undefined8 *)(lVar14 + 0x278) = 0;
  *(undefined8 *)(lVar14 + 0x270) = 0;
  lVar14 = *plVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (**(code **)**(undefined8 **)(lVar14 + 0x288))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined8 *)(lVar14 + 0x288) = 0;
  (**(code **)(**(long **)(lVar14 + 0x290) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            (*(long **)(lVar14 + 0x290),*(undefined8 *)(lVar14 + 0x298), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
             *(undefined8 *)(lVar14 + 0x2a0),8);
  *(undefined8 *)(lVar14 + 0x2a0) = 0;
  *(undefined8 *)(lVar14 + 0x298) = 0;
  *(undefined8 *)(lVar14 + 0x290) = 0;
  lVar14 = *plVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (**(code **)**(undefined8 **)(lVar14 + 0x2a8))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined8 *)(lVar14 + 0x2a8) = 0;
  (**(code **)(**(long **)(lVar14 + 0x2b0) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            (*(long **)(lVar14 + 0x2b0),*(undefined8 *)(lVar14 + 0x2b8), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
             *(undefined8 *)(lVar14 + 0x2c0),8);
  *(undefined8 *)(lVar14 + 0x2c0) = 0;
  *(undefined8 *)(lVar14 + 0x2b8) = 0;
  *(undefined8 *)(lVar14 + 0x2b0) = 0;
  lVar14 = *plVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (**(code **)**(undefined8 **)(lVar14 + 0xa8))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined8 *)(lVar14 + 0xa8) = 0;
  (**(code **)(**(long **)(lVar14 + 0xb0) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            (*(long **)(lVar14 + 0xb0),*(undefined8 *)(lVar14 + 0xb8),*(undefined8 *)(lVar14 + 0xc0) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
             ,8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined8 *)(lVar14 + 0xb8) = 0;
  *(undefined8 *)(lVar14 + 0xc0) = 0;
  *(undefined8 *)(lVar14 + 0xb0) = 0;
  lVar14 = *plVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (**(code **)**(undefined8 **)(lVar14 + 0x88))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined8 *)(lVar14 + 0x88) = 0;
  (**(code **)(**(long **)(lVar14 + 0x90) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            (*(long **)(lVar14 + 0x90),*(undefined8 *)(lVar14 + 0x98),*(undefined8 *)(lVar14 + 0xa0) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
             ,8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined8 *)(lVar14 + 0x98) = 0;
  *(undefined8 *)(lVar14 + 0xa0) = 0;
  *(undefined8 *)(lVar14 + 0x90) = 0;
  lVar14 = *plVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (**(code **)**(undefined8 **)(lVar14 + 0x48))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined8 *)(lVar14 + 0x48) = 0;
  (**(code **)(**(long **)(lVar14 + 0x50) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            (*(long **)(lVar14 + 0x50),*(undefined8 *)(lVar14 + 0x58),*(undefined8 *)(lVar14 + 0x60) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
             ,8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined8 *)(lVar14 + 0x58) = 0;
  *(undefined8 *)(lVar14 + 0x60) = 0;
  *(undefined8 *)(lVar14 + 0x50) = 0;
  lVar14 = *plVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (**(code **)**(undefined8 **)(lVar14 + 0x28))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined8 *)(lVar14 + 0x28) = 0;
  (**(code **)(**(long **)(lVar14 + 0x30) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            (*(long **)(lVar14 + 0x30),*(undefined8 *)(lVar14 + 0x38),*(undefined8 *)(lVar14 + 0x40) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
             ,8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined8 *)(lVar14 + 0x38) = 0;
  *(undefined8 *)(lVar14 + 0x40) = 0;
  *(undefined8 *)(lVar14 + 0x30) = 0;
  lVar14 = *plVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (**(code **)**(undefined8 **)(lVar14 + 8))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined8 *)(lVar14 + 8) = 0;
  (**(code **)(**(long **)(lVar14 + 0x10) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            (*(long **)(lVar14 + 0x10),*(undefined8 *)(lVar14 + 0x18),*(undefined8 *)(lVar14 + 0x20) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
             ,8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined8 *)(lVar14 + 0x18) = 0;
  *(undefined8 *)(lVar14 + 0x20) = 0;
  *(undefined8 *)(lVar14 + 0x10) = 0;
  if (cStack_418 != '\0') { // [自动静态注释] 条件判断/分支
    nn::os::DestroySystemEvent(aSStack_440); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00102314(auStack_1320); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (local_1330 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_1330 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    local_1330 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005f8650(auStack_14c0); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar14 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *plVar10 = 0;
  do { // [自动静态注释] 循环/迭代
    if (*(long *)((long)local_3c0 + lVar14 + 0x10) != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(**(long **)((long)local_3c0 + lVar14) + 0xb8))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    lVar14 = lVar14 + 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while (lVar14 != 0x360); // [自动静态注释] 循环/迭代
  local_3c8 = lVar15 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pLVar11 = (LightEventType *)FUN__text__005f6af4(); // [自动静态注释] 调用尚未恢复正式名称的函数
  pLVar1 = pLVar11 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (*pLVar1 == (LightEventType)0x4f) { // [自动静态注释] 循环/迭代
    cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar5 = (bool)ExclusiveMonitorPass(pLVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar5) { // [自动静态注释] 条件判断/分支
      *pLVar1 = LVar6;
      cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
    if (cVar4 == '\0') goto LAB__text__001018f4; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  pLVar2 = pLVar11 + 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar5 = (bool)ExclusiveMonitorPass(pLVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar5) { // [自动静态注释] 条件判断/分支
      *pLVar2 = (LightEventType)((char)*pLVar2 + '\x01');
      cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar4 != '\0'); // [自动静态注释] 循环/迭代
  DataMemoryBarrier(2,3); // [自动静态注释] AArch64 独占访问或内存屏障
  do { // [自动静态注释] 循环/迭代
    if (*pLVar1 != (LightEventType)0x4f) { // [自动静态注释] 条件判断/分支
      do { // [自动静态注释] 循环/迭代
        ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        nn::os::WaitLightEvent(pLVar11); // [自动静态注释] nn::os 事件等待/通知
        while (*pLVar1 == (LightEventType)0x4f) { // [自动静态注释] 循环/迭代
          cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar5 = (bool)ExclusiveMonitorPass(pLVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
          if (bVar5) { // [自动静态注释] 条件判断/分支
            *pLVar1 = LVar6;
            cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
          } // [自动静态注释] 作用域/控制流边界
          if (cVar4 == '\0') goto LAB__text__001018e4; // [自动静态注释] 条件判断/分支
        } // [自动静态注释] 作用域/控制流边界
      } while( true ); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar5 = (bool)ExclusiveMonitorPass(pLVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar5) { // [自动静态注释] 条件判断/分支
      *pLVar1 = LVar6;
      cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar4 != '\0'); // [自动静态注释] 循环/迭代
LAB__text__001018e4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar5 = (bool)ExclusiveMonitorPass(pLVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar5) { // [自动静态注释] 条件判断/分支
      *pLVar2 = (LightEventType)((char)*pLVar2 + -1);
      cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar4 != '\0'); // [自动静态注释] 循环/迭代
LAB__text__001018f4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  lVar15 = puVar9[0x100]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar15 == 0) { // [自动静态注释] 条件判断/分支
    __dest = puVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar14 = lVar15 << 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    __dest = _DAT_0089f3c8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    while ((long *)*__dest != &local_3c8) { // [自动静态注释] 循环/迭代
      __dest = __dest + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar14 = lVar14 + -8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (lVar14 == 0) goto LAB__text__00101960; // [自动静态注释] 条件判断/分支
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  puVar3 = puVar9 + lVar15; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (__dest != puVar3) { // [自动静态注释] 条件判断/分支
    __src = __dest + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (__src != puVar3) { // [自动静态注释] 条件判断/分支
      memmove(__dest,__src,(long)puVar3 - (long)__src); // [自动静态注释] 内存复制、清零或移动
      lVar15 = puVar9[0x100]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    puVar9[0x100] = lVar15 + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
LAB__text__00101960: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar5 = (bool)ExclusiveMonitorPass(pLVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar5) { // [自动静态注释] 条件判断/分支
      *pLVar1 = (LightEventType)0x4f;
      cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar4 != '\0'); // [自动静态注释] 循环/迭代
  DataMemoryBarrier(2,3); // [自动静态注释] AArch64 独占访问或内存屏障
  if (pLVar11[3] != (LightEventType)0x0) { // [自动静态注释] 条件判断/分支
    nn::os::SignalLightEvent(pLVar11); // [自动静态注释] nn::os 事件等待/通知
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004F8070
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 内存顺序控制, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f8070; name: FUN_.text__005f8070
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005f8070(long *param_1,long *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  LightEventType *pLVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  LightEventType *pLVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  LightEventType LVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  LightEventType *pLVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar15; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *param_1 = _DAT_008a5cf8 + 0x10;
  FUN__text__005e8c58(param_1 + 1,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  plVar11 = param_1 + 0x19; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *plVar11 = _DAT_0089f3c0 + 0x10;
  pLVar10 = (LightEventType *)FUN__text__005f6af4(); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar3 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  LVar9 = (LightEventType)((byte)((uint)uVar3 >> 0xd) & 0x4f); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pLVar1 = pLVar10 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (*pLVar1 == (LightEventType)0x4f) { // [自动静态注释] 循环/迭代
    cVar7 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar8 = (bool)ExclusiveMonitorPass(pLVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar8) { // [自动静态注释] 条件判断/分支
      *pLVar1 = LVar9;
      cVar7 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
    if (cVar7 == '\0') goto LAB__text__005f8164; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  pLVar2 = pLVar10 + 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    cVar7 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar8 = (bool)ExclusiveMonitorPass(pLVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar8) { // [自动静态注释] 条件判断/分支
      *pLVar2 = (LightEventType)((char)*pLVar2 + '\x01');
      cVar7 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar7 != '\0'); // [自动静态注释] 循环/迭代
  DataMemoryBarrier(2,3); // [自动静态注释] AArch64 独占访问或内存屏障
  do { // [自动静态注释] 循环/迭代
    if (*pLVar1 != (LightEventType)0x4f) { // [自动静态注释] 条件判断/分支
      do { // [自动静态注释] 循环/迭代
        ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        nn::os::WaitLightEvent(pLVar10); // [自动静态注释] nn::os 事件等待/通知
        while (*pLVar1 == (LightEventType)0x4f) { // [自动静态注释] 循环/迭代
          cVar7 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar8 = (bool)ExclusiveMonitorPass(pLVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
          if (bVar8) { // [自动静态注释] 条件判断/分支
            *pLVar1 = LVar9;
            cVar7 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
          } // [自动静态注释] 作用域/控制流边界
          if (cVar7 == '\0') goto LAB__text__005f8154; // [自动静态注释] 条件判断/分支
        } // [自动静态注释] 作用域/控制流边界
      } while( true ); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    cVar7 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar8 = (bool)ExclusiveMonitorPass(pLVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar8) { // [自动静态注释] 条件判断/分支
      *pLVar1 = LVar9;
      cVar7 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar7 != '\0'); // [自动静态注释] 循环/迭代
LAB__text__005f8154: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    cVar7 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar8 = (bool)ExclusiveMonitorPass(pLVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar8) { // [自动静态注释] 条件判断/分支
      *pLVar2 = (LightEventType)((char)*pLVar2 + -1);
      cVar7 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar7 != '\0'); // [自动静态注释] 循环/迭代
LAB__text__005f8164: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  lVar12 = _DAT_0089f3c8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(_DAT_0089f3c8 + 0x800) == 0x100) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(long **)(_DAT_0089f3c8 + *(long *)(_DAT_0089f3c8 + 0x800) * 8) = plVar11;
  *(long *)(lVar12 + 0x800) = *(long *)(lVar12 + 0x800) + 1;
  do { // [自动静态注释] 循环/迭代
    cVar7 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar8 = (bool)ExclusiveMonitorPass(pLVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar8) { // [自动静态注释] 条件判断/分支
      *pLVar1 = (LightEventType)0x4f;
      cVar7 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar7 != '\0'); // [自动静态注释] 循环/迭代
  DataMemoryBarrier(2,3); // [自动静态注释] AArch64 独占访问或内存屏障
  if (pLVar10[3] != (LightEventType)0x0) { // [自动静态注释] 条件判断/分支
    nn::os::SignalLightEvent(pLVar10); // [自动静态注释] nn::os 事件等待/通知
  } // [自动静态注释] 作用域/控制流边界
  lVar12 = _DAT_008a5d00; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x1b] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x1c] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x1d] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x1e] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x21] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x1f] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x20] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x19] = lVar12 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x1a] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar5 = _DAT_0089f7d0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x22] = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *plVar5 = (long)plVar11;
  param_1[0x25] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x26] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x23] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x24] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar15 = param_2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar4 = param_2[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x29] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x2a] = 0x1fca056; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x2b] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x2c] = 0x1fca056; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x2d] = (long)(param_1 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar12 = _DAT_008a5d08 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined2 *)(param_1 + 0x2e) = 0;
  *(undefined1 *)((long)param_1 + 0x172) = 0;
  param_1[0x27] = lVar4 + lVar15; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x28] = lVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar12 = param_2[6]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x31] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(char *)((long)param_1 + 0x173) = (char)lVar12;
  param_1[0x2f] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x30] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__005e9054(0); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__005ea1c0(*(undefined4 *)((long)param_2 + 0x34),param_2[7]); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar15 = *plVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar11 = (long *)FUN__text__005f5290(); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(long **)(lVar15 + 0x10) = plVar11;
  *(long *)(lVar15 + 0x20) = param_2[1];
  lVar12 = (**(code **)(*plVar11 + 0x10))(plVar11,param_2[1],8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(lVar15 + 0x18) = lVar12;
  if (lVar12 == 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(**(long **)(lVar15 + 0x10) + 0xb8))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar12 = *(long *)(lVar15 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005f6b94(lVar12,lVar12 + 0xa8,param_2[1] + -0xa8,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(long *)(lVar15 + 8) = lVar12;
  lVar15 = *plVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar11 = (long *)FUN__text__005f5290(); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(long **)(lVar15 + 0x30) = plVar11;
  *(long *)(lVar15 + 0x40) = param_2[4];
  lVar12 = (**(code **)(*plVar11 + 0x10))(plVar11,param_2[4],8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(lVar15 + 0x38) = lVar12;
  if (lVar12 == 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(**(long **)(lVar15 + 0x30) + 0xb8))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar12 = *(long *)(lVar15 + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005f6b94(lVar12,lVar12 + 0xa8,param_2[4] + -0xa8,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(long *)(lVar15 + 0x28) = lVar12;
  local_58 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_60 = param_2[5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__005e3ff8(&local_60); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__005f83e8(param_1[0x22]); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((char)param_2[6] != '\0') { // [自动静态注释] 条件判断/分支
    nn::hid::InitializeNpad(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    local_60 = 0x2000000000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    nn::hid::SetSupportedNpadIdType((uint *)&local_60,2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    nn::hid::SetSupportedNpadStyleSet(7); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005f851c(param_1[0x22]); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar12 = FUN__text__005f8fb4(&local_60,param_1[0x22]); // [自动静态注释] 调用尚未恢复正式名称的函数
  plVar11 = _DAT_008a5ce8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar13 = (undefined8 *)*_DAT_008a5ce8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *_DAT_008a5ce8 = lVar12;
  if (puVar13 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    plVar5 = (long *)puVar13[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = puVar13[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar6 = puVar13[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar14 = puVar13[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (**(code **)*puVar13)(puVar13); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    (**(code **)(*plVar5 + 0x18))(plVar5,uVar3,uVar6,uVar14); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar12 = *plVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  lVar15 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar12 != 0) { // [自动静态注释] 条件判断/分支
    lVar15 = lVar12 + 0x48; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005e914c(lVar15); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



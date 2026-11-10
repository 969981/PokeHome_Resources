/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000685E0
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 内存顺序控制, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001685e0; name: FUN_.text__001685e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001685e0(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  LightEventType *pLVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  LightEventType *pLVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  LightEventType LVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  LightEventType *pLVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  param_1[7] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar12 = _DAT_0089f690; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 8) = 0;
  uVar7 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = uVar7 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = lVar12 + 0x10;
  lVar12 = _DAT_008a0470; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar3 == 0) { // [自动静态注释] 条件判断/分支
    lVar11 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar11 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(uVar3 + 0x98) != 0) { // [自动静态注释] 条件判断/分支
      lVar11 = *(long *)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  *_DAT_008a0468 = 1;
  lVar8 = _DAT_0089f3c0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = lVar12 + 0x10;
  param_1[1] = lVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[9] = lVar12 + 0x40; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar13 = param_1 + 10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *plVar13 = lVar8 + 0x10;
  pLVar9 = (LightEventType *)FUN__text__005f6af4(); // [自动静态注释] 调用尚未恢复正式名称的函数
  LVar6 = (LightEventType)((byte)((uint)uVar7 >> 0xd) & 0x4f); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pLVar1 = pLVar9 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (*pLVar1 == (LightEventType)0x4f) { // [自动静态注释] 循环/迭代
    cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar5 = (bool)ExclusiveMonitorPass(pLVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar5) { // [自动静态注释] 条件判断/分支
      *pLVar1 = LVar6;
      cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
    if (cVar4 == '\0') goto LAB__text__00168724; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  pLVar2 = pLVar9 + 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
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
        nn::os::WaitLightEvent(pLVar9); // [自动静态注释] nn::os 事件等待/通知
        while (*pLVar1 == (LightEventType)0x4f) { // [自动静态注释] 循环/迭代
          cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar5 = (bool)ExclusiveMonitorPass(pLVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
          if (bVar5) { // [自动静态注释] 条件判断/分支
            *pLVar1 = LVar6;
            cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
          } // [自动静态注释] 作用域/控制流边界
          if (cVar4 == '\0') goto LAB__text__00168714; // [自动静态注释] 条件判断/分支
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
LAB__text__00168714: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar5 = (bool)ExclusiveMonitorPass(pLVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar5) { // [自动静态注释] 条件判断/分支
      *pLVar2 = (LightEventType)((char)*pLVar2 + -1);
      cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar4 != '\0'); // [自动静态注释] 循环/迭代
LAB__text__00168724: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  lVar12 = _DAT_0089f3c8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(_DAT_0089f3c8 + 0x800) == 0x100) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(long **)(_DAT_0089f3c8 + *(long *)(_DAT_0089f3c8 + 0x800) * 8) = plVar13;
  *(long *)(lVar12 + 0x800) = *(long *)(lVar12 + 0x800) + 1;
  do { // [自动静态注释] 循环/迭代
    cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar5 = (bool)ExclusiveMonitorPass(pLVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar5) { // [自动静态注释] 条件判断/分支
      *pLVar1 = (LightEventType)0x4f;
      cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar4 != '\0'); // [自动静态注释] 循环/迭代
  DataMemoryBarrier(2,3); // [自动静态注释] AArch64 独占访问或内存屏障
  if (pLVar9[3] != (LightEventType)0x0) { // [自动静态注释] 条件判断/分支
    nn::os::SignalLightEvent(pLVar9); // [自动静态注释] nn::os 事件等待/通知
  } // [自动静态注释] 作用域/控制流边界
  lVar12 = _DAT_008a0478; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0xc] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0xd] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar10 = _DAT_008a0480; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0xe] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0xf] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x10] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x11] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *plVar10 = (long)plVar13;
  param_1[10] = lVar12 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0xb] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x12] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x13] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x15] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x16] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (((uVar3 == 0) || (*(long *)(uVar3 + 0x98) == 0)) || // [自动静态注释] 条件判断/分支
     (lVar12 = *(long *)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x10), lVar12 == 0)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar12 = FUN__text__005f52b0(); // [自动静态注释] 调用尚未恢复正式名称的函数
    param_1[0x1a] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[0x17] = lVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[0x18] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(param_1 + 0x19) = 0;
    if (uVar3 != 0) goto LAB__text__001687e4; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    param_1[0x1a] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[0x17] = lVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[0x18] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(param_1 + 0x19) = 0;
LAB__text__001687e4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if ((*(long *)(uVar3 + 0x98) != 0) && // [自动静态注释] 条件判断/分支
       (lVar12 = *(long *)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x10), lVar12 != 0)) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    goto LAB__text__001687fc; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar12 = FUN__text__005f52b0(); // [自动静态注释] 调用尚未恢复正式名称的函数
LAB__text__001687fc: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  param_1[0x1b] = lVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x1c] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0x1f) = 0x3f800000;
  plVar13 = _DAT_008a0480; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar10 = *(long **)(*_DAT_0089f3d8 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar12 = *_DAT_008a0480; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long **)(lVar12 + 0x10) = plVar10;
  *(undefined8 *)(lVar12 + 0x20) = 0x464000;
  plVar10 = (long *)(**(code **)(*plVar10 + 0x10))(plVar10,0x464000,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long **)(lVar12 + 0x18) = plVar10;
  if (plVar10 == (long *)0x0) { // [自动静态注释] 条件判断/分支
    (**(code **)(**(long **)(lVar12 + 0x10) + 0xb8))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    plVar10 = *(long **)(lVar12 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005f6b94(plVar10,plVar10 + 0x15,0x463f58,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar11 = *plVar13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long **)(lVar12 + 8) = plVar10;
  param_1[0x13] = (long)plVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long **)(lVar11 + 0x30) = plVar10;
  *(undefined8 *)(lVar11 + 0x40) = 0x64000;
  lVar12 = (**(code **)(*plVar10 + 0x10))(plVar10,0x64000,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(lVar11 + 0x38) = lVar12;
  if (lVar12 == 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(**(long **)(lVar11 + 0x30) + 0xb8))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar12 = *(long *)(lVar11 + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005f6b94(lVar12,lVar12 + 0xa8,0x63f58,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(long *)(lVar11 + 0x28) = lVar12;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



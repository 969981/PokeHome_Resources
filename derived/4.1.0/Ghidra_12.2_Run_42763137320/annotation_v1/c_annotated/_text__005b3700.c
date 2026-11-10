/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004B3700
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 内存顺序控制, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005b3700; name: FUN_.text__005b3700
 */


void FUN__text__005b3700(LightEventType *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  LightEventType *pLVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  LightEventType LVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  LightEventType *pLVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  LightEventType *pLVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  LightEventType *pLVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar5 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  LVar4 = (LightEventType)((byte)((uint)uVar5 >> 0xd) & 0x4f); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pLVar1 = param_1 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (*pLVar1 == (LightEventType)0x4f) { // [自动静态注释] 循环/迭代
    cVar2 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar3 = (bool)ExclusiveMonitorPass(pLVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar3) { // [自动静态注释] 条件判断/分支
      *pLVar1 = LVar4;
      cVar2 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
    if (cVar2 == '\0') goto LAB__text__005b37b4; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  pLVar9 = param_1 + 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    cVar2 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar3 = (bool)ExclusiveMonitorPass(pLVar9,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar3) { // [自动静态注释] 条件判断/分支
      *pLVar9 = (LightEventType)((char)*pLVar9 + '\x01');
      cVar2 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar2 != '\0'); // [自动静态注释] 循环/迭代
  DataMemoryBarrier(2,3); // [自动静态注释] AArch64 独占访问或内存屏障
  do { // [自动静态注释] 循环/迭代
    if (*pLVar1 != (LightEventType)0x4f) { // [自动静态注释] 条件判断/分支
      do { // [自动静态注释] 循环/迭代
        ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        nn::os::WaitLightEvent(param_1); // [自动静态注释] nn::os 事件等待/通知
        while (*pLVar1 == (LightEventType)0x4f) { // [自动静态注释] 循环/迭代
          cVar2 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar3 = (bool)ExclusiveMonitorPass(pLVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
          if (bVar3) { // [自动静态注释] 条件判断/分支
            *pLVar1 = LVar4;
            cVar2 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
          } // [自动静态注释] 作用域/控制流边界
          if (cVar2 == '\0') goto LAB__text__005b37a4; // [自动静态注释] 条件判断/分支
        } // [自动静态注释] 作用域/控制流边界
      } while( true ); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    cVar2 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar3 = (bool)ExclusiveMonitorPass(pLVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar3) { // [自动静态注释] 条件判断/分支
      *pLVar1 = LVar4;
      cVar2 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar2 != '\0'); // [自动静态注释] 循环/迭代
LAB__text__005b37a4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    cVar2 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar3 = (bool)ExclusiveMonitorPass(pLVar9,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar3) { // [自动静态注释] 条件判断/分支
      *pLVar9 = (LightEventType)((char)*pLVar9 + -1);
      cVar2 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar2 != '\0'); // [自动静态注释] 循环/迭代
LAB__text__005b37b4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  for (pLVar9 = *(LightEventType **)(param_1 + 0x70); pLVar9 != param_1 + 0x70; // [自动静态注释] 循环/迭代
      pLVar9 = *(LightEventType **)pLVar9) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (-1 < *(int *)(pLVar9 + 0x40)) { // [自动静态注释] 条件判断/分支
      plVar6 = (long *)FUN__text__005f53a0(); // [自动静态注释] 调用尚未恢复正式名称的函数
      (**(code **)(*plVar6 + 0x10))(plVar6,*(undefined4 *)(pLVar9 + 0x40)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  pLVar9 = *(LightEventType **)(param_1 + 0xa8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (pLVar9 != param_1 + 0xa0) { // [自动静态注释] 循环/迭代
    pLVar7 = *(LightEventType **)(pLVar9 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(LightEventType **)(pLVar9 + 0x10) == (LightEventType *)0x0) { // [自动静态注释] 条件判断/分支
      do { // [自动静态注释] 循环/迭代
        pLVar7 = pLVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        pLVar8 = *(LightEventType **)pLVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        pLVar9 = pLVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (pLVar7 == *(LightEventType **)(pLVar8 + 0x10)); // [自动静态注释] 循环/迭代
      pLVar9 = pLVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*(LightEventType **)(pLVar7 + 0x10) != pLVar8) { // [自动静态注释] 条件判断/分支
        pLVar9 = pLVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      do { // [自动静态注释] 循环/迭代
        pLVar9 = pLVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        pLVar7 = *(LightEventType **)(pLVar9 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (*(LightEventType **)(pLVar9 + 8) != (LightEventType *)0x0); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  do { // [自动静态注释] 循环/迭代
    cVar2 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar3 = (bool)ExclusiveMonitorPass(pLVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar3) { // [自动静态注释] 条件判断/分支
      *pLVar1 = (LightEventType)0x4f;
      cVar2 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar2 != '\0'); // [自动静态注释] 循环/迭代
  DataMemoryBarrier(2,3); // [自动静态注释] AArch64 独占访问或内存屏障
  if (param_1[3] == (LightEventType)0x0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  nn::os::SignalLightEvent(param_1); // [自动静态注释] nn::os 事件等待/通知
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



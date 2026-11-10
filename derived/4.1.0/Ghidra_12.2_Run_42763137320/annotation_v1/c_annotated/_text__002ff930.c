/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001FF930
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 内存顺序控制, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002ff930; name: FUN_.text__002ff930
 */


void FUN__text__002ff930(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  LightEventType *pLVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  LightEventType *pLVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  LightEventType LVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  LightEventType *pLVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  pLVar10 = *(LightEventType **)(param_1 + 0x378); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar12 = *(undefined8 *)(param_1 + 0x370); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar9 = (uint)(byte)pLVar10[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar7 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = (uint)uVar7 >> 0xd & 0x4f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar9 == 0x4f || uVar9 != uVar3) { // [自动静态注释] 条件判断/分支
    pLVar1 = pLVar10 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__002ff9a0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    LVar6 = SUB41(uVar3,0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*pLVar1 == (LightEventType)0x4f) goto code_r0x002ff9ac; // [自动静态注释] 条件判断/分支
    pLVar2 = pLVar10 + 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
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
          nn::os::WaitLightEvent(pLVar10); // [自动静态注释] nn::os 事件等待/通知
          while (*pLVar1 == (LightEventType)0x4f) { // [自动静态注释] 循环/迭代
            cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            bVar5 = (bool)ExclusiveMonitorPass(pLVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
            if (bVar5) { // [自动静态注释] 条件判断/分支
              *pLVar1 = LVar6;
              cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
            } // [自动静态注释] 作用域/控制流边界
            if (cVar4 == '\0') goto LAB__text__002ffa34; // [自动静态注释] 条件判断/分支
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
LAB__text__002ffa34: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    do { // [自动静态注释] 循环/迭代
      cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar5 = (bool)ExclusiveMonitorPass(pLVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
      if (bVar5) { // [自动静态注释] 条件判断/分支
        *pLVar2 = (LightEventType)((char)*pLVar2 + -1);
        cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
      } // [自动静态注释] 作用域/控制流边界
    } while (cVar4 != '\0'); // [自动静态注释] 循环/迭代
    uVar8 = FUN__text__002f3320(uVar12,*(undefined8 *)(pLVar10 + 8),param_1 + 0x380); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar8 = uVar8 & 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar9 != 0x4f && uVar9 == uVar3) goto joined_r0x002ffa90; // [自动静态注释] 条件判断/分支
    goto LAB__text__002ffa60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  uVar8 = FUN__text__002f3320(uVar12,*(undefined8 *)(pLVar10 + 8),param_1 + 0x380); // [自动静态注释] 调用尚未恢复正式名称的函数
joined_r0x002ffa90: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if ((uVar8 & 1) == 0) { // [自动静态注释] 条件判断/分支
    uVar11 = 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar11 = 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  nn::os::LockMutex((MutexType *)(param_1 + 0x3b8)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined4 *)(param_1 + 0x3b0) = uVar11;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x3b8)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__005e8c48(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*(long *)(param_1 + 0x3d8) == 0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005e1f84(); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
code_r0x002ff9ac: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar5 = (bool)ExclusiveMonitorPass(pLVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
  if (bVar5) { // [自动静态注释] 条件判断/分支
    *pLVar1 = LVar6;
    cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
  } // [自动静态注释] 作用域/控制流边界
  if (cVar4 == '\0') goto code_r0x002ff9b4; // [自动静态注释] 条件判断/分支
  goto LAB__text__002ff9a0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
code_r0x002ff9b4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar8 = FUN__text__002f3320(uVar12,*(undefined8 *)(pLVar10 + 8),param_1 + 0x380); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar8 = uVar8 & 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__002ffa60: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar5 = (bool)ExclusiveMonitorPass(pLVar10 + 2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar5) { // [自动静态注释] 条件判断/分支
      pLVar10[2] = (LightEventType)0x4f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar4 != '\0'); // [自动静态注释] 循环/迭代
  DataMemoryBarrier(2,3); // [自动静态注释] AArch64 独占访问或内存屏障
  if (pLVar10[3] != (LightEventType)0x0) { // [自动静态注释] 条件判断/分支
    nn::os::SignalLightEvent(pLVar10); // [自动静态注释] nn::os 事件等待/通知
  } // [自动静态注释] 作用域/控制流边界
  goto joined_r0x002ffa90; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
} // [自动静态注释] 作用域/控制流边界



/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004E0540
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 内存顺序控制, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e0540; name: FUN_.text__005e0540
 */


void FUN__text__005e0540(long *param_1,long *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte *pbVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *pcVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar10 = (long *)*param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar9 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar7 = (byte)((uint)uVar9 >> 0xd) & 0x4f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pbVar1 = (byte *)((long)param_1 + 0xe2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (*pbVar1 == 0x4f) { // [自动静态注释] 循环/迭代
    cVar5 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar6) { // [自动静态注释] 条件判断/分支
      *pbVar1 = bVar7;
      cVar5 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
    if (cVar5 == '\0') goto LAB__text__005e0604; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  pcVar2 = (char *)((long)param_1 + 0xe3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    cVar5 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar6 = (bool)ExclusiveMonitorPass(pcVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar6) { // [自动静态注释] 条件判断/分支
      *pcVar2 = *pcVar2 + '\x01';
      cVar5 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar5 != '\0'); // [自动静态注释] 循环/迭代
  DataMemoryBarrier(2,3); // [自动静态注释] AArch64 独占访问或内存屏障
  do { // [自动静态注释] 循环/迭代
    if (*pbVar1 != 0x4f) { // [自动静态注释] 条件判断/分支
      do { // [自动静态注释] 循环/迭代
        ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1c)); // [自动静态注释] nn::os 事件等待/通知
        while (*pbVar1 == 0x4f) { // [自动静态注释] 循环/迭代
          cVar5 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
          if (bVar6) { // [自动静态注释] 条件判断/分支
            *pbVar1 = bVar7;
            cVar5 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
          } // [自动静态注释] 作用域/控制流边界
          if (cVar5 == '\0') goto LAB__text__005e05f4; // [自动静态注释] 条件判断/分支
        } // [自动静态注释] 作用域/控制流边界
      } while( true ); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    cVar5 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar6) { // [自动静态注释] 条件判断/分支
      *pbVar1 = bVar7;
      cVar5 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar5 != '\0'); // [自动静态注释] 循环/迭代
LAB__text__005e05f4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    cVar5 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar6 = (bool)ExclusiveMonitorPass(pcVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar6) { // [自动静态注释] 条件判断/分支
      *pcVar2 = *pcVar2 + -1;
      cVar5 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar5 != '\0'); // [自动静态注释] 循环/迭代
LAB__text__005e0604: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  lVar11 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (**(code **)(*param_1 + 0x10))(&local_58,param_1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  lVar8 = *(long *)(lVar11 + 0x68); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar8 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(long **)(lVar11 + 0x68) = local_58;
  lVar8 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_2 = 0;
  plVar3 = (long *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar8 != 0) { // [自动静态注释] 条件判断/分支
    plVar3 = (long *)(lVar8 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  plVar4 = (long *)param_1[0x1f]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_58 = plVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar4 < (long *)param_1[0x20]) { // [自动静态注释] 条件判断/分支
    uVar9 = uVar9 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(uVar9 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    *(long *)(uVar9 + *(long *)(uVar9 + 0x98) * 8 + 0x18) = param_1[0x21];
    *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + 1;
    local_58 = (long *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *plVar4 = (long)plVar3;
    *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + -1;
    param_1[0x1f] = (long)(plVar4 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__005e0780(param_1 + 0x1e,&local_58); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (local_58 != (long *)0x0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*local_58 + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  *(undefined1 *)(param_1 + 0x2c) = 1;
  do { // [自动静态注释] 循环/迭代
    cVar5 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar6) { // [自动静态注释] 条件判断/分支
      *pbVar1 = 0x4f;
      cVar5 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar5 != '\0'); // [自动静态注释] 循环/迭代
  DataMemoryBarrier(2,3); // [自动静态注释] AArch64 独占访问或内存屏障
  if (*(char *)((long)param_1 + 0xe3) != '\0') { // [自动静态注释] 条件判断/分支
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x1c)); // [自动静态注释] nn::os 事件等待/通知
  } // [自动静态注释] 作用域/控制流边界
  (**(code **)(*plVar10 + 0x58))(plVar10); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



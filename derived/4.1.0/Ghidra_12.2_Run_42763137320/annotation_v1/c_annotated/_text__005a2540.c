/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004A2540
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 内存顺序控制, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a2540; name: FUN_.text__005a2540
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005a2540(long *param_1,undefined8 param_2,undefined4 param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte *pbVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *pcVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__005cb950(); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[0x42] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar9 = _DAT_008a02f8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = _DAT_008a02f8 + 0x10;
  param_1[10] = lVar9 + 0xf0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[9] = lVar9 + 0xb0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar8 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x43] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x44] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = uVar8 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (((uVar3 == 0) || (*(long *)(uVar3 + 0x98) == 0)) || // [自动静态注释] 条件判断/分支
     (lVar9 = *(long *)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x10), lVar9 == 0)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar9 = FUN__text__005f52b0(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  param_1[0x45] = lVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x46] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0x47) = 0;
  nn::os::InitializeLightEvent(param_1 + 0x48,0,1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined1 *)((long)param_1 + 0x242) = 0x4f;
  *(undefined1 *)((long)param_1 + 0x243) = 0;
  *(undefined4 *)(param_1 + 0x49) = param_3;
  param_1[0x4a] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar3 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  plVar11 = (long *)param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long **)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x18) = plVar11;
  *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
  lVar9 = (**(code **)(*plVar11 + 0x10))(plVar11,0x2b8,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar9 == 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*plVar11 + 0xb8))(plVar11); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005a56b8(lVar9,param_1 + 9,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(long **)(lVar9 + 8) = plVar11;
  *(long *)(lVar9 + 0x10) = lVar9;
  *(undefined8 *)(lVar9 + 0x18) = 0x2b8;
  *(undefined8 *)(lVar9 + 0x20) = 8;
  *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
  FUN__text__005e706c(lVar9); // [自动静态注释] 调用尚未恢复正式名称的函数
  (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (param_1[0x4a] != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(param_1[0x4a] + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  bVar7 = (byte)((uint)uVar8 >> 0xd) & 0x4f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pbVar1 = (byte *)(lVar9 + 0x146); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x4a] = lVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (*pbVar1 == 0x4f) { // [自动静态注释] 循环/迭代
    cVar5 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar6) { // [自动静态注释] 条件判断/分支
      *pbVar1 = bVar7;
      cVar5 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
    if (cVar5 == '\0') goto LAB__text__005a2734; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  pcVar2 = (char *)(lVar9 + 0x147); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
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
        nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x144)); // [自动静态注释] nn::os 事件等待/通知
        while (*pbVar1 == 0x4f) { // [自动静态注释] 循环/迭代
          cVar5 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
          if (bVar6) { // [自动静态注释] 条件判断/分支
            *pbVar1 = bVar7;
            cVar5 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
          } // [自动静态注释] 作用域/控制流边界
          if (cVar5 == '\0') goto LAB__text__005a2724; // [自动静态注释] 条件判断/分支
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
LAB__text__005a2724: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    cVar5 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar6 = (bool)ExclusiveMonitorPass(pcVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar6) { // [自动静态注释] 条件判断/分支
      *pcVar2 = *pcVar2 + -1;
      cVar5 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar5 != '\0'); // [自动静态注释] 循环/迭代
LAB__text__005a2734: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  lVar10 = param_1[0xe]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar4 = lVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(lVar10 + 0x120) != 0) { // [自动静态注释] 条件判断/分支
    lVar4 = *(long *)(lVar10 + 0x120); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (*(long *)(lVar10 + 0x128) != 0) { // [自动静态注释] 条件判断/分支
    lVar10 = *(long *)(lVar10 + 0x128); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005e75a4(lVar9,lVar4,lVar10); // [自动静态注释] 调用尚未恢复正式名称的函数
  do { // [自动静态注释] 循环/迭代
    cVar5 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar6) { // [自动静态注释] 条件判断/分支
      *pbVar1 = 0x4f;
      cVar5 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar5 != '\0'); // [自动静态注释] 循环/迭代
  DataMemoryBarrier(2,3); // [自动静态注释] AArch64 独占访问或内存屏障
  if (*(char *)(lVar9 + 0x147) == '\0') { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0x144)); // [自动静态注释] nn::os 事件等待/通知
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



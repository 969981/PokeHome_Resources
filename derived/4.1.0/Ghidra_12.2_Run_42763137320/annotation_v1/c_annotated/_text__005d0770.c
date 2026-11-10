/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004D0770
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 内存顺序控制, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005d0770; name: FUN_.text__005d0770
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005d0770(long *param_1,undefined8 param_2,undefined4 param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte *pbVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *pcVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__005cb950(); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar8 = _DAT_008a5990 + 0xa8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar1 = _DAT_008a5990 + 0xe8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = _DAT_008a5990 + 0x10;
  param_1[10] = lVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[9] = lVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__005d09b0(param_1 + 0x42); // [自动静态注释] 调用尚未恢复正式名称的函数
  nn::os::InitializeLightEvent(param_1 + 0x5a,0,1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined1 *)((long)param_1 + 0x2d2) = 0x4f;
  *(undefined1 *)((long)param_1 + 0x2d3) = 0;
  *(undefined4 *)(param_1 + 0x5b) = param_3;
  param_1[0x5c] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0x5d) = 2;
  uVar7 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar11 = uVar7 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar11 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  plVar10 = (long *)param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long **)(uVar11 + *(long *)(uVar11 + 0x98) * 8 + 0x18) = plVar10;
  *(long *)(uVar11 + 0x98) = *(long *)(uVar11 + 0x98) + 1;
  lVar8 = (**(code **)(*plVar10 + 0x10))(plVar10,0x2b8,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar8 == 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*plVar10 + 0xb8))(plVar10); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005a56b8(lVar8,param_1 + 9,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(long **)(lVar8 + 8) = plVar10;
  *(long *)(lVar8 + 0x10) = lVar8;
  *(undefined8 *)(lVar8 + 0x18) = 0x2b8;
  *(undefined8 *)(lVar8 + 0x20) = 8;
  *(long *)(uVar11 + 0x98) = *(long *)(uVar11 + 0x98) + -1;
  FUN__text__005e706c(lVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
  (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (param_1[0x5c] != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(param_1[0x5c] + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  bVar6 = (byte)((uint)uVar7 >> 0xd) & 0x4f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pbVar2 = (byte *)(lVar8 + 0x146); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x5c] = lVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (*pbVar2 == 0x4f) { // [自动静态注释] 循环/迭代
    cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar5 = (bool)ExclusiveMonitorPass(pbVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar5) { // [自动静态注释] 条件判断/分支
      *pbVar2 = bVar6;
      cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
    if (cVar4 == '\0') goto LAB__text__005d0934; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  pcVar3 = (char *)(lVar8 + 0x147); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar5 = (bool)ExclusiveMonitorPass(pcVar3,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar5) { // [自动静态注释] 条件判断/分支
      *pcVar3 = *pcVar3 + '\x01';
      cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar4 != '\0'); // [自动静态注释] 循环/迭代
  DataMemoryBarrier(2,3); // [自动静态注释] AArch64 独占访问或内存屏障
  do { // [自动静态注释] 循环/迭代
    if (*pbVar2 != 0x4f) { // [自动静态注释] 条件判断/分支
      do { // [自动静态注释] 循环/迭代
        ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x144)); // [自动静态注释] nn::os 事件等待/通知
        while (*pbVar2 == 0x4f) { // [自动静态注释] 循环/迭代
          cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar5 = (bool)ExclusiveMonitorPass(pbVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
          if (bVar5) { // [自动静态注释] 条件判断/分支
            *pbVar2 = bVar6;
            cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
          } // [自动静态注释] 作用域/控制流边界
          if (cVar4 == '\0') goto LAB__text__005d0924; // [自动静态注释] 条件判断/分支
        } // [自动静态注释] 作用域/控制流边界
      } while( true ); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar5 = (bool)ExclusiveMonitorPass(pbVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar5) { // [自动静态注释] 条件判断/分支
      *pbVar2 = bVar6;
      cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar4 != '\0'); // [自动静态注释] 循环/迭代
LAB__text__005d0924: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar5 = (bool)ExclusiveMonitorPass(pcVar3,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar5) { // [自动静态注释] 条件判断/分支
      *pcVar3 = *pcVar3 + -1;
      cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar4 != '\0'); // [自动静态注释] 循环/迭代
LAB__text__005d0934: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  lVar9 = param_1[0xe]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar1 = lVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(lVar9 + 0x120) != 0) { // [自动静态注释] 条件判断/分支
    lVar1 = *(long *)(lVar9 + 0x120); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (*(long *)(lVar9 + 0x128) != 0) { // [自动静态注释] 条件判断/分支
    lVar9 = *(long *)(lVar9 + 0x128); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005e75a4(lVar8,lVar1,lVar9); // [自动静态注释] 调用尚未恢复正式名称的函数
  do { // [自动静态注释] 循环/迭代
    cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar5 = (bool)ExclusiveMonitorPass(pbVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar5) { // [自动静态注释] 条件判断/分支
      *pbVar2 = 0x4f;
      cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar4 != '\0'); // [自动静态注释] 循环/迭代
  DataMemoryBarrier(2,3); // [自动静态注释] AArch64 独占访问或内存屏障
  if (*(char *)(lVar8 + 0x147) == '\0') { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x144)); // [自动静态注释] nn::os 事件等待/通知
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



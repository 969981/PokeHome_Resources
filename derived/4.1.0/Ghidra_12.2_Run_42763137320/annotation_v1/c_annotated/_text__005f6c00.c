/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004F6C00
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 内存顺序控制, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f6c00; name: FUN_.text__005f6c00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005f6c00(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  LightEventType *pLVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte *pbVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *pcVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar9 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pLVar1 = (LightEventType *)(param_1 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pbVar2 = (byte *)((long)param_1 + 0xa2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar3 = _DAT_008a5ce0 + 0xe8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = _DAT_008a5ce0 + 0x10;
  param_1[1] = lVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar8 = (byte)((uint)uVar9 >> 0xd) & 0x4f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (*pbVar2 == 0x4f) { // [自动静态注释] 循环/迭代
    cVar6 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar7 = (bool)ExclusiveMonitorPass(pbVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar7) { // [自动静态注释] 条件判断/分支
      *pbVar2 = bVar8;
      cVar6 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
    if (cVar6 == '\0') goto LAB__text__005f6cc4; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  pcVar4 = (char *)((long)param_1 + 0xa3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    cVar6 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar7 = (bool)ExclusiveMonitorPass(pcVar4,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar7) { // [自动静态注释] 条件判断/分支
      *pcVar4 = *pcVar4 + '\x01';
      cVar6 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar6 != '\0'); // [自动静态注释] 循环/迭代
  DataMemoryBarrier(2,3); // [自动静态注释] AArch64 独占访问或内存屏障
  do { // [自动静态注释] 循环/迭代
    if (*pbVar2 != 0x4f) { // [自动静态注释] 条件判断/分支
      do { // [自动静态注释] 循环/迭代
        ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        nn::os::WaitLightEvent(pLVar1); // [自动静态注释] nn::os 事件等待/通知
        while (*pbVar2 == 0x4f) { // [自动静态注释] 循环/迭代
          cVar6 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar7 = (bool)ExclusiveMonitorPass(pbVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
          if (bVar7) { // [自动静态注释] 条件判断/分支
            *pbVar2 = bVar8;
            cVar6 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
          } // [自动静态注释] 作用域/控制流边界
          if (cVar6 == '\0') goto LAB__text__005f6cb4; // [自动静态注释] 条件判断/分支
        } // [自动静态注释] 作用域/控制流边界
      } while( true ); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    cVar6 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar7 = (bool)ExclusiveMonitorPass(pbVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar7) { // [自动静态注释] 条件判断/分支
      *pbVar2 = bVar8;
      cVar6 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar6 != '\0'); // [自动静态注释] 循环/迭代
LAB__text__005f6cb4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    cVar6 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar7 = (bool)ExclusiveMonitorPass(pcVar4,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar7) { // [自动静态注释] 条件判断/分支
      *pcVar4 = *pcVar4 + -1;
      cVar6 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar6 != '\0'); // [自动静态注释] 循环/迭代
LAB__text__005f6cc4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  plVar5 = param_1 + 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar10 = FUN__text__005f6a58(plVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((uVar10 & 1) == 0) { // [自动静态注释] 条件判断/分支
    FUN__text__005f6d90(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005f6850(plVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
  do { // [自动静态注释] 循环/迭代
    cVar6 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar7 = (bool)ExclusiveMonitorPass(pbVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar7) { // [自动静态注释] 条件判断/分支
      *pbVar2 = 0x4f;
      cVar6 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar6 != '\0'); // [自动静态注释] 循环/迭代
  DataMemoryBarrier(2,3); // [自动静态注释] AArch64 独占访问或内存屏障
  if (*(char *)((long)param_1 + 0xa3) != '\0') { // [自动静态注释] 条件判断/分支
    nn::os::SignalLightEvent(pLVar1); // [自动静态注释] nn::os 事件等待/通知
  } // [自动静态注释] 作用域/控制流边界
  nn::os::FinalizeLightEvent(pLVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__005f683c(plVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



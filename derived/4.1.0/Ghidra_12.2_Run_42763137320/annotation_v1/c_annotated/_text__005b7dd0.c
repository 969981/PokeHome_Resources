/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004B7DD0
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 内存顺序控制, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005b7dd0; name: FUN_.text__005b7dd0
 */


void FUN__text__005b7dd0(long param_1,undefined8 *param_2,undefined8 *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte *pbVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *pcVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar3 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar10 = (byte)((uint)uVar3 >> 0xd) & 0x4f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pbVar1 = (byte *)(param_1 + 0x56); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (*pbVar1 == 0x4f) { // [自动静态注释] 循环/迭代
    cVar8 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar9 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar9) { // [自动静态注释] 条件判断/分支
      *pbVar1 = bVar10;
      cVar8 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
    if (cVar8 == '\0') goto LAB__text__005b7e94; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  pcVar2 = (char *)(param_1 + 0x57); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    cVar8 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar9 = (bool)ExclusiveMonitorPass(pcVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar9) { // [自动静态注释] 条件判断/分支
      *pcVar2 = *pcVar2 + '\x01';
      cVar8 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar8 != '\0'); // [自动静态注释] 循环/迭代
  DataMemoryBarrier(2,3); // [自动静态注释] AArch64 独占访问或内存屏障
  do { // [自动静态注释] 循环/迭代
    if (*pbVar1 != 0x4f) { // [自动静态注释] 条件判断/分支
      do { // [自动静态注释] 循环/迭代
        ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x54)); // [自动静态注释] nn::os 事件等待/通知
        while (*pbVar1 == 0x4f) { // [自动静态注释] 循环/迭代
          cVar8 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar9 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
          if (bVar9) { // [自动静态注释] 条件判断/分支
            *pbVar1 = bVar10;
            cVar8 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
          } // [自动静态注释] 作用域/控制流边界
          if (cVar8 == '\0') goto LAB__text__005b7e84; // [自动静态注释] 条件判断/分支
        } // [自动静态注释] 作用域/控制流边界
      } while( true ); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    cVar8 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar9 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar9) { // [自动静态注释] 条件判断/分支
      *pbVar1 = bVar10;
      cVar8 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar8 != '\0'); // [自动静态注释] 循环/迭代
LAB__text__005b7e84: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    cVar8 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar9 = (bool)ExclusiveMonitorPass(pcVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar9) { // [自动静态注释] 条件判断/分支
      *pcVar2 = *pcVar2 + -1;
      cVar8 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar8 != '\0'); // [自动静态注释] 循环/迭代
LAB__text__005b7e94: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined1 *)(param_1 + 0x8da) = 1;
  uVar3 = *param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = param_3[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = param_3[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 0x8b0) = param_3[3];
  *(undefined8 *)(param_1 + 0x8a8) = uVar4;
  *(undefined8 *)(param_1 + 0x8a0) = uVar5;
  *(undefined8 *)(param_1 + 0x898) = uVar3;
  uVar5 = param_2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 0x868) = *param_2;
  uVar3 = param_2[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar6 = param_2[5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = param_2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar7 = param_2[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 0x870) = uVar5;
  *(undefined1 *)(param_1 + 0x868) = 1;
  *(undefined8 *)(param_1 + 0x880) = uVar7;
  *(undefined8 *)(param_1 + 0x890) = uVar6;
  *(undefined8 *)(param_1 + 0x888) = uVar3;
  *(undefined8 *)(param_1 + 0x878) = uVar4;
  *(long *)(param_1 + 0x880) = param_1 + 0x898;
  do { // [自动静态注释] 循环/迭代
    cVar8 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar9 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar9) { // [自动静态注释] 条件判断/分支
      *pbVar1 = 0x4f;
      cVar8 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar8 != '\0'); // [自动静态注释] 循环/迭代
  DataMemoryBarrier(2,3); // [自动静态注释] AArch64 独占访问或内存屏障
  if (*(char *)(param_1 + 0x57) == '\0') { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x54)); // [自动静态注释] nn::os 事件等待/通知
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004B59A0
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 内存顺序控制, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005b59a0; name: FUN_.text__005b59a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005b59a0(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte *pbVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *pcVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(undefined1 *)(param_1 + 0x3f1) = 1;
  piVar7 = _DAT_008a0300; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar8 = param_1 + (long)*_DAT_008a0300 * 0x30; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar9 = *(undefined8 **)(lVar8 + 0x278); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar11 = *(undefined8 **)(lVar8 + 0x270); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(undefined8 **)(lVar8 + 0x270) != puVar9) { // [自动静态注释] 条件判断/分支
    do { // [自动静态注释] 循环/迭代
      puVar10 = puVar11 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__005a0068(*puVar11,0); // [自动静态注释] 调用尚未恢复正式名称的函数
      puVar11 = puVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (puVar10 != puVar9); // [自动静态注释] 循环/迭代
    puVar9 = *(undefined8 **)(lVar8 + 0x270); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 **)(lVar8 + 0x278) = puVar9;
  lVar8 = param_1 + (long)*piVar7 * 0x30; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar9 = *(undefined8 **)(lVar8 + 0x2d8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar11 = *(undefined8 **)(lVar8 + 0x2d0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(undefined8 **)(lVar8 + 0x2d0) != puVar9) { // [自动静态注释] 条件判断/分支
    do { // [自动静态注释] 循环/迭代
      puVar10 = puVar11 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__005a0068(*puVar11,0); // [自动静态注释] 调用尚未恢复正式名称的函数
      puVar11 = puVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (puVar10 != puVar9); // [自动静态注释] 循环/迭代
    puVar9 = *(undefined8 **)(lVar8 + 0x2d0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 **)(lVar8 + 0x2d8) = puVar9;
  lVar8 = param_1 + (long)*piVar7 * 0x30; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar9 = *(undefined8 **)(lVar8 + 0x338); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar11 = *(undefined8 **)(lVar8 + 0x330); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(undefined8 **)(lVar8 + 0x330) != puVar9) { // [自动静态注释] 条件判断/分支
    do { // [自动静态注释] 循环/迭代
      puVar10 = puVar11 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__005a0068(*puVar11,0); // [自动静态注释] 调用尚未恢复正式名称的函数
      puVar11 = puVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (puVar10 != puVar9); // [自动静态注释] 循环/迭代
    puVar9 = *(undefined8 **)(lVar8 + 0x330); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 **)(lVar8 + 0x338) = puVar9;
  uVar6 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar5 = (byte)((uint)uVar6 >> 0xd) & 0x4f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pbVar1 = (byte *)(param_1 + 0x3fe); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pcVar2 = (char *)(param_1 + 0x3ff); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (*pbVar1 == 0x4f) { // [自动静态注释] 循环/迭代
    cVar3 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar4) { // [自动静态注释] 条件判断/分支
      *pbVar1 = bVar5;
      cVar3 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
    if (cVar3 == '\0') goto LAB__text__005b5b24; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    cVar3 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar4 = (bool)ExclusiveMonitorPass(pcVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar4) { // [自动静态注释] 条件判断/分支
      *pcVar2 = *pcVar2 + '\x01';
      cVar3 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar3 != '\0'); // [自动静态注释] 循环/迭代
  DataMemoryBarrier(2,3); // [自动静态注释] AArch64 独占访问或内存屏障
  do { // [自动静态注释] 循环/迭代
    if (*pbVar1 != 0x4f) { // [自动静态注释] 条件判断/分支
      do { // [自动静态注释] 循环/迭代
        ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x3fc)); // [自动静态注释] nn::os 事件等待/通知
        while (*pbVar1 == 0x4f) { // [自动静态注释] 循环/迭代
          cVar3 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
          if (bVar4) { // [自动静态注释] 条件判断/分支
            *pbVar1 = bVar5;
            cVar3 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
          } // [自动静态注释] 作用域/控制流边界
          if (cVar3 == '\0') goto LAB__text__005b5b14; // [自动静态注释] 条件判断/分支
        } // [自动静态注释] 作用域/控制流边界
      } while( true ); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    cVar3 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar4) { // [自动静态注释] 条件判断/分支
      *pbVar1 = bVar5;
      cVar3 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar3 != '\0'); // [自动静态注释] 循环/迭代
LAB__text__005b5b14: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    cVar3 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar4 = (bool)ExclusiveMonitorPass(pcVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar4) { // [自动静态注释] 条件判断/分支
      *pcVar2 = *pcVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar3 != '\0'); // [自动静态注释] 循环/迭代
LAB__text__005b5b24: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  lVar8 = param_1 + (long)*piVar7 * 0x30; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar11 = *(undefined8 **)(lVar8 + 0x390); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar9 = *(undefined8 **)(lVar8 + 0x398); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (puVar11 != puVar9) { // [自动静态注释] 条件判断/分支
    do { // [自动静态注释] 循环/迭代
      puVar10 = puVar11 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__005a0068(*puVar11,0); // [自动静态注释] 调用尚未恢复正式名称的函数
      puVar11 = puVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (puVar10 != puVar9); // [自动静态注释] 循环/迭代
    puVar11 = *(undefined8 **)(lVar8 + 0x390); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 **)(lVar8 + 0x398) = puVar11;
  do { // [自动静态注释] 循环/迭代
    cVar3 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar4) { // [自动静态注释] 条件判断/分支
      *pbVar1 = 0x4f;
      cVar3 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar3 != '\0'); // [自动静态注释] 循环/迭代
  DataMemoryBarrier(2,3); // [自动静态注释] AArch64 独占访问或内存屏障
  if (*pcVar2 != '\0') { // [自动静态注释] 条件判断/分支
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x3fc)); // [自动静态注释] nn::os 事件等待/通知
  } // [自动静态注释] 作用域/控制流边界
  *(undefined1 *)(param_1 + 0x3f1) = 0;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



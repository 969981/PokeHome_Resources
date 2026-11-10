/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004A56B8
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 内存顺序控制, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a56b8; name: FUN_.text__005a56b8
 */


void FUN__text__005a56b8(undefined8 *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  LightEventType *pLVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte *pbVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *pcVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_6c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_58 [3]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__005e2568(); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[0x4e] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x4f] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = uVar4 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x50] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x51] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x52] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x53] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = 0x8954e0;
  param_1[9] = 0x895538; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[10] = 0x895578; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (((uVar4 == 0) || (*(long *)(uVar4 + 0x98) == 0)) || // [自动静态注释] 条件判断/分支
     (lVar12 = *(long *)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x10), lVar12 == 0)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar12 = FUN__text__005f52b0(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  param_1[0x54] = lVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x55] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0x56) = 0;
  local_38 = FUN__text__0010feac(local_58,param_1[1]); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (local_38 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005e7474(param_1,&local_38); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (local_38 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    local_38 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  uStack_60 = param_1[0x2a]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar7 = param_1 + 0x51; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_6c = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_68 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__005a5d34(local_58,param_1[1],&uStack_60,&local_68,&local_6c,puVar7); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (param_1[0x4e] != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(param_1[0x4e] + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar12 = local_58[0]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar11 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar10 = (byte)((uint)uVar11 >> 0xd) & 0x4f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pLVar1 = (LightEventType *)(local_58[0] + 0x144); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pbVar2 = (byte *)(local_58[0] + 0x146); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x4e] = local_58[0]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (*pbVar2 == 0x4f) { // [自动静态注释] 循环/迭代
    cVar8 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar9 = (bool)ExclusiveMonitorPass(pbVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar9) { // [自动静态注释] 条件判断/分支
      *pbVar2 = bVar10;
      cVar8 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
    if (cVar8 == '\0') goto LAB__text__005a5884; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  pcVar3 = (char *)(local_58[0] + 0x147); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    cVar8 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar9 = (bool)ExclusiveMonitorPass(pcVar3,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar9) { // [自动静态注释] 条件判断/分支
      *pcVar3 = *pcVar3 + '\x01';
      cVar8 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar8 != '\0'); // [自动静态注释] 循环/迭代
  DataMemoryBarrier(2,3); // [自动静态注释] AArch64 独占访问或内存屏障
  do { // [自动静态注释] 循环/迭代
    if (*pbVar2 != 0x4f) { // [自动静态注释] 条件判断/分支
      do { // [自动静态注释] 循环/迭代
        ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        nn::os::WaitLightEvent(pLVar1); // [自动静态注释] nn::os 事件等待/通知
        while (*pbVar2 == 0x4f) { // [自动静态注释] 循环/迭代
          cVar8 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar9 = (bool)ExclusiveMonitorPass(pbVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
          if (bVar9) { // [自动静态注释] 条件判断/分支
            *pbVar2 = bVar10;
            cVar8 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
          } // [自动静态注释] 作用域/控制流边界
          if (cVar8 == '\0') goto LAB__text__005a5874; // [自动静态注释] 条件判断/分支
        } // [自动静态注释] 作用域/控制流边界
      } while( true ); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    cVar8 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar9 = (bool)ExclusiveMonitorPass(pbVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar9) { // [自动静态注释] 条件判断/分支
      *pbVar2 = bVar10;
      cVar8 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar8 != '\0'); // [自动静态注释] 循环/迭代
LAB__text__005a5874: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    cVar8 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar9 = (bool)ExclusiveMonitorPass(pcVar3,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar9) { // [自动静态注释] 条件判断/分支
      *pcVar3 = *pcVar3 + -1;
      cVar8 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar8 != '\0'); // [自动静态注释] 循环/迭代
LAB__text__005a5884: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  puVar5 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((undefined8 *)param_1[0x24] != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    puVar5 = (undefined8 *)param_1[0x24]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  puVar6 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((undefined8 *)param_1[0x25] != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    puVar6 = (undefined8 *)param_1[0x25]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005e75a4(lVar12,puVar5,puVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
  do { // [自动静态注释] 循环/迭代
    cVar8 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar9 = (bool)ExclusiveMonitorPass(pbVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar9) { // [自动静态注释] 条件判断/分支
      *pbVar2 = 0x4f;
      cVar8 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar8 != '\0'); // [自动静态注释] 循环/迭代
  DataMemoryBarrier(2,3); // [自动静态注释] AArch64 独占访问或内存屏障
  if (*(char *)(lVar12 + 0x147) != '\0') { // [自动静态注释] 条件判断/分支
    nn::os::SignalLightEvent(pLVar1); // [自动静态注释] nn::os 事件等待/通知
  } // [自动静态注释] 作用域/控制流边界
  uStack_60 = param_1[0x2a]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_6c = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_68 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__005a5d34(local_58,param_1[1],&uStack_60,&local_68,&local_6c,puVar7); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (param_1[0x4f] != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(param_1[0x4f] + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar12 = local_58[0]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pLVar1 = (LightEventType *)(local_58[0] + 0x144); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pbVar2 = (byte *)(local_58[0] + 0x146); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x4f] = local_58[0]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (*pbVar2 == 0x4f) { // [自动静态注释] 循环/迭代
    cVar8 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar9 = (bool)ExclusiveMonitorPass(pbVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar9) { // [自动静态注释] 条件判断/分支
      *pbVar2 = bVar10;
      cVar8 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
    if (cVar8 == '\0') goto LAB__text__005a59a4; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  pcVar3 = (char *)(local_58[0] + 0x147); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    cVar8 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar9 = (bool)ExclusiveMonitorPass(pcVar3,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar9) { // [自动静态注释] 条件判断/分支
      *pcVar3 = *pcVar3 + '\x01';
      cVar8 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar8 != '\0'); // [自动静态注释] 循环/迭代
  DataMemoryBarrier(2,3); // [自动静态注释] AArch64 独占访问或内存屏障
  do { // [自动静态注释] 循环/迭代
    if (*pbVar2 != 0x4f) { // [自动静态注释] 条件判断/分支
      do { // [自动静态注释] 循环/迭代
        ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        nn::os::WaitLightEvent(pLVar1); // [自动静态注释] nn::os 事件等待/通知
        while (*pbVar2 == 0x4f) { // [自动静态注释] 循环/迭代
          cVar8 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar9 = (bool)ExclusiveMonitorPass(pbVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
          if (bVar9) { // [自动静态注释] 条件判断/分支
            *pbVar2 = bVar10;
            cVar8 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
          } // [自动静态注释] 作用域/控制流边界
          if (cVar8 == '\0') goto LAB__text__005a5994; // [自动静态注释] 条件判断/分支
        } // [自动静态注释] 作用域/控制流边界
      } while( true ); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    cVar8 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar9 = (bool)ExclusiveMonitorPass(pbVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar9) { // [自动静态注释] 条件判断/分支
      *pbVar2 = bVar10;
      cVar8 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar8 != '\0'); // [自动静态注释] 循环/迭代
LAB__text__005a5994: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    cVar8 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar9 = (bool)ExclusiveMonitorPass(pcVar3,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar9) { // [自动静态注释] 条件判断/分支
      *pcVar3 = *pcVar3 + -1;
      cVar8 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar8 != '\0'); // [自动静态注释] 循环/迭代
LAB__text__005a59a4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  puVar5 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((undefined8 *)param_1[0x24] != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    puVar5 = (undefined8 *)param_1[0x24]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  puVar6 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((undefined8 *)param_1[0x25] != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    puVar6 = (undefined8 *)param_1[0x25]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005e75a4(lVar12,puVar5,puVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
  do { // [自动静态注释] 循环/迭代
    cVar8 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar9 = (bool)ExclusiveMonitorPass(pbVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar9) { // [自动静态注释] 条件判断/分支
      *pbVar2 = 0x4f;
      cVar8 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar8 != '\0'); // [自动静态注释] 循环/迭代
  DataMemoryBarrier(2,3); // [自动静态注释] AArch64 独占访问或内存屏障
  if (*(char *)(lVar12 + 0x147) != '\0') { // [自动静态注释] 条件判断/分支
    nn::os::SignalLightEvent(pLVar1); // [自动静态注释] nn::os 事件等待/通知
  } // [自动静态注释] 作用域/控制流边界
  uStack_60 = param_1[0x2a]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_6c = 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_68 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__005a5d34(local_58,param_1[1],&uStack_60,&local_68,&local_6c,puVar7); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (param_1[0x50] != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(param_1[0x50] + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  pbVar2 = (byte *)(local_58[0] + 0x146); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x50] = local_58[0]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (*pbVar2 == 0x4f) { // [自动静态注释] 循环/迭代
    cVar8 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar9 = (bool)ExclusiveMonitorPass(pbVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar9) { // [自动静态注释] 条件判断/分支
      *pbVar2 = bVar10;
      cVar8 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
    if (cVar8 == '\0') goto LAB__text__005a5ac4; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  pcVar3 = (char *)(local_58[0] + 0x147); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    cVar8 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar9 = (bool)ExclusiveMonitorPass(pcVar3,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar9) { // [自动静态注释] 条件判断/分支
      *pcVar3 = *pcVar3 + '\x01';
      cVar8 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar8 != '\0'); // [自动静态注释] 循环/迭代
  DataMemoryBarrier(2,3); // [自动静态注释] AArch64 独占访问或内存屏障
  do { // [自动静态注释] 循环/迭代
    if (*pbVar2 != 0x4f) { // [自动静态注释] 条件判断/分支
      do { // [自动静态注释] 循环/迭代
        ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        nn::os::WaitLightEvent((LightEventType *)(local_58[0] + 0x144)); // [自动静态注释] nn::os 事件等待/通知
        while (*pbVar2 == 0x4f) { // [自动静态注释] 循环/迭代
          cVar8 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar9 = (bool)ExclusiveMonitorPass(pbVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
          if (bVar9) { // [自动静态注释] 条件判断/分支
            *pbVar2 = bVar10;
            cVar8 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
          } // [自动静态注释] 作用域/控制流边界
          if (cVar8 == '\0') goto LAB__text__005a5ab4; // [自动静态注释] 条件判断/分支
        } // [自动静态注释] 作用域/控制流边界
      } while( true ); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    cVar8 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar9 = (bool)ExclusiveMonitorPass(pbVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar9) { // [自动静态注释] 条件判断/分支
      *pbVar2 = bVar10;
      cVar8 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar8 != '\0'); // [自动静态注释] 循环/迭代
LAB__text__005a5ab4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    cVar8 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar9 = (bool)ExclusiveMonitorPass(pcVar3,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar9) { // [自动静态注释] 条件判断/分支
      *pcVar3 = *pcVar3 + -1;
      cVar8 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar8 != '\0'); // [自动静态注释] 循环/迭代
LAB__text__005a5ac4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  puVar7 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((undefined8 *)param_1[0x24] != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    puVar7 = (undefined8 *)param_1[0x24]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if ((undefined8 *)param_1[0x25] != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    param_1 = (undefined8 *)param_1[0x25]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005e75a4(local_58[0],puVar7,param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  do { // [自动静态注释] 循环/迭代
    cVar8 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar9 = (bool)ExclusiveMonitorPass(pbVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar9) { // [自动静态注释] 条件判断/分支
      *pbVar2 = 0x4f;
      cVar8 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar8 != '\0'); // [自动静态注释] 循环/迭代
  DataMemoryBarrier(2,3); // [自动静态注释] AArch64 独占访问或内存屏障
  if (*(char *)(local_58[0] + 0x147) != '\0') { // [自动静态注释] 条件判断/分支
    nn::os::SignalLightEvent((LightEventType *)(local_58[0] + 0x144)); // [自动静态注释] nn::os 事件等待/通知
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



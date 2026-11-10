/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004DA7F0
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 内存顺序控制, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005da7f0; name: FUN_.text__005da7f0
 */


void FUN__text__005da7f0(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte *pbVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *pcVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_d0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_c8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_b8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_b0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_a8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_a0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_98; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_90; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_88; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_80; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_78; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int local_44; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  bVar6 = *(long *)(param_2 + 0x1a0) != 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((!bVar6 && *(int *)(param_2 + 0x170) != *(int *)(param_2 + 0x16c)) && // [自动静态注释] 条件判断/分支
      (bVar6 || *(int *)(param_2 + 0x16c) <= *(int *)(param_2 + 0x170))) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__005dd7d8(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar5 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar4 = (byte)((uint)uVar5 >> 0xd) & 0x4f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pbVar1 = (byte *)(param_2 + 0x1b2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (*pbVar1 == 0x4f) { // [自动静态注释] 循环/迭代
    cVar3 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar6) { // [自动静态注释] 条件判断/分支
      *pbVar1 = bVar4;
      cVar3 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
    if (cVar3 == '\0') goto LAB__text__005da904; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  pcVar2 = (char *)(param_2 + 0x1b3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    cVar3 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar6 = (bool)ExclusiveMonitorPass(pcVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar6) { // [自动静态注释] 条件判断/分支
      *pcVar2 = *pcVar2 + '\x01';
      cVar3 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar3 != '\0'); // [自动静态注释] 循环/迭代
  DataMemoryBarrier(2,3); // [自动静态注释] AArch64 独占访问或内存屏障
  do { // [自动静态注释] 循环/迭代
    if (*pbVar1 != 0x4f) { // [自动静态注释] 条件判断/分支
      do { // [自动静态注释] 循环/迭代
        ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x1b0)); // [自动静态注释] nn::os 事件等待/通知
        while (*pbVar1 == 0x4f) { // [自动静态注释] 循环/迭代
          cVar3 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
          if (bVar6) { // [自动静态注释] 条件判断/分支
            *pbVar1 = bVar4;
            cVar3 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
          } // [自动静态注释] 作用域/控制流边界
          if (cVar3 == '\0') goto LAB__text__005da8f4; // [自动静态注释] 条件判断/分支
        } // [自动静态注释] 作用域/控制流边界
      } while( true ); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    cVar3 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar6) { // [自动静态注释] 条件判断/分支
      *pbVar1 = bVar4;
      cVar3 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar3 != '\0'); // [自动静态注释] 循环/迭代
LAB__text__005da8f4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    cVar3 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar6 = (bool)ExclusiveMonitorPass(pcVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar6) { // [自动静态注释] 条件判断/分支
      *pcVar2 = *pcVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar3 != '\0'); // [自动静态注释] 循环/迭代
LAB__text__005da904: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (*(long *)(param_2 + 0x1a0) == 0) { // [自动静态注释] 条件判断/分支
    iVar11 = *(int *)(param_2 + 0x170); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(int *)(param_2 + 0x170) = iVar11 + 1;
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar9 = *(long *)(param_2 + 0x1a0) + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar11 = *(int *)(param_2 + lVar9 * 4 + 0x178); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long *)(param_2 + 0x1a0) = lVar9;
  } // [自动静态注释] 作用域/控制流边界
  *(ulong *)(param_2 + 0x1a8) =
       1L << ((ulong)(uint)(iVar11 - *(int *)(param_2 + 0x168)) & 0x3f) | // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
       *(ulong *)(param_2 + 0x1a8);
  *(int *)(param_2 + 0x174) = *(int *)(param_2 + 0x174) + 1;
  do { // [自动静态注释] 循环/迭代
    cVar3 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar6) { // [自动静态注释] 条件判断/分支
      *pbVar1 = 0x4f;
      cVar3 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar3 != '\0'); // [自动静态注释] 循环/迭代
  DataMemoryBarrier(2,3); // [自动静态注释] AArch64 独占访问或内存屏障
  if (*(char *)(param_2 + 0x1b3) != '\0') { // [自动静态注释] 条件判断/分支
    nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x1b0)); // [自动静态注释] nn::os 事件等待/通知
  } // [自动静态注释] 作用域/控制流边界
  local_d0 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_44 = iVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__005dd364(&local_b0,iVar11,param_2 + 0x13c,&local_d0,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar8 = nn::fs::IsSaveDataExisting(param_4,param_3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((uVar8 & 1) == 0) { // [自动静态注释] 条件判断/分支
    uVar10 = 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__005dd624(&local_d0,&local_b0); // [自动静态注释] 调用尚未恢复正式名称的函数
    iVar7 = nn::fs::MountSaveData(local_c8,param_4,param_3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_48 = iVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (local_b8 != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    if (iVar7 != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__005da660(param_2 + 0x168,&local_44); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__005dd7d8(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__005dd810(param_1,&local_48); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (local_80 == 0) { // [自动静态注释] 条件判断/分支
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      (**(code **)(*(long *)(local_80 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__005dd810(&local_b0,&local_48); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar10 = 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(param_2 + (long)iVar11 * 4 + 0x13c) = uVar10;
  *param_1 = local_b0;
  param_1[1] = uStack_a8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 2) = local_a0;
  param_1[3] = local_98; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[4] = uStack_90; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[5] = local_88; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[6] = local_80; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[8] = local_70; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[9] = uStack_68; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[7] = local_78; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



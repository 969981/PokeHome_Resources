/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004E9510
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 内存顺序控制, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e9510; name: FUN_.text__005e9510
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005e9510(long *param_1,long param_2,byte *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte *pbVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *pcVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong *puVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte *pbVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte *local_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uStack_51; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong *local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar6 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar5 = (byte)((uint)uVar6 >> 0xd) & 0x4f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pbVar1 = (byte *)(param_2 + 0x52); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (local_60 = param_3, *pbVar1 == 0x4f) { // [自动静态注释] 循环/迭代
    cVar3 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar4) { // [自动静态注释] 条件判断/分支
      *pbVar1 = bVar5;
      cVar3 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
    if (cVar3 == '\0') goto LAB__text__005e95d4; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  pcVar2 = (char *)(param_2 + 0x53); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
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
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x50)); // [自动静态注释] nn::os 事件等待/通知
        while (*pbVar1 == 0x4f) { // [自动静态注释] 循环/迭代
          cVar3 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
          if (bVar4) { // [自动静态注释] 条件判断/分支
            *pbVar1 = bVar5;
            cVar3 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
          } // [自动静态注释] 作用域/控制流边界
          if (cVar3 == '\0') goto LAB__text__005e95c4; // [自动静态注释] 条件判断/分支
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
LAB__text__005e95c4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    cVar3 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar4 = (bool)ExclusiveMonitorPass(pcVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar4) { // [自动静态注释] 条件判断/分支
      *pcVar2 = *pcVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar3 != '\0'); // [自动静态注释] 循环/迭代
LAB__text__005e95d4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  local_68 = 0xcbf29ce484222645; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar5 = *local_60; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pbVar9 = local_60; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (bVar5 != 0) { // [自动静态注释] 循环/迭代
    pbVar9 = pbVar9 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_68 = (local_68 ^ bVar5) * 0x100000001b3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar5 = *pbVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  local_38 = &local_68; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar8 = FUN__text__005e99d0(param_2 + 0x58,&local_68,_DAT_008a01d8,&local_38,&uStack_51); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar8 = *(long *)(lVar8 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = lVar8;
  if (lVar8 == 0) { // [自动静态注释] 条件判断/分支
    FUN__text__005e96dc(&local_38,*(undefined8 *)(param_2 + 8),&local_60); // [自动静态注释] 调用尚未恢复正式名称的函数
    puVar7 = local_38; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *param_1 = (long)local_38;
    local_38 = &local_68; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar8 = FUN__text__005e99d0(param_2 + 0x58,&local_68,_DAT_008a01d8,&local_38,&uStack_51); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(ulong **)(lVar8 + 0x18) = puVar7;
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  do { // [自动静态注释] 循环/迭代
    cVar3 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar4) { // [自动静态注释] 条件判断/分支
      *pbVar1 = 0x4f;
      cVar3 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar3 != '\0'); // [自动静态注释] 循环/迭代
  DataMemoryBarrier(2,3); // [自动静态注释] AArch64 独占访问或内存屏障
  if (*(char *)(param_2 + 0x53) != '\0') { // [自动静态注释] 条件判断/分支
    nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x50)); // [自动静态注释] nn::os 事件等待/通知
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



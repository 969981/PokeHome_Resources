/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004C5E00
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 内存顺序控制, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005c5e00; name: FUN_.text__005c5e00
 */


void FUN__text__005c5e00(long param_1,long *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte *pbVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *pcVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar9 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar7 = (byte)((uint)uVar9 >> 0xd) & 0x4f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pbVar1 = (byte *)(param_1 + 0x112); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (*pbVar1 == 0x4f) { // [自动静态注释] 循环/迭代
    cVar5 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar6) { // [自动静态注释] 条件判断/分支
      *pbVar1 = bVar7;
      cVar5 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
    if (cVar5 == '\0') goto LAB__text__005c5ec4; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  pcVar2 = (char *)(param_1 + 0x113); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
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
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x110)); // [自动静态注释] nn::os 事件等待/通知
        while (*pbVar1 == 0x4f) { // [自动静态注释] 循环/迭代
          cVar5 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
          if (bVar6) { // [自动静态注释] 条件判断/分支
            *pbVar1 = bVar7;
            cVar5 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
          } // [自动静态注释] 作用域/控制流边界
          if (cVar5 == '\0') goto LAB__text__005c5eb4; // [自动静态注释] 条件判断/分支
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
LAB__text__005c5eb4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    cVar5 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar6 = (bool)ExclusiveMonitorPass(pcVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar6) { // [自动静态注释] 条件判断/分支
      *pcVar2 = *pcVar2 + -1;
      cVar5 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar5 != '\0'); // [自动静态注释] 循环/迭代
LAB__text__005c5ec4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  (**(code **)(*param_2 + 0x10))(&local_58,param_2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  lVar10 = local_58; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_58 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_38 = lVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar4 = *(long **)(param_1 + 0xb8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar4 < *(long **)(param_1 + 0xc0)) { // [自动静态注释] 条件判断/分支
    uVar9 = uVar9 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(uVar9 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    *(undefined8 *)(uVar9 + *(long *)(uVar9 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 200);
    *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + 1;
    local_38 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *plVar4 = lVar10;
    *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + -1;
    *(long **)(param_1 + 0xb8) = plVar4 + 1;
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__005c77b0(param_1 + 0xb0,&local_38); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (local_38 != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      local_38 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  if (local_58 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  do { // [自动静态注释] 循环/迭代
    cVar5 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar6) { // [自动静态注释] 条件判断/分支
      *pbVar1 = 0x4f;
      cVar5 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar5 != '\0'); // [自动静态注释] 循环/迭代
  DataMemoryBarrier(2,3); // [自动静态注释] AArch64 独占访问或内存屏障
  if (*(char *)(param_1 + 0x113) != '\0') { // [自动静态注释] 条件判断/分支
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x110)); // [自动静态注释] nn::os 事件等待/通知
  } // [自动静态注释] 作用域/控制流边界
  (**(code **)(*param_2 + 0x40))(param_2,*(undefined8 *)(param_1 + 0x118)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  lVar10 = param_2[0xe]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pbVar1 = (byte *)(lVar10 + 0x146); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (*pbVar1 == 0x4f) { // [自动静态注释] 循环/迭代
    cVar5 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar6) { // [自动静态注释] 条件判断/分支
      *pbVar1 = bVar7;
      cVar5 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
    if (cVar5 == '\0') goto LAB__text__005c6044; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  pcVar2 = (char *)(lVar10 + 0x147); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
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
        nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x144)); // [自动静态注释] nn::os 事件等待/通知
        while (*pbVar1 == 0x4f) { // [自动静态注释] 循环/迭代
          cVar5 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
          if (bVar6) { // [自动静态注释] 条件判断/分支
            *pbVar1 = bVar7;
            cVar5 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
          } // [自动静态注释] 作用域/控制流边界
          if (cVar5 == '\0') goto LAB__text__005c6034; // [自动静态注释] 条件判断/分支
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
LAB__text__005c6034: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    cVar5 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar6 = (bool)ExclusiveMonitorPass(pcVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar6) { // [自动静态注释] 条件判断/分支
      *pcVar2 = *pcVar2 + -1;
      cVar5 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar5 != '\0'); // [自动静态注释] 循环/迭代
LAB__text__005c6044: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  lVar8 = *(long *)(param_1 + 0x70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar3 = lVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(lVar8 + 0x120) != 0) { // [自动静态注释] 条件判断/分支
    lVar3 = *(long *)(lVar8 + 0x120); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (*(long *)(lVar8 + 0x128) != 0) { // [自动静态注释] 条件判断/分支
    lVar8 = *(long *)(lVar8 + 0x128); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005e75a4(lVar10,lVar3,lVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(ulong *)(lVar10 + 0x138) = *(ulong *)(lVar10 + 0x138) & 0xfffffffffffffffe;
  do { // [自动静态注释] 循环/迭代
    cVar5 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar6) { // [自动静态注释] 条件判断/分支
      *pbVar1 = 0x4f;
      cVar5 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar5 != '\0'); // [自动静态注释] 循环/迭代
  DataMemoryBarrier(2,3); // [自动静态注释] AArch64 独占访问或内存屏障
  if (*(char *)(lVar10 + 0x147) != '\0') { // [自动静态注释] 条件判断/分支
    nn::os::SignalLightEvent((LightEventType *)(lVar10 + 0x144)); // [自动静态注释] nn::os 事件等待/通知
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



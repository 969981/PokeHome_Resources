/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004F1710
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 内存顺序控制, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f1710; name: FUN_.text__005f1710
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005f1710(long param_1,long *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte *pbVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *pcVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *pcVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(ulong *)(*(long *)(param_1 + 0x70) + 0x130) = *(ulong *)(*(long *)(param_1 + 0x70) + 0x130) | 2;
  uVar7 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar12 = uVar7 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar12 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  plVar10 = *(long **)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long **)(uVar12 + *(long *)(uVar12 + 0x98) * 8 + 0x18) = plVar10;
  *(long *)(uVar12 + 0x98) = *(long *)(uVar12 + 0x98) + 1;
  lVar6 = (**(code **)(*plVar10 + 0x10))(plVar10,0x2f0,0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar6 == 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*plVar10 + 0xb8))(plVar10); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005e217c(lVar6,param_1 + 0x48,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(long **)(lVar6 + 8) = plVar10;
  *(long *)(lVar6 + 0x10) = lVar6;
  *(undefined8 *)(lVar6 + 0x18) = 0x2f0;
  *(undefined8 *)(lVar6 + 0x20) = 0x10;
  *(long *)(uVar12 + 0x98) = *(long *)(uVar12 + 0x98) + -1;
  FUN__text__005e706c(lVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))((long *)(lVar6 + 0x48)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  pcVar9 = *(code **)(lVar6 + 0x278); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (pcVar9 != (code *)0x0) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(lVar6 + 0x280) = 0;
    *(undefined8 *)(lVar6 + 0x288) = 0;
    *(undefined8 *)(lVar6 + 0x270) = 0;
    *(undefined8 *)(lVar6 + 0x278) = 0;
    (*pcVar9)(lVar6 + 0x290); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(long *)(lVar6 + 0x290) = param_1;
  *(code **)(lVar6 + 0x270) = FUN__text__005f22ec;
  *(undefined1 **)(lVar6 + 0x280) = &LAB__text__005f2340;
  *(undefined1 **)(lVar6 + 0x288) = &LAB__text__005f234c;
  bVar5 = (byte)((uint)uVar7 >> 0xd) & 0x4f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pbVar1 = (byte *)(lVar6 + 0x146); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined **)(lVar6 + 0x278) = &DAT__text__005f233c;
  *(undefined4 *)(lVar6 + 0x268) = 0;
  while (*pbVar1 == 0x4f) { // [自动静态注释] 循环/迭代
    cVar3 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar4) { // [自动静态注释] 条件判断/分支
      *pbVar1 = bVar5;
      cVar3 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
    if (cVar3 == '\0') goto LAB__text__005f18d4; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  pcVar2 = (char *)(lVar6 + 0x147); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
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
        nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0x144)); // [自动静态注释] nn::os 事件等待/通知
        while (*pbVar1 == 0x4f) { // [自动静态注释] 循环/迭代
          cVar3 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
          if (bVar4) { // [自动静态注释] 条件判断/分支
            *pbVar1 = bVar5;
            cVar3 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
          } // [自动静态注释] 作用域/控制流边界
          if (cVar3 == '\0') goto LAB__text__005f18c4; // [自动静态注释] 条件判断/分支
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
LAB__text__005f18c4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    cVar3 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar4 = (bool)ExclusiveMonitorPass(pcVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar4) { // [自动静态注释] 条件判断/分支
      *pcVar2 = *pcVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar3 != '\0'); // [自动静态注释] 循环/迭代
LAB__text__005f18d4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__005e75f8(lVar6,0,*(undefined8 *)(param_1 + 0x70)); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*(long *)(param_1 + 0x8e0) != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(*(long *)(param_1 + 0x8e0) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(long *)(param_1 + 0x8e0) = lVar6;
  lVar11 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar11 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  if (*(long *)(param_1 + 0xb0) != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(*(long *)(param_1 + 0xb0) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(long *)(param_1 + 0xb0) = lVar11;
  uVar7 = FUN__text__005f15c8(DAT_008e1b58); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((uVar7 & 1) == 0) { // [自动静态注释] 条件判断/分支
    uVar8 = (**(code **)(**(long **)(param_1 + 0xb0) + 0x38))(*(long **)(param_1 + 0xb0),0,0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__005f15c0(DAT_008e1b58,uVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
    pcVar9 = *(code **)(param_1 + 0x858); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (pcVar9 != (code *)0x0) { // [自动静态注释] 条件判断/分支
      *(undefined8 *)(param_1 + 0x860) = 0;
      *(undefined8 *)(param_1 + 0x868) = 0;
      *(undefined8 *)(param_1 + 0x850) = 0;
      *(undefined8 *)(param_1 + 0x858) = 0;
      (*pcVar9)(param_1 + 0x870); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    *(long *)(param_1 + 0x870) = param_1;
    *(code **)(param_1 + 0x850) = FUN__text__005f2358;
    *(undefined **)(param_1 + 0x858) = &DAT__text__005f23a4;
    *(undefined1 **)(param_1 + 0x860) = &LAB__text__005f23a8;
    *(undefined1 **)(param_1 + 0x868) = &LAB__text__005f23b4;
    FUN__text__005ac300(*(undefined8 *)(*_DAT_0089f5b8 + 0x8590),param_1 + 0x840); // [自动静态注释] 调用尚未恢复正式名称的函数
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
  if (*(char *)(lVar6 + 0x147) == '\0') { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  nn::os::SignalLightEvent((LightEventType *)(lVar6 + 0x144)); // [自动静态注释] nn::os 事件等待/通知
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



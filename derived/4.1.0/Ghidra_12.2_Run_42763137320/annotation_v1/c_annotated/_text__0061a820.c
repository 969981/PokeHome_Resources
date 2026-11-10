/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0051A820
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 内存顺序控制, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0061a820; name: FUN_.text__0061a820
 */


bool FUN__text__0061a820(long param_1,uint param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte *pbVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *pcVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *pcVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar6 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar5 = (byte)((uint)uVar6 >> 0xd) & 0x4f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pbVar1 = (byte *)(param_1 + 0x16); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (*pbVar1 == 0x4f) { // [自动静态注释] 循环/迭代
    cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar7 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar7) { // [自动静态注释] 条件判断/分支
      *pbVar1 = bVar5;
      cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
    if (cVar4 == '\0') goto LAB__text__0061a8e4; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  pcVar2 = (char *)(param_1 + 0x17); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar7 = (bool)ExclusiveMonitorPass(pcVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar7) { // [自动静态注释] 条件判断/分支
      *pcVar2 = *pcVar2 + '\x01';
      cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar4 != '\0'); // [自动静态注释] 循环/迭代
  DataMemoryBarrier(2,3); // [自动静态注释] AArch64 独占访问或内存屏障
  do { // [自动静态注释] 循环/迭代
    if (*pbVar1 != 0x4f) { // [自动静态注释] 条件判断/分支
      do { // [自动静态注释] 循环/迭代
        ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x14)); // [自动静态注释] nn::os 事件等待/通知
        while (*pbVar1 == 0x4f) { // [自动静态注释] 循环/迭代
          cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar7 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
          if (bVar7) { // [自动静态注释] 条件判断/分支
            *pbVar1 = bVar5;
            cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
          } // [自动静态注释] 作用域/控制流边界
          if (cVar4 == '\0') goto LAB__text__0061a8d4; // [自动静态注释] 条件判断/分支
        } // [自动静态注释] 作用域/控制流边界
      } while( true ); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar7 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar7) { // [自动静态注释] 条件判断/分支
      *pbVar1 = bVar5;
      cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar4 != '\0'); // [自动静态注释] 循环/迭代
LAB__text__0061a8d4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar7 = (bool)ExclusiveMonitorPass(pcVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar7) { // [自动静态注释] 条件判断/分支
      *pcVar2 = *pcVar2 + -1;
      cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar4 != '\0'); // [自动静态注释] 循环/迭代
LAB__text__0061a8e4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (*(char *)(param_1 + 0x10) != '\0') { // [自动静态注释] 条件判断/分支
    FUN__text__0060e7c4(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__006306b4(); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined1 *)(param_1 + 0x10) = 0;
  } // [自动静态注释] 作用域/控制流边界
  lVar8 = FUN__text__0060e7f8(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*(char *)(lVar8 + 0xc) == '\0') { // [自动静态注释] 条件判断/分支
    pcVar2 = (char *)(*(long *)(param_1 + 8) + 0xd8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar9 = FUN__text__0060e994(param_1,pcVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
    while (((uVar9 & 1) != 0 && (*pcVar2 != '\x03'))) { // [自动静态注释] 循环/迭代
      pcVar2 = pcVar2 + (ulong)*(ushort *)(pcVar2 + 1) + 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar9 = FUN__text__0060e994(param_1,pcVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  if ((param_2 & 0xff) < 0x40) { // [自动静态注释] 条件判断/分支
    if (*(char *)(param_1 + 0x10) != '\0') { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    lVar8 = FUN__text__0060e7f8(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (*(char *)(lVar8 + 0xc) == '\0') { // [自动静态注释] 条件判断/分支
      pcVar2 = (char *)(*(long *)(param_1 + 8) + 0xd8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar9 = FUN__text__0060e994(param_1,pcVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
      pcVar10 = &DAT_00c15eff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      while ((uVar9 & 1) != 0) { // [自动静态注释] 循环/迭代
        if (*pcVar2 == '\x03') { // [自动静态注释] 条件判断/分支
          pcVar10 = pcVar2 + 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          break; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        pcVar2 = pcVar2 + (ulong)*(ushort *)(pcVar2 + 1) + 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar9 = FUN__text__0060e994(param_1,pcVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      pcVar10 = &DAT_00c15eff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    bVar5 = pcVar10[(ulong)((param_2 & 0xff) >> 3) + 0x30]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(char *)(param_1 + 0x10) == '\0' && *(char *)(param_1 + 0x11) == '\0') { // [自动静态注释] 条件判断/分支
      lVar8 = FUN__text__0060e7c4(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (lVar8 != 0) { // [自动静态注释] 条件判断/分支
        FUN__text__0060e7c4(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
        FUN__text__006305fc(); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
      *(undefined1 *)(param_1 + 0x10) = 1;
    } // [自动静态注释] 作用域/控制流边界
    bVar7 = ((uint)bVar5 & 1 << (ulong)(param_2 & 7)) != 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    bVar7 = false; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  do { // [自动静态注释] 循环/迭代
    cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar3 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar3) { // [自动静态注释] 条件判断/分支
      *pbVar1 = 0x4f;
      cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar4 != '\0'); // [自动静态注释] 循环/迭代
  DataMemoryBarrier(2,3); // [自动静态注释] AArch64 独占访问或内存屏障
  if (*(char *)(param_1 + 0x17) != '\0') { // [自动静态注释] 条件判断/分支
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x14)); // [自动静态注释] nn::os 事件等待/通知
  } // [自动静态注释] 作用域/控制流边界
  return bVar7; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



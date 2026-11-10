/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00522260
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 内存顺序控制, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00622260; name: FUN_.text__00622260
 */


void FUN__text__00622260(undefined4 param_1,long param_2,char param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte *pbVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *pcVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *pcVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar5 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar4 = (byte)((uint)uVar5 >> 0xd) & 0x4f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pbVar1 = (byte *)(param_2 + 0x16); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (*pbVar1 == 0x4f) { // [自动静态注释] 循环/迭代
    cVar2 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar3 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar3) { // [自动静态注释] 条件判断/分支
      *pbVar1 = bVar4;
      cVar2 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
    if (cVar2 == '\0') goto LAB__text__00622324; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  pcVar8 = (char *)(param_2 + 0x17); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    cVar2 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar3 = (bool)ExclusiveMonitorPass(pcVar8,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar3) { // [自动静态注释] 条件判断/分支
      *pcVar8 = *pcVar8 + '\x01';
      cVar2 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar2 != '\0'); // [自动静态注释] 循环/迭代
  DataMemoryBarrier(2,3); // [自动静态注释] AArch64 独占访问或内存屏障
  do { // [自动静态注释] 循环/迭代
    if (*pbVar1 != 0x4f) { // [自动静态注释] 条件判断/分支
      do { // [自动静态注释] 循环/迭代
        ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x14)); // [自动静态注释] nn::os 事件等待/通知
        while (*pbVar1 == 0x4f) { // [自动静态注释] 循环/迭代
          cVar2 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar3 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
          if (bVar3) { // [自动静态注释] 条件判断/分支
            *pbVar1 = bVar4;
            cVar2 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
          } // [自动静态注释] 作用域/控制流边界
          if (cVar2 == '\0') goto LAB__text__00622314; // [自动静态注释] 条件判断/分支
        } // [自动静态注释] 作用域/控制流边界
      } while( true ); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    cVar2 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar3 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar3) { // [自动静态注释] 条件判断/分支
      *pbVar1 = bVar4;
      cVar2 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar2 != '\0'); // [自动静态注释] 循环/迭代
LAB__text__00622314: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    cVar2 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar3 = (bool)ExclusiveMonitorPass(pcVar8,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar3) { // [自动静态注释] 条件判断/分支
      *pcVar8 = *pcVar8 + -1;
      cVar2 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar2 != '\0'); // [自动静态注释] 循环/迭代
LAB__text__00622324: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (param_3 == '\x03') { // [自动静态注释] 条件判断/分支
    if (*(char *)(param_2 + 0x10) != '\0') { // [自动静态注释] 条件判断/分支
      FUN__text__0060e7c4(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__006306b4(); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined1 *)(param_2 + 0x10) = 0;
    } // [自动静态注释] 作用域/控制流边界
    lVar6 = FUN__text__0060e7f8(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (*(char *)(lVar6 + 0xc) == '\0') { // [自动静态注释] 条件判断/分支
      pcVar8 = (char *)(*(long *)(param_2 + 8) + 0xd8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar7 = FUN__text__0060e994(param_2,pcVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
      pcVar9 = (char *)0xc1615c; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      while ((uVar7 & 1) != 0) { // [自动静态注释] 循环/迭代
        if (*pcVar8 == '\x03') goto LAB__text__0062244c; // [自动静态注释] 条件判断/分支
        pcVar8 = pcVar8 + (ulong)*(ushort *)(pcVar8 + 1) + 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar7 = FUN__text__0060e994(param_2,pcVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      pcVar9 = (char *)0xc1615c; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (param_3 != '\x01') goto LAB__text__00622490; // [自动静态注释] 条件判断/分支
    if (*(char *)(param_2 + 0x10) != '\0') { // [自动静态注释] 条件判断/分支
      FUN__text__0060e7c4(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__006306b4(); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined1 *)(param_2 + 0x10) = 0;
    } // [自动静态注释] 作用域/控制流边界
    lVar6 = FUN__text__0060e7f8(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (*(char *)(lVar6 + 0xc) == '\0') { // [自动静态注释] 条件判断/分支
      pcVar8 = (char *)(*(long *)(param_2 + 8) + 0xd8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar7 = FUN__text__0060e994(param_2,pcVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
      pcVar9 = (char *)0xc160d5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      while ((uVar7 & 1) != 0) { // [自动静态注释] 循环/迭代
        if (*pcVar8 == '\x01') goto LAB__text__0062244c; // [自动静态注释] 条件判断/分支
        pcVar8 = pcVar8 + (ulong)*(ushort *)(pcVar8 + 1) + 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar7 = FUN__text__0060e994(param_2,pcVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      pcVar9 = (char *)0xc160d5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
LAB__text__00622450: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined4 *)(pcVar9 + 0x1f) = param_1;
  if (*(char *)(param_2 + 0x10) == '\0' && *(char *)(param_2 + 0x11) == '\0') { // [自动静态注释] 条件判断/分支
    lVar6 = FUN__text__0060e7c4(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (lVar6 != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__0060e7c4(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__006305fc(); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    *(char *)(param_2 + 0x10) = '\x01';
  } // [自动静态注释] 作用域/控制流边界
LAB__text__00622490: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    cVar2 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar3 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar3) { // [自动静态注释] 条件判断/分支
      *pbVar1 = 0x4f;
      cVar2 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar2 != '\0'); // [自动静态注释] 循环/迭代
  DataMemoryBarrier(2,3); // [自动静态注释] AArch64 独占访问或内存屏障
  if (*(char *)(param_2 + 0x17) == '\0') { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x14)); // [自动静态注释] nn::os 事件等待/通知
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
LAB__text__0062244c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  pcVar9 = pcVar8 + 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  goto LAB__text__00622450; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
} // [自动静态注释] 作用域/控制流边界



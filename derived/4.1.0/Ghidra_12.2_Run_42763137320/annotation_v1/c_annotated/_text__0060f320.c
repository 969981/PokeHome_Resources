/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0050F320
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 同步/原子操作, 内存顺序控制, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0060f320; name: FUN_.text__0060f320
 */


void FUN__text__0060f320(long param_1,void *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte *pbVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *pcVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *__dest; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar6 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar5 = (byte)((uint)uVar6 >> 0xd) & 0x4f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pbVar1 = (byte *)(param_1 + 0x16); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (*pbVar1 == 0x4f) { // [自动静态注释] 循环/迭代
    cVar3 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar4) { // [自动静态注释] 条件判断/分支
      *pbVar1 = bVar5;
      cVar3 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
    if (cVar3 == '\0') goto LAB__text__0060f3d4; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  pcVar2 = (char *)(param_1 + 0x17); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
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
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x14)); // [自动静态注释] nn::os 事件等待/通知
        while (*pbVar1 == 0x4f) { // [自动静态注释] 循环/迭代
          cVar3 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
          if (bVar4) { // [自动静态注释] 条件判断/分支
            *pbVar1 = bVar5;
            cVar3 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
          } // [自动静态注释] 作用域/控制流边界
          if (cVar3 == '\0') goto LAB__text__0060f3c4; // [自动静态注释] 条件判断/分支
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
LAB__text__0060f3c4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    cVar3 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar4 = (bool)ExclusiveMonitorPass(pcVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar4) { // [自动静态注释] 条件判断/分支
      *pcVar2 = *pcVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar3 != '\0'); // [自动静态注释] 循环/迭代
LAB__text__0060f3d4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (param_2 != (void *)0x0) { // [自动静态注释] 条件判断/分支
    __dest = (void *)FUN__text__0060e7c4(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    memcpy(__dest,param_2,0x296); // [自动静态注释] 内存复制、清零或移动
  } // [自动静态注释] 作用域/控制流边界
  *(undefined2 *)(param_1 + 0x10) = 1;
  FUN__text__0060e7c4(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__006306b4(); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined1 *)(param_1 + 0x10) = 0;
  if (*(char *)(param_1 + 0x11) == '\0') { // [自动静态注释] 条件判断/分支
    lVar7 = FUN__text__0060e7c4(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (lVar7 != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__0060e7c4(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__006305fc(); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    *(undefined1 *)(param_1 + 0x10) = 1;
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
  if (*(char *)(param_1 + 0x17) == '\0') { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x14)); // [自动静态注释] nn::os 事件等待/通知
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



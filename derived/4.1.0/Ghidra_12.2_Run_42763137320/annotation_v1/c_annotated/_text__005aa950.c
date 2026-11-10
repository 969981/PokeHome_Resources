/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004AA950
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 内存顺序控制, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005aa950; name: FUN_.text__005aa950
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005aa950(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  char cVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *param_1 = _DAT_008a56d0 + 0x10;
  if (((DAT_00b11140 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_00b11140), iVar6 != 0)) { // [自动静态注释] 条件判断/分支
    nn::os::InitializeLightEvent(&DAT_00b11138,0,1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    DAT_00b1113a = 0x4f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    DAT_00b1113b = '\0'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__001001d0(_DAT_008a5658,&DAT_00b11138,&__DT_FINI_ARRAY); // [自动静态注释] 调用尚未恢复正式名称的函数
    __cxa_guard_release(&DAT_00b11140); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  uVar4 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar3 = (byte)((uint)uVar4 >> 0xd) & 0x4f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (DAT_00b1113a == 0x4f) { // [自动静态注释] 循环/迭代
    cVar1 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar2 = (bool)ExclusiveMonitorPass(0xb1113a,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar2) { // [自动静态注释] 条件判断/分支
      cVar1 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
      DAT_00b1113a = bVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    if (cVar1 == '\0') goto LAB__text__005aaa34; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    cVar1 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar2 = (bool)ExclusiveMonitorPass(0xb1113b,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar2) { // [自动静态注释] 条件判断/分支
      cVar1 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
      DAT_00b1113b = DAT_00b1113b + '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar1 != '\0'); // [自动静态注释] 循环/迭代
  DataMemoryBarrier(2,3); // [自动静态注释] AArch64 独占访问或内存屏障
  do { // [自动静态注释] 循环/迭代
    if (DAT_00b1113a != 0x4f) { // [自动静态注释] 条件判断/分支
      do { // [自动静态注释] 循环/迭代
        ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        nn::os::WaitLightEvent((LightEventType *)&DAT_00b11138); // [自动静态注释] nn::os 事件等待/通知
        while (DAT_00b1113a == 0x4f) { // [自动静态注释] 循环/迭代
          cVar1 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar2 = (bool)ExclusiveMonitorPass(0xb1113a,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
          if (bVar2) { // [自动静态注释] 条件判断/分支
            cVar1 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
            DAT_00b1113a = bVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
          if (cVar1 == '\0') goto LAB__text__005aaa24; // [自动静态注释] 条件判断/分支
        } // [自动静态注释] 作用域/控制流边界
      } while( true ); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    cVar1 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar2 = (bool)ExclusiveMonitorPass(0xb1113a,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar2) { // [自动静态注释] 条件判断/分支
      cVar1 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
      DAT_00b1113a = bVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar1 != '\0'); // [自动静态注释] 循环/迭代
LAB__text__005aaa24: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    cVar1 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar2 = (bool)ExclusiveMonitorPass(0xb1113b,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar2) { // [自动静态注释] 条件判断/分支
      cVar1 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
      DAT_00b1113b = DAT_00b1113b + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar1 != '\0'); // [自动静态注释] 循环/迭代
LAB__text__005aaa34: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  lVar5 = _DAT_008a56d8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(_DAT_008a56d8 + 0x800) == 0x100) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(long **)(_DAT_008a56d8 + *(long *)(_DAT_008a56d8 + 0x800) * 8) = param_1;
  *(long *)(lVar5 + 0x800) = *(long *)(lVar5 + 0x800) + 1;
  do { // [自动静态注释] 循环/迭代
    cVar1 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar2 = (bool)ExclusiveMonitorPass(0xb1113a,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar2) { // [自动静态注释] 条件判断/分支
      DAT_00b1113a = 0x4f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      cVar1 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar1 != '\0'); // [自动静态注释] 循环/迭代
  DataMemoryBarrier(2,3); // [自动静态注释] AArch64 独占访问或内存屏障
  if (DAT_00b1113b == '\0') { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  nn::os::SignalLightEvent((LightEventType *)&DAT_00b11138); // [自动静态注释] nn::os 事件等待/通知
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



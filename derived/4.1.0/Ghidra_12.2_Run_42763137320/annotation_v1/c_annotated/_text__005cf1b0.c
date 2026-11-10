/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004CF1B0
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 内存顺序控制, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005cf1b0; name: FUN_.text__005cf1b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005cf1b0(long *param_1,byte *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte *pbVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *pcVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar7 = _DAT_0089f428; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar6 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar5 = (byte)((uint)uVar6 >> 0xd) & 0x4f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar10 = *_DAT_0089f428; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pbVar1 = (byte *)(lVar10 + 0xe2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (*pbVar1 == 0x4f) { // [自动静态注释] 循环/迭代
    cVar3 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar4) { // [自动静态注释] 条件判断/分支
      *pbVar1 = bVar5;
      cVar3 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
    if (cVar3 == '\0') goto LAB__text__005cf284; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  pcVar2 = (char *)(lVar10 + 0xe3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
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
        nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0xe0)); // [自动静态注释] nn::os 事件等待/通知
        while (*pbVar1 == 0x4f) { // [自动静态注释] 循环/迭代
          cVar3 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
          if (bVar4) { // [自动静态注释] 条件判断/分支
            *pbVar1 = bVar5;
            cVar3 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
          } // [自动静态注释] 作用域/控制流边界
          if (cVar3 == '\0') goto LAB__text__005cf274; // [自动静态注释] 条件判断/分支
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
LAB__text__005cf274: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    cVar3 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar4 = (bool)ExclusiveMonitorPass(pcVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar4) { // [自动静态注释] 条件判断/分支
      *pcVar2 = *pcVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar3 != '\0'); // [自动静态注释] 循环/迭代
LAB__text__005cf284: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  lVar9 = (((((((((((((((((((((((((((((((((ulong)*param_2 ^ 0xcbf29ce484222645) * 0x100000001b3 ^ // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                                        (ulong)param_2[1]) * 0x100000001b3 ^ (ulong)param_2[2]) * // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                                       0x100000001b3 ^ (ulong)param_2[3]) * 0x100000001b3 ^ // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                                     (ulong)param_2[4]) * 0x100000001b3 ^ (ulong)param_2[5]) * // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                                    0x100000001b3 ^ (ulong)param_2[6]) * 0x100000001b3 ^ // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                                  (ulong)param_2[7]) * 0x100000001b3 ^ (ulong)param_2[8]) * // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                                 0x100000001b3 ^ (ulong)param_2[9]) * 0x100000001b3 ^ // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                               (ulong)param_2[10]) * 0x100000001b3 ^ (ulong)param_2[0xb]) * // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                              0x100000001b3 ^ (ulong)param_2[0xc]) * 0x100000001b3 ^ // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                            (ulong)param_2[0xd]) * 0x100000001b3 ^ (ulong)param_2[0xe]) * // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                           0x100000001b3 ^ (ulong)param_2[0xf]) * 0x100000001b3 ^ // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                         (ulong)param_2[0x10]) * 0x100000001b3 ^ (ulong)param_2[0x11]) * // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                        0x100000001b3 ^ (ulong)param_2[0x12]) * 0x100000001b3 ^ (ulong)param_2[0x13] // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                      ) * 0x100000001b3 ^ (ulong)param_2[0x14]) * 0x100000001b3 ^ // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    (ulong)param_2[0x15]) * 0x100000001b3 ^ (ulong)param_2[0x16]) * 0x100000001b3 ^ // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                  (ulong)param_2[0x17]) * 0x100000001b3 ^ (ulong)param_2[0x18]) * 0x100000001b3 ^ // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                (ulong)param_2[0x19]) * 0x100000001b3 ^ (ulong)param_2[0x1a]) * 0x100000001b3 ^ // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              (ulong)param_2[0x1b]) * 0x100000001b3 ^ (ulong)param_2[0x1c]) * 0x100000001b3 ^ // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            (ulong)param_2[0x1d]) * 0x100000001b3 ^ (ulong)param_2[0x1e]) * 0x100000001b3 ^ // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          (ulong)param_2[0x1f]) * 0x100000001b3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__005cdf90(param_1,*plVar7,lVar9); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*param_1 == 0) { // [自动静态注释] 条件判断/分支
    FUN__text__005cdba8(&local_58,*plVar7,lVar9); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (*param_1 != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(*param_1 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    lVar8 = *plVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *param_1 = local_58;
    lVar8 = lVar8 + 0x50; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__006f31b8(local_58 + 0x58,_DAT_008a0448,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__006ee594(lVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__006ee5f0(lVar8,*(undefined4 *)(local_58 + 0xe0),local_58 + 0x58); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__006ee624(lVar8,local_58 + 0xd0,*(undefined4 *)(local_58 + 0xe0)); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__006ee5a0(lVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(long *)(local_58 + 0xd8) = lVar9;
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
  if (*(char *)(lVar10 + 0xe3) != '\0') { // [自动静态注释] 条件判断/分支
    nn::os::SignalLightEvent((LightEventType *)(lVar10 + 0xe0)); // [自动静态注释] nn::os 事件等待/通知
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



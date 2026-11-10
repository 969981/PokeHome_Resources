/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004B87E0
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 内存顺序控制, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005b87e0; name: FUN_.text__005b87e0
 */


void FUN__text__005b87e0(long param_1,long *param_2,undefined8 param_3,uint param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte *pbVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *pcVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint local_260 [128]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint local_44; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar11 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar5 = (byte)((uint)uVar11 >> 0xd) & 0x4f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pbVar1 = (byte *)(param_1 + 0x56); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (local_44 = param_4, *pbVar1 == 0x4f) { // [自动静态注释] 循环/迭代
    cVar3 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar4) { // [自动静态注释] 条件判断/分支
      *pbVar1 = bVar5;
      cVar3 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
    if (cVar3 == '\0') goto LAB__text__005b88b4; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  pcVar2 = (char *)(param_1 + 0x57); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
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
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x54)); // [自动静态注释] nn::os 事件等待/通知
        while (*pbVar1 == 0x4f) { // [自动静态注释] 循环/迭代
          cVar3 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
          if (bVar4) { // [自动静态注释] 条件判断/分支
            *pbVar1 = bVar5;
            cVar3 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
          } // [自动静态注释] 作用域/控制流边界
          if (cVar3 == '\0') goto LAB__text__005b88a4; // [自动静态注释] 条件判断/分支
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
LAB__text__005b88a4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    cVar3 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar4 = (bool)ExclusiveMonitorPass(pcVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar4) { // [自动静态注释] 条件判断/分支
      *pcVar2 = *pcVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar3 != '\0'); // [自动静态注释] 循环/迭代
LAB__text__005b88b4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar6 = local_44; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar7 = param_1 + (ulong)local_44 * 0x120; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(int *)(lVar7 + 0x198) < 0) goto LAB__text__005b89e0; // [自动静态注释] 条件判断/分支
  lVar9 = *(long *)(param_1 + 0x740); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar8 = *(long *)(param_1 + 0x748); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar9 == lVar8) { // [自动静态注释] 条件判断/分支
LAB__text__005b8904: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (lVar9 != lVar8) { // [自动静态注释] 条件判断/分支
      FUN__text__005d51dc(local_260,param_3,*(undefined4 *)(lVar9 + 0x1e8), // [自动静态注释] 调用尚未恢复正式名称的函数
                          *(undefined4 *)(lVar9 + 0x1ec),param_2);
      FUN__text__0014d25c(lVar9,local_260); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__0014821c(local_260); // [自动静态注释] 调用尚未恢复正式名称的函数
      goto LAB__text__005b89e0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    do { // [自动静态注释] 循环/迭代
      if ((*(long *)(lVar9 + 0x20) == *param_2) && (local_44 == *(uint *)(lVar9 + 0x1e8))) // [自动静态注释] 条件判断/分支
      goto LAB__text__005b8904; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      lVar9 = lVar9 + 0x200; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (lVar9 != lVar8); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  local_260[0] = FUN__text__005cf99c(lVar7 + 0x80,local_44,2,param_2[1]); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar10 = *(ulong *)(param_1 + 0x748); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar10 < *(ulong *)(param_1 + 0x750)) { // [自动静态注释] 条件判断/分支
    uVar11 = uVar11 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(uVar11 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    *(undefined8 *)(uVar11 + *(long *)(uVar11 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0x758)
    ; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(long *)(uVar11 + 0x98) = *(long *)(uVar11 + 0x98) + 1;
    FUN__text__005d51dc(uVar10,param_3,uVar6,local_260[0],param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(long *)(uVar11 + 0x98) = *(long *)(uVar11 + 0x98) + -1;
    *(ulong *)(param_1 + 0x748) = uVar10 + 0x200;
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__005b8a40(param_1 + 0x740,param_3,&local_44,local_260,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
LAB__text__005b89e0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    cVar3 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar4) { // [自动静态注释] 条件判断/分支
      *pbVar1 = 0x4f;
      cVar3 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar3 != '\0'); // [自动静态注释] 循环/迭代
  DataMemoryBarrier(2,3); // [自动静态注释] AArch64 独占访问或内存屏障
  if (*(char *)(param_1 + 0x57) != '\0') { // [自动静态注释] 条件判断/分支
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x54)); // [自动静态注释] nn::os 事件等待/通知
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



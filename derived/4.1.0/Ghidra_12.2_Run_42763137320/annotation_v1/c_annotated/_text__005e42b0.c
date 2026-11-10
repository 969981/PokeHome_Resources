/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004E42B0
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 内存顺序控制, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e42b0; name: FUN_.text__005e42b0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN__text__005e42b0(undefined8 *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte *pbVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *pcVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar7 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar6 = (byte)((uint)uVar7 >> 0xd) & 0x4f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pbVar1 = (byte *)((long)param_1 + 0x4a); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (*pbVar1 == 0x4f) { // [自动静态注释] 循环/迭代
    cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar5) { // [自动静态注释] 条件判断/分支
      *pbVar1 = bVar6;
      cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
    if (cVar4 == '\0') goto LAB__text__005e4364; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  pcVar2 = (char *)((long)param_1 + 0x4b); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar5 = (bool)ExclusiveMonitorPass(pcVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar5) { // [自动静态注释] 条件判断/分支
      *pcVar2 = *pcVar2 + '\x01';
      cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar4 != '\0'); // [自动静态注释] 循环/迭代
  DataMemoryBarrier(2,3); // [自动静态注释] AArch64 独占访问或内存屏障
  do { // [自动静态注释] 循环/迭代
    if (*pbVar1 != 0x4f) { // [自动静态注释] 条件判断/分支
      do { // [自动静态注释] 循环/迭代
        ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 9)); // [自动静态注释] nn::os 事件等待/通知
        while (*pbVar1 == 0x4f) { // [自动静态注释] 循环/迭代
          cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
          if (bVar5) { // [自动静态注释] 条件判断/分支
            *pbVar1 = bVar6;
            cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
          } // [自动静态注释] 作用域/控制流边界
          if (cVar4 == '\0') goto LAB__text__005e4354; // [自动静态注释] 条件判断/分支
        } // [自动静态注释] 作用域/控制流边界
      } while( true ); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar5) { // [自动静态注释] 条件判断/分支
      *pbVar1 = bVar6;
      cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar4 != '\0'); // [自动静态注释] 循环/迭代
LAB__text__005e4354: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar5 = (bool)ExclusiveMonitorPass(pcVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar5) { // [自动静态注释] 条件判断/分支
      *pcVar2 = *pcVar2 + -1;
      cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar4 != '\0'); // [自动静态注释] 循环/迭代
LAB__text__005e4364: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  plVar11 = (long *)param_1[0x17]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar3 = (long *)param_1[0x18]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar11 == plVar3) { // [自动静态注释] 条件判断/分支
    plVar10 = plVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    do { // [自动静态注释] 循环/迭代
      lVar9 = *plVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar10 = plVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((*(long *)(lVar9 + 0xc0) != *(long *)(lVar9 + 200) || // [自动静态注释] 条件判断/分支
           *(long *)(lVar9 + 0x60) != *(long *)(lVar9 + 0x68)) ||
         (*(long *)(lVar9 + 0xf0) != *(long *)(lVar9 + 0xf8) || // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          *(long *)(lVar9 + 0x90) != *(long *)(lVar9 + 0x98))) {
        FUN__text__005e77f0(lVar9,*param_1,param_1[1]); // [自动静态注释] 调用尚未恢复正式名称的函数
        plVar8 = plVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (plVar11 != plVar3) { // [自动静态注释] 条件判断/分支
          while (plVar11 = plVar11 + 1, plVar10 = plVar8, plVar11 != plVar3) { // [自动静态注释] 循环/迭代
            lVar9 = *plVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            if ((*(long *)(lVar9 + 0xc0) == *(long *)(lVar9 + 200) && // [自动静态注释] 条件判断/分支
                 *(long *)(lVar9 + 0x60) == *(long *)(lVar9 + 0x68)) &&
               (*(long *)(lVar9 + 0xf0) == *(long *)(lVar9 + 0xf8) && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                *(long *)(lVar9 + 0x90) == *(long *)(lVar9 + 0x98))) {
              *plVar8 = lVar9;
              plVar8 = plVar8 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            } // [自动静态注释] 作用域/控制流边界
            else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              FUN__text__005e77f0(lVar9,*param_1,param_1[1]); // [自动静态注释] 调用尚未恢复正式名称的函数
            } // [自动静态注释] 作用域/控制流边界
          } // [自动静态注释] 作用域/控制流边界
        } // [自动静态注释] 作用域/控制流边界
        break; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      plVar11 = plVar11 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (plVar11 != plVar3); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  for (plVar11 = (long *)param_1[0x17]; plVar11 != plVar10; plVar11 = plVar11 + 1) { // [自动静态注释] 循环/迭代
    FUN__text__005e77f0(*plVar11,*param_1,param_1[1]); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  param_1[0x18] = param_1[0x17]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar5) { // [自动静态注释] 条件判断/分支
      *pbVar1 = 0x4f;
      cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar4 != '\0'); // [自动静态注释] 循环/迭代
  DataMemoryBarrier(2,3); // [自动静态注释] AArch64 独占访问或内存屏障
  if (*(char *)((long)param_1 + 0x4b) == '\0') { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 9)); // [自动静态注释] nn::os 事件等待/通知
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004B8430
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 内存顺序控制, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005b8430; name: FUN_.text__005b8430
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005b8430(long param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte *pbVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *pcVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar15; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar10 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar8 = (byte)((uint)uVar10 >> 0xd) & 0x4f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pbVar1 = (byte *)(param_1 + 0x56); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (*pbVar1 == 0x4f) { // [自动静态注释] 循环/迭代
    cVar6 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar7 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar7) { // [自动静态注释] 条件判断/分支
      *pbVar1 = bVar8;
      cVar6 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
    if (cVar6 == '\0') goto LAB__text__005b84f4; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  pcVar2 = (char *)(param_1 + 0x57); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    cVar6 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar7 = (bool)ExclusiveMonitorPass(pcVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar7) { // [自动静态注释] 条件判断/分支
      *pcVar2 = *pcVar2 + '\x01';
      cVar6 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar6 != '\0'); // [自动静态注释] 循环/迭代
  DataMemoryBarrier(2,3); // [自动静态注释] AArch64 独占访问或内存屏障
  do { // [自动静态注释] 循环/迭代
    if (*pbVar1 != 0x4f) { // [自动静态注释] 条件判断/分支
      do { // [自动静态注释] 循环/迭代
        ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x54)); // [自动静态注释] nn::os 事件等待/通知
        while (*pbVar1 == 0x4f) { // [自动静态注释] 循环/迭代
          cVar6 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar7 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
          if (bVar7) { // [自动静态注释] 条件判断/分支
            *pbVar1 = bVar8;
            cVar6 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
          } // [自动静态注释] 作用域/控制流边界
          if (cVar6 == '\0') goto LAB__text__005b84e4; // [自动静态注释] 条件判断/分支
        } // [自动静态注释] 作用域/控制流边界
      } while( true ); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    cVar6 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar7 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar7) { // [自动静态注释] 条件判断/分支
      *pbVar1 = bVar8;
      cVar6 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar6 != '\0'); // [自动静态注释] 循环/迭代
LAB__text__005b84e4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    cVar6 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar7 = (bool)ExclusiveMonitorPass(pcVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar7) { // [自动静态注释] 条件判断/分支
      *pcVar2 = *pcVar2 + -1;
      cVar6 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar6 != '\0'); // [自动静态注释] 循环/迭代
LAB__text__005b84f4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (-1 < *(int *)(param_1 + 0x198)) { // [自动静态注释] 条件判断/分支
    FUN__text__005cf8ec(param_1 + 0x80,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  if (-1 < *(int *)(param_1 + 0x2b8)) { // [自动静态注释] 条件判断/分支
    FUN__text__005cf8ec(param_1 + 0x1a0,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  if (-1 < *(int *)(param_1 + 0x3d8)) { // [自动静态注释] 条件判断/分支
    FUN__text__005cf8ec(param_1 + 0x2c0,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  if (-1 < *(int *)(param_1 + 0x4f8)) { // [自动静态注释] 条件判断/分支
    FUN__text__005cf8ec(param_1 + 0x3e0,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  if (-1 < *(int *)(param_1 + 0x618)) { // [自动静态注释] 条件判断/分支
    FUN__text__005cf8ec(param_1 + 0x500,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  if (-1 < *(int *)(param_1 + 0x738)) { // [自动静态注释] 条件判断/分支
    FUN__text__005cf8ec(param_1 + 0x620,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  uVar10 = _DAT_008a0448; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(char *)(param_1 + 0x8d8) != '\0') { // [自动静态注释] 条件判断/分支
    FUN__text__006f45d0(param_1 + 0x770,_DAT_008a0448); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__006f4424(param_1 + 0x770,uVar10,param_1 + 0x7a0); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined1 *)(param_1 + 0x8d8) = 0;
  } // [自动静态注释] 作用域/控制流边界
  piVar9 = _DAT_008a0300; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__006ecd4c(*(long *)(param_2 + 0x58) + (long)*_DAT_008a0300 * 0x168,param_1 + 0x770); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar10 = _DAT_008a0448; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(char *)(param_1 + 0x8d9) != '\0') { // [自动静态注释] 条件判断/分支
    FUN__text__006f49e0(param_1 + 0x7e0,_DAT_008a0448); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__006f483c(param_1 + 0x7e0,uVar10,param_1 + 0x7fc); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined1 *)(param_1 + 0x8d9) = 0;
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__006ecef4(*(long *)(param_2 + 0x58) + (long)*piVar9 * 0x168,param_1 + 0x7e0); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*(char *)(param_1 + 0x8da) != '\0') { // [自动静态注释] 条件判断/分支
    if (*(long *)(param_1 + 0x8b8) != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__006f4820(param_1 + 0x840,_DAT_008a0448); // [自动静态注释] 调用尚未恢复正式名称的函数
      lVar12 = *(long *)(param_1 + 0x8b8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(param_1 + 0x8b8) = 0;
      if (lVar12 != 0) { // [自动静态注释] 条件判断/分支
        (**(code **)(**(long **)(param_1 + 0x8c0) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                  (*(long **)(param_1 + 0x8c0),lVar12,*(undefined8 *)(param_1 + 0x8c8), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                   *(undefined8 *)(param_1 + 0x8d0));
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    uVar10 = FUN__text__006f45d8(param_1 + 0x868); // [自动静态注释] 调用尚未恢复正式名称的函数
    plVar14 = *(long **)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar11 = (**(code **)(*plVar14 + 0x10))(plVar14,uVar10,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar12 = *(long *)(param_1 + 0x8b8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_1 + 0x8b8) = uVar11;
    if (lVar12 != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(**(long **)(param_1 + 0x8c0) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                (*(long **)(param_1 + 0x8c0),lVar12,*(undefined8 *)(param_1 + 0x8c8), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                 *(undefined8 *)(param_1 + 0x8d0));
      uVar11 = *(undefined8 *)(param_1 + 0x8b8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *(long **)(param_1 + 0x8c0) = plVar14;
    *(undefined8 *)(param_1 + 0x8c8) = uVar10;
    *(undefined8 *)(param_1 + 0x8d0) = 8;
    FUN__text__006f45f8(param_1 + 0x840,uVar11,uVar10); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__006f4610(param_1 + 0x840,_DAT_008a0448,param_1 + 0x868); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined1 *)(param_1 + 0x8da) = 0;
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__006ece50(*(long *)(param_2 + 0x58) + (long)*piVar9 * 0x168,param_1 + 0x840); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar15 = *(long *)(param_1 + 0x748); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  for (lVar12 = *(long *)(param_1 + 0x740); lVar12 != lVar15; lVar12 = lVar12 + 0x200) { // [自动静态注释] 循环/迭代
    if (-1 < *(int *)(lVar12 + 0x1ec)) { // [自动静态注释] 条件判断/分支
      FUN__text__005d5480(lVar12); // [自动静态注释] 调用尚未恢复正式名称的函数
      iVar5 = *piVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar13 = *(long *)(param_2 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar3 = *(undefined4 *)(lVar12 + 0x1ec); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar4 = *(undefined4 *)(lVar12 + 0x1e8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar10 = FUN__text__005d54d0(lVar12); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__006ee15c(lVar13 + (long)iVar5 * 0x168,uVar3,uVar4,uVar10, // [自动静态注释] 调用尚未恢复正式名称的函数
                          *(long *)(lVar12 + 0x178) + 0xd0);
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  do { // [自动静态注释] 循环/迭代
    cVar6 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar7 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar7) { // [自动静态注释] 条件判断/分支
      *pbVar1 = 0x4f;
      cVar6 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar6 != '\0'); // [自动静态注释] 循环/迭代
  DataMemoryBarrier(2,3); // [自动静态注释] AArch64 独占访问或内存屏障
  if (*(char *)(param_1 + 0x57) == '\0') { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x54)); // [自动静态注释] nn::os 事件等待/通知
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



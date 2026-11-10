/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004B75A0
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 内存顺序控制, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005b75a0; name: FUN_.text__005b75a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005b75a0(long param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte *pbVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *pcVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *pcVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint *puVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar15; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar16; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (((*_DAT_008a01f8 & 1) == 0) && // [自动静态注释] 条件判断/分支
     (iVar8 = __cxa_guard_acquire(_DAT_008a01f8), puVar7 = _DAT_008a0200, iVar8 != 0)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *_DAT_008a0200 = 0xcbf29ce484222645;
    puVar7[1] = 0x70f683; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar7[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar7[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__001001d0(_DAT_008a0208,puVar7,&__DT_FINI_ARRAY); // [自动静态注释] 调用尚未恢复正式名称的函数
    __cxa_guard_release(_DAT_008a01f8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005b709c(param_1,_DAT_008a0200,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar12 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar6 = (byte)((uint)uVar12 >> 0xd) & 0x4f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pbVar1 = (byte *)(param_1 + 0x56); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (*pbVar1 == 0x4f) { // [自动静态注释] 循环/迭代
    cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar5) { // [自动静态注释] 条件判断/分支
      *pbVar1 = bVar6;
      cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
    if (cVar4 == '\0') goto LAB__text__005b7724; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  pcVar2 = (char *)(param_1 + 0x57); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
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
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x54)); // [自动静态注释] nn::os 事件等待/通知
        while (*pbVar1 == 0x4f) { // [自动静态注释] 循环/迭代
          cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
          if (bVar5) { // [自动静态注释] 条件判断/分支
            *pbVar1 = bVar6;
            cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
          } // [自动静态注释] 作用域/控制流边界
          if (cVar4 == '\0') goto LAB__text__005b7714; // [自动静态注释] 条件判断/分支
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
LAB__text__005b7714: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar5 = (bool)ExclusiveMonitorPass(pcVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar5) { // [自动静态注释] 条件判断/分支
      *pcVar2 = *pcVar2 + -1;
      cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar4 != '\0'); // [自动静态注释] 循环/迭代
LAB__text__005b7724: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  puVar14 = (uint *)&DAT_00757c98; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    uVar3 = *puVar14; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar15 = (ulong)uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((*(uint *)(uVar15 * 4 + 0x757cb0) & *(uint *)(param_2 + 0x11c)) != 0) { // [自动静态注释] 条件判断/分支
      lVar13 = *(long *)(param_2 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (lVar13 != 0) { // [自动静态注释] 条件判断/分支
        (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      lVar16 = param_1 + 0x80 + uVar15 * 0x120; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar10 = *(long *)(lVar16 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long *)(lVar16 + 8) = lVar13;
      if (lVar10 != 0) { // [自动静态注释] 条件判断/分支
        (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      pcVar11 = *(code **)(lVar16 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (pcVar11 != (code *)0x0) { // [自动静态注释] 条件判断/分支
        *(undefined8 *)(lVar16 + 0x20) = 0;
        *(undefined8 *)(lVar16 + 0x28) = 0;
        *(undefined8 *)(lVar16 + 0x10) = 0;
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (*pcVar11)(lVar16 + 0x30); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      if (*(code **)(param_2 + 0x20) != (code *)0x0) { // [自动静态注释] 条件判断/分支
        (**(code **)(param_2 + 0x20))(param_2 + 0x30,lVar16 + 0x30); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        uVar12 = *(undefined8 *)(param_2 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined8 *)(lVar16 + 0x18) = *(undefined8 *)(param_2 + 0x18);
        *(undefined8 *)(lVar16 + 0x28) = uVar12;
        uVar12 = *(undefined8 *)(param_2 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined8 *)(lVar16 + 0x20) = *(undefined8 *)(param_2 + 0x20);
        *(undefined8 *)(lVar16 + 0x10) = uVar12;
      } // [自动静态注释] 作用域/控制流边界
      pcVar11 = *(code **)(lVar16 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (pcVar11 != (code *)0x0) { // [自动静态注释] 条件判断/分支
        *(undefined8 *)(lVar16 + 0xa0) = 0;
        *(undefined8 *)(lVar16 + 0xa8) = 0;
        *(undefined8 *)(lVar16 + 0x90) = 0;
        *(undefined8 *)(lVar16 + 0x98) = 0;
        (*pcVar11)(lVar16 + 0xb0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      if (*(code **)(param_2 + 0xa0) != (code *)0x0) { // [自动静态注释] 条件判断/分支
        (**(code **)(param_2 + 0xa0))(param_2 + 0xb0,lVar16 + 0xb0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        uVar12 = *(undefined8 *)(param_2 + 0xa8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined8 *)(lVar16 + 0x98) = *(undefined8 *)(param_2 + 0x98);
        *(undefined8 *)(lVar16 + 0xa8) = uVar12;
        uVar12 = *(undefined8 *)(param_2 + 0x90); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined8 *)(lVar16 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
        *(undefined8 *)(lVar16 + 0x90) = uVar12;
      } // [自动静态注释] 作用域/控制流边界
      lVar13 = param_1 + 0x80 + uVar15 * 0x120; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(lVar13 + 0x118) = *(undefined8 *)(param_2 + 0x118);
      *(undefined8 *)(lVar13 + 0x110) = *(undefined8 *)(param_2 + 0x110);
      lVar10 = *(long *)(param_1 + 0x748); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      for (lVar13 = *(long *)(param_1 + 0x740); lVar13 != lVar10; lVar13 = lVar13 + 0x200) { // [自动静态注释] 循环/迭代
        if (*(uint *)(lVar13 + 0x1e8) == uVar3) { // [自动静态注释] 条件判断/分支
          uVar9 = FUN__text__005cf99c(lVar16,uVar3,2,*(undefined8 *)(lVar13 + 0x28)); // [自动静态注释] 调用尚未恢复正式名称的函数
          *(undefined4 *)(lVar13 + 0x1ec) = uVar9;
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    puVar14 = puVar14 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while (puVar14 != (uint *)0x757cb0); // [自动静态注释] 循环/迭代
  do { // [自动静态注释] 循环/迭代
    cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar5) { // [自动静态注释] 条件判断/分支
      *pbVar1 = 0x4f;
      cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar4 != '\0'); // [自动静态注释] 循环/迭代
  DataMemoryBarrier(2,3); // [自动静态注释] AArch64 独占访问或内存屏障
  if (*(char *)(param_1 + 0x57) == '\0') { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x54)); // [自动静态注释] nn::os 事件等待/通知
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



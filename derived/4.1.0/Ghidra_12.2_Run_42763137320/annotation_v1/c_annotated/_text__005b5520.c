/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004B5520
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 内存顺序控制, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005b5520; name: FUN_.text__005b5520
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005b5520(long param_1,undefined8 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte *pbVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *pcVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar8 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = uVar8 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_38 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (((uVar3 == 0) || (iVar12 = *(int *)(uVar3 + 0xb0), iVar12 == -1)) || (iVar12 == 3)) { // [自动静态注释] 条件判断/分支
    pbVar1 = (byte *)(param_1 + 0x3fe); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar7 = (byte)((uint)uVar8 >> 0xd) & 0x4f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__005b5594: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (*pbVar1 == 0x4f) goto code_r0x005b55a0; // [自动静态注释] 条件判断/分支
    pcVar2 = (char *)(param_1 + 0x3ff); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    do { // [自动静态注释] 循环/迭代
      cVar5 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar6 = (bool)ExclusiveMonitorPass(pcVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
      if (bVar6) { // [自动静态注释] 条件判断/分支
        *pcVar2 = *pcVar2 + '\x01';
        cVar5 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
      } // [自动静态注释] 作用域/控制流边界
    } while (cVar5 != '\0'); // [自动静态注释] 循环/迭代
    DataMemoryBarrier(2,3); // [自动静态注释] AArch64 独占访问或内存屏障
    do { // [自动静态注释] 循环/迭代
      if (*pbVar1 != 0x4f) { // [自动静态注释] 条件判断/分支
        do { // [自动静态注释] 循环/迭代
          ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x3fc)); // [自动静态注释] nn::os 事件等待/通知
          while (*pbVar1 == 0x4f) { // [自动静态注释] 循环/迭代
            cVar5 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
            if (bVar6) { // [自动静态注释] 条件判断/分支
              *pbVar1 = bVar7;
              cVar5 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
            } // [自动静态注释] 作用域/控制流边界
            if (cVar5 == '\0') goto LAB__text__005b5614; // [自动静态注释] 条件判断/分支
          } // [自动静态注释] 作用域/控制流边界
        } while( true ); // [自动静态注释] 循环/迭代
      } // [自动静态注释] 作用域/控制流边界
      cVar5 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
      if (bVar6) { // [自动静态注释] 条件判断/分支
        *pbVar1 = bVar7;
        cVar5 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
      } // [自动静态注释] 作用域/控制流边界
    } while (cVar5 != '\0'); // [自动静态注释] 循环/迭代
LAB__text__005b5614: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    do { // [自动静态注释] 循环/迭代
      cVar5 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar6 = (bool)ExclusiveMonitorPass(pcVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
      if (bVar6) { // [自动静态注释] 条件判断/分支
        *pcVar2 = *pcVar2 + -1;
        cVar5 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
      } // [自动静态注释] 作用域/控制流边界
    } while (cVar5 != '\0'); // [自动静态注释] 循环/迭代
LAB__text__005b5624: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    bVar6 = false; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar12 = 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar4 = *_DAT_008a0300; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    piVar9 = _DAT_008a0300; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    goto joined_r0x005b5640; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  bVar6 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar4 = *_DAT_008a0300; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  piVar9 = _DAT_008a0300; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
joined_r0x005b5640: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  _DAT_008a0300 = piVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (iVar4 != 0) { // [自动静态注释] 条件判断/分支
    lVar11 = param_1 + (long)iVar12 * 0x60; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar10 = *(undefined8 **)(lVar11 + 0x278); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (puVar10 == *(undefined8 **)(lVar11 + 0x280)) { // [自动静态注释] 条件判断/分支
      FUN__text__005b6650(lVar11 + 0x270,&local_38); // [自动静态注释] 调用尚未恢复正式名称的函数
      iVar4 = *piVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if (*(long *)(uVar3 + 0x98) == 0x10) goto LAB__text__005b577c; // [自动静态注释] 条件判断/分支
      *(undefined8 *)(uVar3 + 0x18 + *(long *)(uVar3 + 0x98) * 8) = *(undefined8 *)(lVar11 + 0x288);
      *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
      *puVar10 = local_38;
      *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
      *(undefined8 **)(lVar11 + 0x278) = puVar10 + 1;
      iVar4 = *piVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    if (iVar4 == 1) goto joined_r0x005b56a4; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  lVar11 = param_1 + (long)iVar12 * 0x60; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar10 = *(undefined8 **)(lVar11 + 0x2a8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (puVar10 == *(undefined8 **)(lVar11 + 0x2b0)) { // [自动静态注释] 条件判断/分支
    FUN__text__005b6650(lVar11 + 0x2a0,&local_38); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (*(long *)(uVar3 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
LAB__text__005b577c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    *(undefined8 *)(uVar3 + 0x18 + *(long *)(uVar3 + 0x98) * 8) = *(undefined8 *)(lVar11 + 0x2b8);
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
    *puVar10 = local_38;
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
    *(undefined8 **)(lVar11 + 0x2a8) = puVar10 + 1;
  } // [自动静态注释] 作用域/控制流边界
joined_r0x005b56a4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (!bVar6) { // [自动静态注释] 条件判断/分支
    do { // [自动静态注释] 循环/迭代
      cVar5 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar6 = (bool)ExclusiveMonitorPass((undefined1 *)(param_1 + 0x3fe),0x10); // [自动静态注释] AArch64 独占访问或内存屏障
      if (bVar6) { // [自动静态注释] 条件判断/分支
        *(undefined1 *)(param_1 + 0x3fe) = 0x4f;
        cVar5 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
      } // [自动静态注释] 作用域/控制流边界
    } while (cVar5 != '\0'); // [自动静态注释] 循环/迭代
    DataMemoryBarrier(2,3); // [自动静态注释] AArch64 独占访问或内存屏障
    if (*(char *)(param_1 + 0x3ff) != '\0') { // [自动静态注释] 条件判断/分支
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x3fc)); // [自动静态注释] nn::os 事件等待/通知
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
code_r0x005b55a0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  cVar5 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
  if (bVar6) { // [自动静态注释] 条件判断/分支
    *pbVar1 = bVar7;
    cVar5 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
  } // [自动静态注释] 作用域/控制流边界
  if (cVar5 == '\0') goto LAB__text__005b5624; // [自动静态注释] 条件判断/分支
  goto LAB__text__005b5594; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
} // [自动静态注释] 作用域/控制流边界



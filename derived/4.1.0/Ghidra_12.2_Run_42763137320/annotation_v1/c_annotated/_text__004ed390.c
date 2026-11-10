/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003ED390
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ed390; name: FUN_.text__004ed390
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004ed390(long param_1,long param_2,int param_3,undefined4 param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        undefined8 *param_5) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort *puVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar15; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(int *)(param_2 + 0x60) != 0) { // [自动静态注释] 条件判断/分支
    puVar14 = *(ushort **)(param_2 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar1 = _DAT_008a5100 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      plVar12 = *(long **)(param_1 + 0x70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar9 = (uint)*puVar14; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (plVar12 != (long *)0x0) { // [自动静态注释] 条件判断/分支
        plVar10 = (long *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        do { // [自动静态注释] 循环/迭代
          while (((iVar7 = (**(code **)(*plVar12 + 0x10))(plVar12), iVar7 == 0 && // [自动静态注释] 循环/迭代
                  (plVar12[3] == *(long *)(param_2 + 0x50))) && (*(uint *)(plVar12 + 4) == uVar9))) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          { // [自动静态注释] 作用域/控制流边界
            if ((int)plVar12[2] <= param_3) goto LAB__text__004ed3f0; // [自动静态注释] 条件判断/分支
            plVar15 = (long *)plVar12[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            plVar3 = (long *)(param_1 + 0x70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            if (*(long **)(param_1 + 0x70) != plVar12) { // [自动静态注释] 条件判断/分支
              plVar3 = plVar10 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            } // [自动静态注释] 作用域/控制流边界
            *plVar3 = (long)plVar15;
            if (*(long **)(param_1 + 0x68) == plVar12) { // [自动静态注释] 条件判断/分支
              *(long **)(param_1 + 0x68) = plVar10;
            } // [自动静态注释] 作用域/控制流边界
            (**(code **)*plVar12)(plVar12); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            FUN__text__00400fc0(0,plVar12); // [自动静态注释] 调用尚未恢复正式名称的函数
            plVar12 = plVar15; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            if (plVar15 == (long *)0x0) goto LAB__text__004ed4c0; // [自动静态注释] 条件判断/分支
          } // [自动静态注释] 作用域/控制流边界
          plVar3 = plVar12 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          plVar10 = plVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          plVar12 = (long *)*plVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } while ((long *)*plVar3 != (long *)0x0); // [自动静态注释] 循环/迭代
      } // [自动静态注释] 作用域/控制流边界
LAB__text__004ed4c0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      lVar11 = *(long *)(param_2 + 0x50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar13 = *(long *)(param_1 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (lVar13 == 0) { // [自动静态注释] 条件判断/分支
        plVar12 = (long *)FUN__text__00400f80(0,0x38); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        do { // [自动静态注释] 循环/迭代
          if (((*(long *)(lVar13 + 0x80) == lVar11) && (*(uint *)(lVar13 + 0x88) == uVar9)) && // [自动静态注释] 条件判断/分支
             (((*(byte *)(lVar13 + 0x5a) & 0xe) == 0 && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              (uVar8 = FUN__text__004ec380(lVar13), (uVar8 & 1) == 0)))) goto LAB__text__004ed3f0; // [自动静态注释] 调用尚未恢复正式名称的函数
          lVar13 = *(long *)(lVar13 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } while (lVar13 != 0); // [自动静态注释] 循环/迭代
        lVar11 = *(long *)(param_2 + 0x50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        plVar12 = (long *)FUN__text__00400f80(0,0x38); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
      if (plVar12 != (long *)0x0) { // [自动静态注释] 条件判断/分支
        *(int *)(plVar12 + 2) = param_3;
        plVar12[3] = lVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(uint *)(plVar12 + 4) = uVar9;
        *plVar12 = lVar1;
        uVar4 = *(undefined4 *)(param_5 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined8 *)((long)plVar12 + 0x24) = *param_5;
        piVar2 = (int *)(lVar11 + 0x24); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined4 *)((long)plVar12 + 0x2c) = uVar4;
        *(undefined4 *)(plVar12 + 6) = param_4;
        do { // [自动静态注释] 循环/迭代
          cVar5 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
          if (bVar6) { // [自动静态注释] 条件判断/分支
            *piVar2 = *piVar2 + 1;
            cVar5 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
          } // [自动静态注释] 作用域/控制流边界
        } while (cVar5 != '\0'); // [自动静态注释] 循环/迭代
        FUN__text__004ed750(param_1 + 0x60,plVar12); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
LAB__text__004ed3f0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      puVar14 = puVar14 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (puVar14 != (ushort *)(*(long *)(param_2 + 0x58) + (ulong)*(uint *)(param_2 + 0x60) * 2) // [自动静态注释] 循环/迭代
            ); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003B4910
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004b4910; name: FUN_.text__004b4910
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN__text__004b4910(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int *piVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_84 [17]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar9 = *(undefined8 **)(param_1 + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((puVar9 == (undefined8 *)0x0) || // [自动静态注释] 条件判断/分支
     (uVar3 = *(uint *)(puVar9 + 1), uVar4 = *(uint *)(param_1 + 0x88), // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
     bVar11 = uVar4 > uVar3 || uVar3 == uVar4, uVar4 <= uVar3 && uVar3 != uVar4)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    return false; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  plVar12 = (long *)puVar9[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 0x38) = *puVar9;
  if (*(undefined8 **)(param_1 + 0x40) == puVar9) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(param_1 + 0x40) = 0;
  } // [自动静态注释] 作用域/控制流边界
  *puVar9 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 **)(param_1 + 0x48) = puVar9;
  local_84[0] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -1;
  plVar7 = (long *)plVar12[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(short *)((long)plVar7 + 0x34) != 0x403) { // [自动静态注释] 条件判断/分支
    if ((*(short *)((long)plVar7 + 0x34) != 0x503) || // [自动静态注释] 条件判断/分支
       (uVar8 = FUN__text__004b934c(), (uVar8 & 1) == 0)) goto LAB__text__004b49b4; // [自动静态注释] 调用尚未恢复正式名称的函数
    plVar7 = (long *)plVar12[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  (**(code **)(*plVar7 + 0x58))(plVar7,local_84); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
LAB__text__004b49b4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  (**(code **)(*(long *)plVar12[1] + 0x40))((long *)plVar12[1],plVar12); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  puVar9 = _DAT_008a45d8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((int)plVar12[6] != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__0048e190(*_DAT_008a45d8); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  plVar7 = (long *)plVar12[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  piVar1 = (int *)((long)plVar7 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    iVar2 = *piVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    cVar5 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar6) { // [自动静态注释] 条件判断/分支
      *piVar1 = iVar2 + -1;
      cVar5 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar5 != '\0'); // [自动静态注释] 循环/迭代
  if (iVar2 + -1 == 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*plVar7 + 0x20))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  (**(code **)(*plVar12 + 8))(plVar12); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__00400fc0(0,plVar12); // [自动静态注释] 调用尚未恢复正式名称的函数
  DAT_00aea808 = DAT_00aea808 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar10 = *(undefined8 **)(param_1 + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (puVar10 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    bVar11 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    do { // [自动静态注释] 循环/迭代
      if (*(uint *)(param_1 + 0x88) < *(uint *)(puVar10 + 1)) { // [自动静态注释] 条件判断/分支
        return bVar11; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      plVar12 = (long *)puVar10[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(param_1 + 0x38) = *puVar10;
      if (*(undefined8 **)(param_1 + 0x40) == puVar10) { // [自动静态注释] 条件判断/分支
        *(undefined8 *)(param_1 + 0x40) = 0;
      } // [自动静态注释] 作用域/控制流边界
      *puVar10 = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 **)(param_1 + 0x48) = puVar10;
      local_84[0] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -1;
      plVar7 = (long *)plVar12[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*(short *)((long)plVar7 + 0x34) == 0x403) { // [自动静态注释] 条件判断/分支
LAB__text__004b4aec: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        (**(code **)(*plVar7 + 0x58))(plVar7,local_84); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      else if ((*(short *)((long)plVar7 + 0x34) == 0x503) && // [自动静态注释] 条件判断/分支
              (uVar8 = FUN__text__004b934c(), (uVar8 & 1) != 0)) { // [自动静态注释] 调用尚未恢复正式名称的函数
        plVar7 = (long *)plVar12[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        goto LAB__text__004b4aec; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      (**(code **)(*(long *)plVar12[1] + 0x40))((long *)plVar12[1],plVar12); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if ((int)plVar12[6] != 0) { // [自动静态注释] 条件判断/分支
        FUN__text__0048e190(*puVar9); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
      plVar7 = (long *)plVar12[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      piVar1 = (int *)((long)plVar7 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        iVar2 = *piVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        cVar5 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
        if (bVar6) { // [自动静态注释] 条件判断/分支
          *piVar1 = iVar2 + -1;
          cVar5 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
        } // [自动静态注释] 作用域/控制流边界
      } while (cVar5 != '\0'); // [自动静态注释] 循环/迭代
      if (iVar2 + -1 == 0) { // [自动静态注释] 条件判断/分支
        (**(code **)(*plVar7 + 0x20))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      (**(code **)(*plVar12 + 8))(plVar12); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      FUN__text__00400fc0(0,plVar12); // [自动静态注释] 调用尚未恢复正式名称的函数
      DAT_00aea808 = DAT_00aea808 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar10 = *(undefined8 **)(param_1 + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (puVar10 != (undefined8 *)0x0); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return bVar11; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



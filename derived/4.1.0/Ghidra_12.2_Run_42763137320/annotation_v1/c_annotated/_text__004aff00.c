/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003AFF00
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004aff00; name: FUN_.text__004aff00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004aff00(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int *piVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_84 [17]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar6 = _DAT_008a45d8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar8 = (long *)*(long *)(param_1 + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    if (plVar8 == (long *)0x0) { // [自动静态注释] 条件判断/分支
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    plVar9 = (long *)plVar8[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_84[0] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar7 = (long *)plVar9[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(short *)((long)plVar7 + 0x34) == 0x403) { // [自动静态注释] 条件判断/分支
LAB__text__004aff80: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      (**(code **)(*plVar7 + 0x58))(plVar7,local_84); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    else if (*(short *)((long)plVar7 + 0x34) == 0x503) { // [自动静态注释] 条件判断/分支
      FUN__text__004b934c(); // [自动静态注释] 调用尚未恢复正式名称的函数
      plVar7 = (long *)plVar9[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      goto LAB__text__004aff80; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__0048e190(*puVar6,(int)plVar9[6]); // [自动静态注释] 调用尚未恢复正式名称的函数
    lVar3 = *(long *)(param_1 + 0x40); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar10 = (long *)*plVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar7 = (long *)(param_1 + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((long *)*(long *)(param_1 + 0x38) != plVar8) { // [自动静态注释] 条件判断/分支
      plVar7 = (long *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *plVar7 = (long)plVar10;
    if ((long *)lVar3 == plVar8) { // [自动静态注释] 条件判断/分支
      *(undefined8 *)(param_1 + 0x40) = 0;
    } // [自动静态注释] 作用域/控制流边界
    *plVar8 = *(undefined8 *)(param_1 + 0x48);
    *(long **)(param_1 + 0x48) = plVar8;
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -1;
    plVar8 = (long *)plVar9[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    piVar1 = (int *)((long)plVar8 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      iVar2 = *piVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
      if (bVar5) { // [自动静态注释] 条件判断/分支
        *piVar1 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
      } // [自动静态注释] 作用域/控制流边界
    } while (cVar4 != '\0'); // [自动静态注释] 循环/迭代
    if (iVar2 + -1 == 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*plVar8 + 0x20))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    (**(code **)(*plVar9 + 8))(plVar9); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__00400fc0(0,plVar9); // [自动静态注释] 调用尚未恢复正式名称的函数
    plVar8 = plVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while( true ); // [自动静态注释] 循环/迭代
} // [自动静态注释] 作用域/控制流边界



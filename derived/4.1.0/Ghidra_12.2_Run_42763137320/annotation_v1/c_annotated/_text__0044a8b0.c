/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0034A8B0
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0044a8b0; name: FUN_.text__0044a8b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0044a8b0(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar8 = (long *)param_1[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = _DAT_008a4b18 + 0x10;
  for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) { // [自动静态注释] 循环/迭代
    plVar5 = (long *)FUN__text__0044a9c0(plVar8 + 1); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (plVar5 != (long *)0x0) { // [自动静态注释] 条件判断/分支
      piVar9 = (int *)((long)plVar5 + 0x24); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      (**(code **)(*plVar5 + 0x40))(plVar5,param_1[1]); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      do { // [自动静态注释] 循环/迭代
        iVar1 = *piVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        cVar2 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
        if (bVar3) { // [自动静态注释] 条件判断/分支
          *piVar9 = iVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
        } // [自动静态注释] 作用域/控制流边界
      } while (cVar2 != '\0'); // [自动静态注释] 循环/迭代
      if (iVar1 + -1 == 0) { // [自动静态注释] 条件判断/分支
        (**(code **)(plVar5[2] + 0x20))(plVar5 + 2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00447a30(param_1 + 4); // [自动静态注释] 调用尚未恢复正式名称的函数
  *param_1 = 0x888888;
  if (param_1[2] == 0) { // [自动静态注释] 条件判断/分支
    lVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(long *)(param_1[2] + 0x18) = param_1[3];
    lVar6 = param_1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  piVar4 = _DAT_008a44c0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  piVar7 = (int *)param_1[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar8 = *(long **)(_DAT_008a44c0 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  piVar9 = _DAT_008a44c0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long **)(_DAT_008a44c0 + 4) != param_1) { // [自动静态注释] 条件判断/分支
    piVar9 = piVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(long *)(piVar9 + 4) = lVar6;
  if (plVar8 == param_1) { // [自动静态注释] 条件判断/分支
    *(int **)(piVar4 + 2) = piVar7;
  } // [自动静态注释] 作用域/控制流边界
  *piVar4 = *piVar4 + -1;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



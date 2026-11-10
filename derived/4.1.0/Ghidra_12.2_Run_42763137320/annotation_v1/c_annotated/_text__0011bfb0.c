/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0001BFB0
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 内存顺序控制, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0011bfb0; name: FUN_.text__0011bfb0
 */


void FUN__text__0011bfb0(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int *piVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *UNRECOVERED_JUMPTABLE; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar6 = *(long *)(param_1 + 0x90); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar6 != 0) { // [自动静态注释] 条件判断/分支
    if (*(int *)(lVar6 + 0x54) != 0) { // [自动静态注释] 条件判断/分支
      piVar1 = (int *)(lVar6 + 0x54); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      iVar7 = *(int *)(lVar6 + 0x54); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        plVar8 = *(long **)(lVar6 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        plVar5 = (long *)FUN__text__0011c0e8(); // [自动静态注释] 调用尚未恢复正式名称的函数
        if (plVar5 != plVar8) { // [自动静态注释] 条件判断/分支
          do { // [自动静态注释] 循环/迭代
            plVar8 = (long *)*plVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } while (plVar8 != plVar5 && plVar8 != (long *)0x0); // [自动静态注释] 循环/迭代
          if (plVar8 == (long *)0x0) break; // [自动静态注释] 条件判断/分支
        } // [自动静态注释] 作用域/控制流边界
        iVar2 = *piVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (iVar2 == iVar7) { // [自动静态注释] 条件判断/分支
          cVar3 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
          if (bVar4) { // [自动静态注释] 条件判断/分支
            *piVar1 = iVar7 + 1;
            cVar3 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
          } // [自动静态注释] 作用域/控制流边界
          if (cVar3 == '\0') { // [自动静态注释] 条件判断/分支
            plVar5 = *(long **)(lVar6 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            if (plVar5 != (long *)0x0) { // [自动静态注释] 条件判断/分支
              plVar5 = plVar5 + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              (**(code **)(*plVar5 + 0x38))(plVar5,param_1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            } // [自动静态注释] 作用域/控制流边界
            lVar6 = *(long *)(param_1 + 0x90); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *(undefined8 *)(param_1 + 0x90) = 0;
            goto joined_r0x0011c05c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          } // [自动静态注释] 作用域/控制流边界
        } // [自动静态注释] 作用域/控制流边界
        else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        iVar7 = iVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (iVar2 != 0); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    plVar5 = (long *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar6 = *(long *)(param_1 + 0x90); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_1 + 0x90) = 0;
joined_r0x0011c05c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (lVar6 != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    if (plVar5 != (long *)0x0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*plVar5 + 0x18))(plVar5); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    if (*(long *)(param_1 + 0x90) == 0) goto LAB__text__0011c098; // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(*(long *)(param_1 + 0x90) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)(param_1 + 0x90) = 0;
LAB__text__0011c098: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x0011c0bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1 + 0x30); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



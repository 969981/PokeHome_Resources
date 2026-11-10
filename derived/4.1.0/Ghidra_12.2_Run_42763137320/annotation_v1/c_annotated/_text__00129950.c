/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00029950
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00129950; name: FUN_.text__00129950
 */


void FUN__text__00129950(undefined8 *param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *pcVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar6 = *(long *)(param_2 + 0x88); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar6 != 0) { // [自动静态注释] 条件判断/分支
    lVar5 = *(long *)(param_2 + 0x80) + 0xb0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      pcVar3 = *(code **)(lVar5 + -0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (pcVar3 != (code *)0x0) { // [自动静态注释] 条件判断/分支
        *(undefined8 *)(lVar5 + -0x10) = 0;
        *(undefined8 *)(lVar5 + -8) = 0;
        *(undefined8 *)(lVar5 + -0x20) = 0;
        *(undefined8 *)(lVar5 + -0x18) = 0;
        (*pcVar3)(lVar5); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      pcVar3 = *(code **)(lVar5 + -0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (pcVar3 != (code *)0x0) { // [自动静态注释] 条件判断/分支
        *(undefined8 *)(lVar5 + -0x90) = 0;
        *(undefined8 *)(lVar5 + -0x88) = 0;
        *(undefined8 *)(lVar5 + -0xa0) = 0;
        *(undefined8 *)(lVar5 + -0x98) = 0;
        (*pcVar3)(lVar5 + -0x80); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      lVar6 = lVar6 + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar5 = lVar5 + 0x110; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (lVar6 != 0); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  if (*(long *)(param_2 + 0x90) != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(**(long **)(param_2 + 0x40) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              (*(long **)(param_2 + 0x40),*(undefined8 *)(param_2 + 0x80), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
               *(long *)(param_2 + 0x90) * 0x110,0x10);
  } // [自动静态注释] 作用域/控制流边界
  plVar1 = *(long **)(param_2 + 0x70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2 = (long *)(param_2 + 0x50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar1 == plVar2) { // [自动静态注释] 条件判断/分支
    puVar4 = (undefined8 *)(*plVar2 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__00129a14: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    (*(code *)*puVar4)(plVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  else if (plVar1 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    puVar4 = (undefined8 *)(*plVar1 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar2 = plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    goto LAB__text__00129a14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  plVar1 = *(long **)(param_2 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2 = (long *)(param_2 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar1 == plVar2) { // [自动静态注释] 条件判断/分支
    puVar4 = (undefined8 *)(*plVar2 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (plVar1 == (long *)0x0) goto LAB__text__00129a50; // [自动静态注释] 条件判断/分支
    puVar4 = (undefined8 *)(*plVar1 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar2 = plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  (*(code *)*puVar4)(plVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
LAB__text__00129a50: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    /* WARNING: Could not recover jumptable at 0x00129a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_2,param_1[1],param_1[2]); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



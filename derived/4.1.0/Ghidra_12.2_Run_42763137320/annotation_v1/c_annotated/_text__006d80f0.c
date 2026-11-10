/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005D80F0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006d80f0; name: FUN_.text__006d80f0
 */


void FUN__text__006d80f0(long param_1,long param_2,uint param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_2 != 0) { // [自动静态注释] 条件判断/分支
    plVar2 = (long *)(param_1 + 0x188); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((param_3 & 1) == 0) { // [自动静态注释] 条件判断/分支
      for (plVar2 = (long *)*plVar2; plVar2 != (long *)(param_1 + 0x180); plVar2 = (long *)plVar2[1] // [自动静态注释] 循环/迭代
          ) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        if (plVar2[-2] == param_2) { // [自动静态注释] 条件判断/分支
          plVar1 = plVar2 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          lVar3 = *plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined4 *)(plVar2 + -3) = *(undefined4 *)(param_1 + 0x1a0);
          *plVar1 = *(long *)(param_1 + 400);
          *(long *)(lVar3 + 8) = param_1 + 400;
          *(long **)(*(long *)(param_1 + 400) + 8) = plVar1;
          *(long *)(param_1 + 400) = lVar3;
          return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      while (plVar1 = (long *)*plVar2, plVar1 != (long *)(param_1 + 0x180)) { // [自动静态注释] 循环/迭代
        plVar2 = plVar1 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (plVar1[-2] == param_2) { // [自动静态注释] 条件判断/分支
          plVar1[-2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(long *)(param_1 + 0x1b8) = *(long *)(param_1 + 0x1b8) - plVar1[-1];
          plVar2 = (long *)plVar1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          lVar3 = *plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(long **)(*plVar1 + 8) = plVar2;
          *plVar2 = *plVar1;
          *(long **)(lVar3 + 8) = plVar1;
          *plVar1 = lVar3;
          *(long **)(param_1 + 0x1d0) = plVar1 + -3;
          *(int *)(param_1 + 0x1b0) = *(int *)(param_1 + 0x1b0) + -1;
          return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



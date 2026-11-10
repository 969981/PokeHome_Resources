/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00331EB0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00431eb0; name: FUN_.text__00431eb0
 */


undefined8 FUN__text__00431eb0(long param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar2 = *(long **)(param_1 + 0x40); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar2 == (long *)0x0) { // [自动静态注释] 条件判断/分支
    return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  plVar4 = (long *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    while (plVar1 = (long *)*plVar2, plVar2[1] != param_2) { // [自动静态注释] 循环/迭代
joined_r0x00431f80: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      plVar4 = plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar2 = plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (plVar1 == (long *)0x0) { // [自动静态注释] 条件判断/分支
        return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    plVar3 = (long *)(param_1 + 0x40); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long **)(param_1 + 0x40) != plVar2) { // [自动静态注释] 条件判断/分支
      plVar3 = plVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *plVar3 = (long)plVar1;
    if (*(long **)(param_1 + 0x48) == plVar2) { // [自动静态注释] 条件判断/分支
      *(long **)(param_1 + 0x48) = plVar4;
      plVar3 = *(long **)(param_1 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      plVar3 = *(long **)(param_1 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    if ((plVar2 < plVar3) || (plVar3 + (ulong)*(uint *)(param_1 + 0x60) * 4 <= plVar2)) { // [自动静态注释] 条件判断/分支
      FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + -1;
      plVar2 = plVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      goto joined_r0x00431f80; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    *plVar2 = *(long *)(param_1 + 0x50);
    *(long **)(param_1 + 0x50) = plVar2;
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + -1;
    plVar2 = plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (plVar1 == (long *)0x0) { // [自动静态注释] 条件判断/分支
      return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } while( true ); // [自动静态注释] 循环/迭代
} // [自动静态注释] 作用域/控制流边界



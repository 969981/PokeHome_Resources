/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00553F90
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00653f90; name: FUN_.text__00653f90
 */


undefined8 FUN__text__00653f90(long *param_1,undefined8 param_2,undefined8 param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar3 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = (*(code *)param_1[1])(param_2,param_3,(long)(int)param_1[4]); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar1 = (long *)(lVar3 + lVar2 * 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar4 = (long *)*plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while( true ) { // [自动静态注释] 循环/迭代
    if (plVar4 == (long *)0x0) { // [自动静态注释] 条件判断/分支
      return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    lVar3 = (*(code *)param_1[2])(*plVar4 + 0x28,*(undefined8 *)(*plVar4 + 0x20),param_2,param_3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar3 != 0) break; // [自动静态注释] 条件判断/分支
    plVar4 = (long *)plVar4[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00656b90(plVar1,plVar4,param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[5] = param_1[5] + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



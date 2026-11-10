/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003E0794
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e0794; name: FUN_.text__004e0794
 */


undefined4 FUN__text__004e0794(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar3 = *(long **)(param_1 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar3 == (long *)0x0) { // [自动静态注释] 条件判断/分支
    return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if (*(int *)(param_1 + 0x50) == 0) { // [自动静态注释] 条件判断/分支
    iVar1 = 0x3c; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    iVar1 = FUN__text__004e0840(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    iVar1 = iVar1 + 0x3c; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar3 = *(long **)(param_1 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 4) = iVar1 + *(int *)(param_1 + 0x5c);
  uVar2 = (**(code **)(*plVar3 + 8))(plVar3,param_1,0x44); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (**(code **)(**(long **)(param_1 + 0x60) + 0x20))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined8 *)(param_1 + 0x60) = 0;
  FUN__text__004e0720(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00400fc0(0,param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



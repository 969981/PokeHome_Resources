/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00305640
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00405640; name: FUN_.text__00405640
 */


long FUN__text__00405640(undefined8 param_1,long param_2,long param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_28 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_3 == 1) { // [自动静态注释] 条件判断/分支
    FUN__text__00404130(param_1,param_2,&local_28); // [自动静态注释] 调用尚未恢复正式名称的函数
    return local_28; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00404130(param_1,param_2,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_2 = param_2 + param_3 * 0x108; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = *(long *)(param_2 + 0xb18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar2 == 0) { // [自动静态注释] 条件判断/分支
    return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  plVar1 = (long *)(param_2 + 0xb18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *plVar1 = lVar2 + -1;
  return plVar1[lVar2]; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



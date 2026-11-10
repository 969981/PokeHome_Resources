/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005BBAC8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006bbac8; name: FUN_.text__006bbac8
 */


long * FUN__text__006bbac8(long *param_1,undefined8 param_2,undefined8 param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_18 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar1 = (**(code **)(*param_1 + 0x40))(param_1,&local_18,0x666f6e74,param_3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar3 = (long *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((lVar1 != 0 && local_18 != 0) && // [自动静态注释] 条件判断/分支
     (plVar3 = (long *)FUN__text__006a0f04(0x108), plVar3 != (long *)0x0)) { // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__0068be7c(plVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar2 = FUN__text__0068bf14(plVar3,param_2,lVar1,0,0,0); // [自动静态注释] 调用尚未恢复正式名称的函数
    if ((uVar2 & 1) == 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*plVar3 + 8))(plVar3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      FUN__text__006a0f24(plVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
      plVar3 = (long *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return plVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



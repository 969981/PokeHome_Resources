/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00586934
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00686934; name: FUN_.text__00686934
 */


undefined8 FUN__text__00686934(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  iVar1 = FUN__text__00684b44(param_3,param_4); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (iVar1 == 0) { // [自动静态注释] 条件判断/分支
    uVar2 = 0xfffffffffffffe0b; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if ((ulong)(param_4 * 6) <= param_2) { // [自动静态注释] 条件判断/分支
      uVar2 = FUN__text__0068434c(param_1,param_3,param_4); // [自动静态注释] 调用尚未恢复正式名称的函数
      return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    uVar2 = 0xfffffffffffffdf3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



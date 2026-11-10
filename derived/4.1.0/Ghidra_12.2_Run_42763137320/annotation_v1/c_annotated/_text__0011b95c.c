/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0001B95C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0011b95c; name: FUN_.text__0011b95c
 */


undefined1  [16] FUN__text__0011b95c(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined1 auVar1 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_20; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(char *)(param_1 + 0x50) == '\0') { // [自动静态注释] 条件判断/分支
    return ZEXT816(0); // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  local_20 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_18 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar2 = nn::account::GetUserId((Uid *)&local_20,(UserHandle *)(param_1 + 0x58)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (iVar2 == 0) { // [自动静态注释] 条件判断/分支
    auVar1._8_8_ = uStack_18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    auVar1._0_8_ = local_20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    return auVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  return ZEXT816(0); // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



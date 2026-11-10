/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003A153C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004a153c; name: FUN_.text__004a153c
 */


bool FUN__text__004a153c(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(long *)(param_1 + 0x10) != 0) { // [自动静态注释] 条件判断/分支
    return *(long *)(param_1 + 0x10) != 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  puVar1 = (undefined8 *)FUN__text__00400f80(2,0x20); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (puVar1 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(param_1 + 0x10) = 0;
    return false; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  puVar1[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *puVar1 = 0;
  puVar1[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 **)(param_1 + 0x10) = puVar1;
  lVar2 = FUN__text__00466bd4(param_1 + -0x28); // [自动静态注释] 调用尚未恢复正式名称的函数
  return lVar2 != 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



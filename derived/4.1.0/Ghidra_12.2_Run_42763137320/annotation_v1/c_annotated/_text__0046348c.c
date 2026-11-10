/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0036348C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0046348c; name: FUN_.text__0046348c
 */


undefined8 FUN__text__0046348c(long param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uStack_31; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  iVar1 = *(int *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2 = (long *)FUN__text__0046b2d0(param_1,*(undefined8 *)(param_2 + 0x318), // [自动静态注释] 调用尚未恢复正式名称的函数
                                       *(undefined4 *)(param_2 + 800),&uStack_31);
  if (plVar2 == (long *)0x0) { // [自动静态注释] 条件判断/分支
    return 2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if (iVar1 == 0) { // [自动静态注释] 条件判断/分支
    FUN__text__00472874(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *plVar2 = param_2;
  *(short *)(param_1 + 0x28) = *(short *)(param_1 + 0x28) + 1;
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



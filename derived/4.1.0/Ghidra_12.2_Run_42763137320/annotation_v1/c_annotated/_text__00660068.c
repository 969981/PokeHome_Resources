/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00560068
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00660068; name: FUN_.text__00660068
 */


undefined4 FUN__text__00660068(undefined8 *param_1,undefined8 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined4 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *__s; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  size_t sVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_f0 [128]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar3 = (undefined8 *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  __s = (char *)FUN__text__00659bb0(param_2,auStack_f0 + 0x80); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (__s == (char *)0x0) { // [自动静态注释] 条件判断/分支
    FUN__text__006783e4(*puVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__006783e4(puVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
    *param_1 = 0;
    uVar1 = 0x1b; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    sVar2 = strlen(__s); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = FUN__text__00660138(param_1,__s,sVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__006783e4(__s); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  return uVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



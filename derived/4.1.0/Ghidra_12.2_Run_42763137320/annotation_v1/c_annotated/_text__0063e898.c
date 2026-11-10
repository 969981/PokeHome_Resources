/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0053E898
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0063e898; name: FUN_.text__0063e898
 */


undefined2 FUN__text__0063e898(undefined8 param_1,undefined4 param_2,undefined4 param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int *piVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  piVar1 = (int *)FUN__text__0063f468(param_2,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x13) || // [自动静态注释] 条件判断/分支
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[9], uVar2 == 0)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  return *(undefined2 *)((long)piVar1 + uVar2); // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



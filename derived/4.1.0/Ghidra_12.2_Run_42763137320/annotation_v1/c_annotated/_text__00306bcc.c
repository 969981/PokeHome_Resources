/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00206BCC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00306bcc; name: FUN_.text__00306bcc
 */


byte FUN__text__00306bcc(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  short sVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  iVar2 = FUN__text__00631008(*(undefined8 *)(param_1 + 0x58)); // [自动静态注释] 调用尚未恢复正式名称的函数
  sVar1 = FUN__text__00631010(*(undefined8 *)(param_1 + 0x58)); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((iVar2 == 0x19 && sVar1 == 8) || ((bVar3 = 0, iVar2 == 0x85 && (sVar1 == 1)))) { // [自动静态注释] 条件判断/分支
    bVar3 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return ((iVar2 == 0x286 || iVar2 == 0x382) && (ushort)(sVar1 - 1U) < 2 || // [自动静态注释] 返回表达式；具体返回语义取决于调用者
         iVar2 == 800 && (ushort)(sVar1 - 1U) < 3) | bVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
} // [自动静态注释] 作用域/控制流边界



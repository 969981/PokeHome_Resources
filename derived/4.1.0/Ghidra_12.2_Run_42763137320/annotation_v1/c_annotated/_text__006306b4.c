/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：HOME_EH4_CRC_CheckedDecrypt
 * 用途/行为：计算 EH4 密文 CRC、执行 AES-CBC 解密、比较 CRC 并置错误标志
 * 证据等级：VERIFIED_NATIVE_STATIC；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006306b4; name: FUN_.text__006306b4
 */


void FUN__text__006306b4(undefined8 param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_40 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__0060e784(auStack_40,param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar3 = FUN__text__0060e7e4(auStack_40); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar4 = FUN__text__0060e7f8(auStack_40); // [自动静态注释] 调用尚未恢复正式名称的函数
  iVar1 = *(int *)(lVar3 + 10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar2 = FUN__text__00630120(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__0063041c(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (iVar1 != iVar2) { // [自动静态注释] 条件判断/分支
    *(undefined1 *)(lVar4 + 0xc) = 1;
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__0060e79c(auStack_40); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



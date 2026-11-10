/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0019DD80
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0029dd80; name: FUN_.text__0029dd80
 */


uint FUN__text__0029dd80(long param_1,undefined8 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_5a [26]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar3 = FUN__text__00632ee0(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  cVar2 = *(char *)(param_1 + 0xb8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar1 = *(int *)(param_1 + 0xb0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar4 = FUN__text__00634570(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((iVar1 == iVar4) && (uVar5 = FUN__text__00633af8(param_2), uVar5 == (cVar2 == '\0'))) { // [自动静态注释] 条件判断/分支
    FUN__text__00633af0(param_2,auStack_5a,0xd); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar5 = FUN__text__005f3560(auStack_5a,param_1 + 0x94); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar5 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__006331e0(param_2,uVar3 & 1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return uVar5 & 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



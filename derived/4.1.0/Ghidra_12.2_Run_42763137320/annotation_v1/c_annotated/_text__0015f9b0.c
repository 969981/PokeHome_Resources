/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0005F9B0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0015f9b0; name: FUN_.text__0015f9b0
 */


byte FUN__text__0015f9b0(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  bool bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  bVar2 = FUN__text__001623fc(param_1 + 0x270); // [自动静态注释] 调用尚未恢复正式名称的函数
  bVar3 = FUN__text__001623fc(param_1 + 0x3a0); // [自动静态注释] 调用尚未恢复正式名称的函数
  bVar4 = FUN__text__001623fc(param_1 + 0x4d0); // [自动静态注释] 调用尚未恢复正式名称的函数
  bVar5 = FUN__text__001623fc(param_1 + 0x600); // [自动静态注释] 调用尚未恢复正式名称的函数
  bVar6 = FUN__text__001623fc(param_1 + 0x730); // [自动静态注释] 调用尚未恢复正式名称的函数
  bVar7 = FUN__text__001623fc(param_1 + 0x860); // [自动静态注释] 调用尚未恢复正式名称的函数
  bVar8 = FUN__text__001623fc(param_1 + 0x990); // [自动静态注释] 调用尚未恢复正式名称的函数
  bVar1 = false; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(param_1 + 0xb18) != 0) { // [自动静态注释] 条件判断/分支
    bVar1 = *(char *)(*(long *)(param_1 + 0xb18) + 0x170) != '\0'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return bVar2 & bVar3 & bVar4 & bVar5 & bVar6 & bVar7 & bVar8 & bVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



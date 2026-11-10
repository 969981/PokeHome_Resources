/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0057FED8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0067fed8; name: FUN_.text__0067fed8
 */


int FUN__text__0067fed8(undefined8 param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  iVar2 = FUN__text__0067ff28(); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (iVar2 == 0) { // [自动静态注释] 条件判断/分支
    lVar3 = FUN__text__00680914(param_1,1); // [自动静态注释] 调用尚未恢复正式名称的函数
    lVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(int *)(lVar3 + 0xdc) != 5) { // [自动静态注释] 条件判断/分支
      lVar1 = lVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *(ushort *)(lVar1 + 0xe2) = *(ushort *)(lVar1 + 0xe2) | 0x400;
  } // [自动静态注释] 作用域/控制流边界
  return iVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



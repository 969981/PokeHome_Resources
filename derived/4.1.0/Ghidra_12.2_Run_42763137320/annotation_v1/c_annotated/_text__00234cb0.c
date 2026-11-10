/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00134CB0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00234cb0; name: FUN_.text__00234cb0
 */


undefined8 FUN__text__00234cb0(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar3 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__00128ca0(lVar3,1,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  iVar2 = FUN__text__0022cc88(*(undefined8 *)(lVar3 + 0x650)); // [自动静态注释] 调用尚未恢复正式名称的函数
  iVar1 = *(int *)(*(long *)(lVar3 + 0x640) + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (0 < iVar1 != (*(char *)(*(long *)(lVar3 + 0x7f8) + 0x15a) != '\0')) { // [自动静态注释] 条件判断/分支
    *(bool *)(*(long *)(lVar3 + 0x7f8) + 0x15a) = 0 < iVar1;
    FUN__text__003a14e8(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  if (iVar1 + 1 < iVar2 != (*(char *)(*(long *)(lVar3 + 0x800) + 0x15a) != '\0')) { // [自动静态注释] 条件判断/分支
    *(bool *)(*(long *)(lVar3 + 0x800) + 0x15a) = iVar1 + 1 < iVar2;
    FUN__text__003a14e8(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00232c90(lVar3,0,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__0012c300(lVar3 + 0x110,0x71cdcf); // [自动静态注释] 调用尚未恢复正式名称的函数
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



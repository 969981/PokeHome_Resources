/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0014248C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0024248c; name: FUN_.text__0024248c
 */


void FUN__text__0024248c(long *param_1,uint *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar4 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar1 = lVar4 + (ulong)*param_2 * 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar3 = *(long *)(lVar4 + 0x88); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = *(undefined8 *)(lVar1 + 0x108); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(lVar3 + 0x6e0) = *(undefined8 *)(lVar1 + 0x110);
  *(undefined8 *)(lVar3 + 0x6d8) = uVar2;
  FUN__text__002438c0(*(undefined8 *)(lVar4 + 0x88),0,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00243e6c(*(undefined8 *)(lVar4 + 0x88)); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00243e90(*(undefined8 *)(lVar4 + 0x88)); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00245f30(*(undefined8 *)(lVar4 + 0x88)); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__002449bc(*(undefined8 *)(lVar4 + 0x88)); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined4 *)(lVar4 + 0x78) = 0;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



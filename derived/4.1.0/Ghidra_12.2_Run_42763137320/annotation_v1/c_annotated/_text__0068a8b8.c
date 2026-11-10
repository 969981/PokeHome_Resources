/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0058A8B8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0068a8b8; name: FUN_.text__0068a8b8
 */


void FUN__text__0068a8b8(float param_1,float param_2,long param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  iVar1 = (**(code **)(**(long **)(param_3 + 0x28) + 0x20))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar2 = (**(code **)(**(long **)(param_3 + 0x28) + 0x28))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(float *)(param_3 + 0xc) = param_1 / (float)iVar1;
  *(float *)(param_3 + 0x10) = param_2 / (float)iVar2;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00382630
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00482630; name: FUN_.text__00482630
 */


void FUN__text__00482630(float param_1,float param_2,undefined8 param_3,ulong param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  char cVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  cVar1 = *(char *)((param_4 & 0xffffffff) + 0x73b748); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar2 = cosf(param_2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar3 = sinf(param_1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar4 = sinf(param_2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar5 = cosf(param_1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__00481ed0(fVar2 * fVar3,fVar4,fVar2 * fVar5,cVar1 + 1,1,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0043DE4C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0053de4c; name: FUN_.text__0053de4c
 */


float FUN__text__0053de4c(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar1 = **(long **)(param_1 + 0x10) * 0x5851f42d4c957f2d + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  **(long **)(param_1 + 0x10) = lVar1;
  lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 8) * 0x5851f42d4c957f2d + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar5 = (float)(uint)((ulong)lVar1 >> 0x21) * *(float *)(param_1 + 8) * 4.656613e-10 + -1.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(*(long *)(param_1 + 0x10) + 8) = lVar2;
  fVar4 = *(float *)(param_1 + 0xc) * 4.656613e-10 * (float)(uint)((ulong)lVar2 >> 0x21); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar6 = SQRT(1.0 - fVar5 * fVar5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar3 = cosf(fVar4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar4 = sinf(fVar4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return (fVar4 * fVar6 * *(float *)(param_1 + 0x24) - *(float *)(param_1 + 0x30) * fVar5) + // [自动静态注释] 返回表达式；具体返回语义取决于调用者
         *(float *)(param_1 + 0x18) * fVar3 * fVar6;
} // [自动静态注释] 作用域/控制流边界



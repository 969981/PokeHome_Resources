/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0041DA68
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0051da68; name: FUN_.text__0051da68
 */


float FUN__text__0051da68(long param_1,double *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar1 = *(long *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar5 = *(float *)(lVar1 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar6 = *(float *)(lVar1 + 0x1c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar3 = (float)(param_2[1] - *(double *)(lVar1 + 0x28)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar2 = (float)(*param_2 - *(double *)(lVar1 + 0x20)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar4 = (float)(param_2[2] - *(double *)(lVar1 + 0x30)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar7 = fVar5 * fVar2 - *(float *)(lVar1 + 0x14) * fVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar3 = fVar6 * fVar3 - fVar5 * fVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar4 = *(float *)(lVar1 + 0x14) * fVar4 - fVar6 * fVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return ((fVar2 - fVar5 * (fVar7 + fVar7)) + *(float *)(lVar1 + 0x10) * (fVar3 + fVar3) + // [自动静态注释] 返回表达式；具体返回语义取决于调用者
         fVar6 * (fVar4 + fVar4)) / *(float *)(lVar1 + 0x38); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
} // [自动静态注释] 作用域/控制流边界



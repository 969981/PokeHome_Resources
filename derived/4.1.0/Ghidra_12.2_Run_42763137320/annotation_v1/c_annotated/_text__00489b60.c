/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00389B60
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00489b60; name: FUN_.text__00489b60
 */


void FUN__text__00489b60(float *param_1,float *param_2,float *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  float fVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__00489c90(param_1 + 6); // [自动静态注释] 调用尚未恢复正式名称的函数
  fVar3 = param_1[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar4 = param_1[5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar5 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar1 = param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar2 = param_1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar7 = param_1[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar6 = fVar2 * fVar3 - fVar1 * fVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar8 = fVar5 * fVar4 - fVar7 * fVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar9 = fVar7 * fVar1 - fVar5 * fVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_3 = *param_2 * fVar6 + param_2[1] * fVar8 + fVar9 * param_2[2];
  param_3[1] = param_2[3] * fVar6 + fVar8 * param_2[4] + fVar9 * param_2[5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_3[2] = param_2[6] * fVar6 + fVar8 * param_2[7] + fVar9 * param_2[8]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_3[3] = *param_2 * fVar7 + fVar3 * param_2[1] + fVar4 * param_2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_3[4] = param_2[3] * fVar7 + fVar3 * param_2[4] + fVar4 * param_2[5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_3[5] = param_2[6] * fVar7 + fVar3 * param_2[7] + fVar4 * param_2[8]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_3[6] = *param_2 * fVar5 + fVar1 * param_2[1] + fVar2 * param_2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_3[7] = param_2[3] * fVar5 + fVar1 * param_2[4] + fVar2 * param_2[5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_3[8] = param_2[6] * fVar5 + fVar1 * param_2[7] + fVar2 * param_2[8]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



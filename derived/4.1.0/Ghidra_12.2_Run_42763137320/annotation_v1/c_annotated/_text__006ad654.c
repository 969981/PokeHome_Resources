/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005AD654
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006ad654; name: FUN_.text__006ad654
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006ad654(float *param_1,float *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  float *pfVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  fVar3 = (float)NEON_ucvtf(*_DAT_008a1d20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar5 = param_2[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = (ulong)(param_2[2] * (fVar3 / *_DAT_008a02d0)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pfVar1 = (float *)(_DAT_008a1d28 + (uVar2 >> 0x18 & 0xff) * 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar3 = (float)((uint)uVar2 & 0xffffff) * 5.9604645e-08; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar4 = pfVar1[1] + fVar3 * pfVar1[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar3 = *pfVar1 + fVar3 * pfVar1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar6 = param_2[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = fVar5 * fVar3;
  param_1[1] = -(fVar4 * fVar6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[2] = *param_2 + 0.5 + fVar5 * fVar3 * -0.5 + -(fVar4 * fVar6) * -0.5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar5 = param_2[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar6 = param_2[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar8 = fVar3 * fVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar7 = fVar4 * fVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[3] = fVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[4] = fVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar9 = param_2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[3] = -(fVar4 * fVar5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[4] = -(fVar3 * fVar6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[5] = 1.0 - (fVar9 + 0.5 + fVar7 * -0.5 + fVar8 * -0.5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



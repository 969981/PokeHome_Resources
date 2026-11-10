/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0047D1A8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0057d1a8; name: FUN_.text__0057d1a8
 */


void FUN__text__0057d1a8(float param_1,float param_2,uint *param_3,uint param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  double dVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  dVar3 = (double)NEON_ucvtf((ulong)param_3[0x12]); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar1 = 1.0 - (double)param_2 * (double)param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar2 = (dVar3 * -1.7269388197455346) / ((double)param_4 * (double)param_1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (1.0 < dVar2 * dVar1) { // [自动静态注释] 条件判断/分支
    dVar1 = 1.0 / dVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  dVar4 = 1.0 / ((double)param_4 * (double)param_1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar2 = (double)NEON_ucvtf((ulong)*param_3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar2 = dVar2 * -3.0 * dVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar5 = 0.5756462732485116 - // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          (double)(float)SQRT(1.0 - dVar1) * (double)(float)SQRT(1.0 - dVar1) * 0.5756462732485116; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  dVar6 = (double)NEON_fminnm(dVar5 * dVar2,0x3feff7ced916872b); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar1 = exp2(dVar2 * 3.321928094887362); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar2 = (double)NEON_ucvtf((ulong)param_3[6]); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_3[0x19] = (uint)(float)(dVar1 - dVar1 * dVar6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_3[0x1a] = (uint)-(float)dVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar1 = dVar2 * -3.0 * dVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar6 = (double)NEON_fminnm(dVar5 * dVar1,0x3feff7ced916872b); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar1 = exp2(dVar1 * 3.321928094887362); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar2 = (double)NEON_ucvtf((ulong)param_3[0xc]); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_3[0x1c] = (uint)(float)(dVar1 - dVar1 * dVar6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_3[0x1d] = (uint)-(float)dVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar1 = dVar2 * -3.0 * dVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar2 = (double)NEON_fminnm(dVar5 * dVar1,0x3feff7ced916872b); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar1 = exp2(dVar1 * 3.321928094887362); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_3[0x1f] = (uint)(float)(dVar1 - dVar1 * dVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_3[0x20] = (uint)-(float)dVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar4 = dVar3 * -3.0 * dVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar2 = (double)NEON_fminnm(dVar5 * dVar4,0x3feff7ced916872b); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar1 = exp2(dVar4 * 3.321928094887362); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_3[0x22] = (uint)(float)(dVar1 - dVar1 * dVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_3[0x23] = (uint)-(float)dVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



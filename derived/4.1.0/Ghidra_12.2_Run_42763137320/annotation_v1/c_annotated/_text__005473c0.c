/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004473C0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005473c0; name: FUN_.text__005473c0
 */


bool FUN__text__005473c0(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  float fVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  fVar1 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar2 = param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar4 = param_1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar3 = *param_2 * fVar1 + fVar2 * param_2[1] + fVar4 * param_2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar5 = *param_3 * fVar1 + fVar2 * param_3[1] + fVar4 * param_3[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar6 = *param_4 * fVar1 + fVar2 * param_4[1] + fVar4 * param_4[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar7 = NEON_fminnm(fVar5,fVar6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (fVar5 <= fVar6) { // [自动静态注释] 条件判断/分支
    fVar5 = fVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  fVar6 = (float)NEON_fminnm(fVar3,uVar7); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (fVar3 <= fVar5) { // [自动静态注释] 条件判断/分支
    fVar3 = fVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  fVar5 = *param_5 * ABS(fVar1) + ABS(fVar2) * param_5[1] + ABS(fVar4) * param_5[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return -fVar5 <= fVar3 && fVar6 <= fVar5; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



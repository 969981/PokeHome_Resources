/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004170C0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005170c0; name: FUN_.text__005170c0
 */


bool FUN__text__005170c0(long param_1,float *param_2,float *param_3,float *param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

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
  float fVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar15; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar16; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar17; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  fVar3 = *(float *)(param_1 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar2 = *(float *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar4 = *(float *)(param_1 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar8 = *(float *)(param_1 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar9 = *(float *)(param_1 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar10 = *(float *)(param_1 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar1 = fVar8 * (*param_2 - fVar3) + (param_2[1] - fVar2) * fVar9 + (param_2[2] - fVar4) * fVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar11 = fVar8 * (*param_3 - fVar3) + (param_3[1] - fVar2) * fVar9 + (param_3[2] - fVar4) * fVar10 // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  ; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  fVar5 = fVar3 + fVar8 * fVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar15 = *param_2 - fVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar6 = fVar2 + fVar9 * fVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar13 = *param_3 - (fVar3 + fVar8 * fVar11); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar16 = param_2[1] - fVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar7 = fVar4 + fVar10 * fVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar14 = param_3[1] - (fVar2 + fVar9 * fVar11); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar12 = param_2[2] - fVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar17 = param_3[2] - (fVar4 + fVar10 * fVar11); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar12 = SQRT(fVar15 * fVar15 + fVar16 * fVar16 + fVar12 * fVar12); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar14 = SQRT(fVar13 * fVar13 + fVar14 * fVar14 + fVar17 * fVar17); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar13 = fVar12 + fVar14; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (0.0 < fVar13) { // [自动静态注释] 条件判断/分支
    fVar1 = (fVar14 * fVar1 + fVar11 * fVar12) / fVar13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar5 = fVar3 + fVar8 * fVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar6 = fVar2 + fVar9 * fVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar7 = fVar4 + fVar10 * fVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *param_4 = fVar5;
  param_4[1] = fVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_4[2] = fVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return fVar1 <= *(float *)(param_1 + 0x50) && 0.0 <= fVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



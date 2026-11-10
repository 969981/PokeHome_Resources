/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0043E8C4
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0053e8c4; name: FUN_.text__0053e8c4
 */


void FUN__text__0053e8c4(long param_1,float *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  float fVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auVar8 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar15; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar16; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  fVar10 = param_2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar11 = param_2[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar3 = (float)(*(double *)(param_1 + 0xd8) - *(double *)(param_2 + 6)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar15 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar14 = param_2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar1 = (float)(*(double *)(param_1 + 0xd0) - *(double *)(param_2 + 4)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar7 = param_2[10]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar9 = param_2[0xb]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar5 = (float)(*(double *)(param_1 + 0xe0) - *(double *)(param_2 + 8)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar16 = fVar10 * fVar1 - fVar14 * fVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar12 = fVar11 * fVar3 - fVar10 * fVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar13 = fVar14 * fVar5 - fVar11 * fVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar16 = fVar16 + fVar16; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar12 = fVar12 + fVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar13 = fVar13 + fVar13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  auVar8 = NEON_fmov(0x3f800000,4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar6 = *(float *)(param_1 + 0xf0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar2 = *(float *)(param_1 + 0xe8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar4 = *(float *)(param_1 + 0xec); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(float *)(param_1 + 0x108) =
       ((fVar5 + fVar15 * fVar16 + fVar10 * fVar12) - fVar14 * fVar13) / param_2[0xc]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(int *)(param_1 + 0x10c) = auVar8._12_4_;
  *(float *)(param_1 + 0x100) =
       ((fVar1 - fVar10 * fVar16) + fVar15 * fVar12 + fVar11 * fVar13) / fVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(float *)(param_1 + 0x104) =
       ((fVar3 + fVar14 * fVar16 + fVar15 * fVar13) - fVar11 * fVar12) / fVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  fVar5 = param_2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar7 = param_2[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar12 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar11 = param_2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar10 = fVar11 * fVar6 - fVar7 * fVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar13 = fVar5 * fVar2 - fVar11 * fVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar9 = fVar7 * fVar4 - fVar5 * fVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar10 = fVar10 + fVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar1 = param_2[10]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar3 = param_2[0xb]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar13 = fVar13 + fVar13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar9 = fVar9 + fVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(ulong *)(param_1 + 0x118) =
       (ulong)(uint)(((fVar6 + fVar12 * fVar13 + fVar5 * fVar9) - fVar11 * fVar10) / param_2[0xc]); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(ulong *)(param_1 + 0x110) =
       CONCAT44(((fVar4 + fVar11 * fVar13 + fVar12 * fVar10) - fVar7 * fVar9) / fVar3, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                ((fVar2 - fVar5 * fVar13) + fVar12 * fVar9 + fVar7 * fVar10) / fVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



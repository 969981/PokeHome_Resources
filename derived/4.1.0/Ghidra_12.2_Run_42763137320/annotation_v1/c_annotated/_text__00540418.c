/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00440418
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00540418; name: FUN_.text__00540418
 */


void FUN__text__00540418(long *param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  float fVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auVar5 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
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
  
  *param_1 = param_2;
  fVar8 = *(float *)(param_2 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar9 = *(float *)(param_2 + 0x1c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar15 = *(float *)(param_2 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar14 = *(float *)(param_2 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar2 = (float)((double)param_1[4] - *(double *)(param_2 + 0x28)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar1 = (float)((double)param_1[3] - *(double *)(param_2 + 0x20)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar4 = *(float *)(param_2 + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar6 = *(float *)(param_2 + 0x3c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar3 = (float)((double)param_1[5] - *(double *)(param_2 + 0x30)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar16 = fVar8 * fVar1 - fVar14 * fVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar11 = fVar9 * fVar2 - fVar8 * fVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar13 = fVar14 * fVar3 - fVar9 * fVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar16 = fVar16 + fVar16; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar11 = fVar11 + fVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar13 = fVar13 + fVar13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar12 = *(float *)(param_1 + 6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  auVar5 = NEON_fmov(0x3f800000,4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar10 = *(float *)((long)param_1 + 0x34); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar7 = *(float *)(param_1 + 7); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(float *)(param_1 + 9) =
       ((fVar3 + fVar15 * fVar16 + fVar8 * fVar11) - fVar14 * fVar13) / *(float *)(param_2 + 0x40); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(int *)((long)param_1 + 0x4c) = auVar5._12_4_;
  *(float *)(param_1 + 8) = ((fVar1 - fVar8 * fVar16) + fVar15 * fVar11 + fVar9 * fVar13) / fVar4;
  *(float *)((long)param_1 + 0x44) =
       ((fVar2 + fVar14 * fVar16 + fVar15 * fVar13) - fVar9 * fVar11) / fVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  fVar1 = *(float *)(param_2 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar3 = *(float *)(param_2 + 0x1c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar9 = *(float *)(param_2 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar8 = *(float *)(param_2 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar6 = fVar7 * fVar8 - fVar12 * fVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar4 = fVar10 * fVar3 - fVar7 * fVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar11 = fVar12 * fVar1 - fVar10 * fVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar6 = fVar6 + fVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar4 = fVar4 + fVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar11 = fVar11 + fVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar2 = ((fVar12 + fVar9 * fVar4 + fVar3 * fVar6) - fVar1 * fVar11) / *(float *)(param_2 + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar3 = ((fVar10 - fVar3 * fVar4) + fVar8 * fVar11 + fVar9 * fVar6) / *(float *)(param_2 + 0x3c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar4 = ((fVar7 + fVar1 * fVar4 + fVar9 * fVar11) - fVar8 * fVar6) / *(float *)(param_2 + 0x40); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar1 = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0xb] = (ulong)(uint)fVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[10] = CONCAT44(fVar3,fVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (fVar1 == 0.0) { // [自动静态注释] 条件判断/分支
    param_1[0xd] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[0xc] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  fVar1 = 1.0 / fVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0xd] = (ulong)(uint)(fVar4 * fVar1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0xc] = CONCAT44(fVar3 * fVar1,fVar2 * fVar1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00420CE4
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00520ce4; name: FUN_.text__00520ce4
 */


bool FUN__text__00520ce4(long param_1,double *param_2,double *param_3,double *param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  float fVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar15; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar16; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar17; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar19; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar20; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar21; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar22; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar23; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar24; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  dVar21 = *(double *)(param_1 + 0x5a0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar23 = *(double *)(param_1 + 0x5a8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar6 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar8 = param_2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar10 = param_2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar19 = *(double *)(param_1 + 0x598); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar17 = (float)(dVar10 - dVar23); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar4 = *(float *)(param_1 + 0x5cc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar14 = (float)(dVar6 - dVar19); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar15 = (float)(dVar8 - dVar21); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar3 = *(float *)(param_1 + 0x5c8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar2 = *(float *)(param_1 + 0x5d0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar13 = fVar3 * fVar14 + fVar15 * fVar4 + fVar17 * fVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar1 = fVar13 * (fVar3 * (float)(*param_3 - dVar19) + (float)(param_3[1] - dVar21) * fVar4 + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                   (float)(param_3[2] - dVar23) * fVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (0.0 < fVar1) { // [自动静态注释] 条件判断/分支
    fVar17 = fVar13 * -2.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar6 = dVar6 + (double)(fVar17 * fVar3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar8 = dVar8 + (double)(fVar17 * fVar4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar10 = dVar10 + (double)(fVar17 * fVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar14 = (float)(dVar6 - dVar19); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar15 = (float)(dVar8 - dVar21); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar17 = (float)(dVar10 - dVar23); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  fVar20 = *(float *)(param_1 + 0x5d4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar18 = *(float *)(param_1 + 0x5d8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar12 = *(float *)(param_1 + 0x44); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar5 = (float)(*param_3 - dVar6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar7 = (float)(param_3[1] - dVar8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar9 = (float)(param_3[2] - dVar10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar24 = -fVar20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar22 = -fVar18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar13 = ABS(fVar13 / ABS(fVar3 * fVar5 + fVar7 * fVar4 + fVar9 * fVar2)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar14 = fVar14 + fVar5 * fVar13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar15 = fVar15 + fVar7 * fVar13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar17 = fVar17 + fVar9 * fVar13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar5 = fVar14 * *(float *)(param_1 + 0x5b0) + *(float *)(param_1 + 0x5b4) * fVar15 + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(float *)(param_1 + 0x5b8) * fVar17;
  fVar7 = fVar14 * *(float *)(param_1 + 0x5bc) + *(float *)(param_1 + 0x5c0) * fVar15 + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(float *)(param_1 + 0x5c4) * fVar17;
  fVar9 = (float)NEON_fminnm(fVar5,fVar20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar13 = fVar24; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (fVar24 <= fVar5) { // [自动静态注释] 条件判断/分支
    fVar13 = fVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  fVar11 = (float)NEON_fminnm(fVar7,fVar18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar9 = fVar22; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (fVar22 <= fVar7) { // [自动静态注释] 条件判断/分支
    fVar9 = fVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  fVar11 = fVar13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar16 = fVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (0.0 < fVar1) { // [自动静态注释] 条件判断/分支
    if (fVar18 - ABS(fVar9) <= fVar20 - ABS(fVar13)) { // [自动静态注释] 条件判断/分支
      if ((fVar18 - ABS(fVar9) < fVar20 - ABS(fVar13)) && (fVar16 = fVar18, fVar9 < 0.0)) { // [自动静态注释] 条件判断/分支
        fVar16 = fVar22; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if (fVar13 < 0.0) { // [自动静态注释] 条件判断/分支
        fVar20 = fVar24; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      fVar11 = fVar20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  dVar6 = *(double *)(param_1 + 0x598); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar8 = *(double *)(param_1 + 0x5a8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_4[1] = *(double *)(param_1 + 0x5a0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_4[2] = dVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_4 = dVar6;
  fVar2 = fVar14 * fVar3 + fVar4 * fVar15 + fVar2 * fVar17; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar3 = (float)NEON_fminnm(fVar2,fVar12); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar6 = *param_4 + (double)(*(float *)(param_1 + 0x5b0) * fVar11); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar8 = param_4[1] + (double)(*(float *)(param_1 + 0x5b4) * fVar11); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar10 = param_4[2] + (double)(*(float *)(param_1 + 0x5b8) * fVar11); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_4[2] = dVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_4 = dVar6;
  param_4[1] = dVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar6 = dVar6 + (double)(*(float *)(param_1 + 0x5bc) * fVar16); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar8 = dVar8 + (double)(*(float *)(param_1 + 0x5c0) * fVar16); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar10 = dVar10 + (double)(*(float *)(param_1 + 0x5c4) * fVar16); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar12 = -fVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_4 = dVar6;
  param_4[1] = dVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_4[2] = dVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar4 = *(float *)(param_1 + 0x5cc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar17 = *(float *)(param_1 + 0x5d0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (fVar12 <= fVar2) { // [自动静态注释] 条件判断/分支
    fVar12 = fVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *param_4 = dVar6 + (double)(*(float *)(param_1 + 0x5c8) * fVar12);
  param_4[1] = dVar8 + (double)(fVar4 * fVar12); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_4[2] = dVar10 + (double)(fVar17 * fVar12); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return 0.0 < fVar1 || (fVar12 != fVar2 || (fVar9 != fVar7 || fVar13 != fVar5)); // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



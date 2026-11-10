/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005B373C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b373c; name: FUN_.text__006b373c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006b373c(long param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  float *pfVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float *pfVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float *pfVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float *pfVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar15; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar16; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar17; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar19; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar20; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar21; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar22; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar23; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar24; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar25; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar26; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar27; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar29; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar30; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar31; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar32; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar6 = *(long *)(param_1 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar18 = *(float *)(param_1 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar12 = *(float *)(param_1 + 0x4c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pfVar4 = *(float **)(param_2 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar6 != 0) { // [自动静态注释] 条件判断/分支
    pfVar4 = (float *)(lVar6 + 0x70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if ((*(char *)(param_2 + 0x1c) != '\0') && ((*(byte *)(param_1 + 0x58) >> 2 & 1) != 0)) { // [自动静态注释] 条件判断/分支
    fVar12 = fVar12 * *(float *)(param_2 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar18 = fVar18 * *(float *)(param_2 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  bVar5 = *(byte *)(param_1 + 0x5b) >> 4 & 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar10 = *(float *)(param_1 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (bVar5 == 2) { // [自动静态注释] 条件判断/分支
    fVar16 = *(float *)(lVar6 + 0x50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar17 = 0.5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__006b37a0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    fVar10 = fVar10 + fVar16 * fVar17; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else if (bVar5 == 1) { // [自动静态注释] 条件判断/分支
    fVar16 = *(float *)(lVar6 + 0x50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar17 = -0.5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    goto LAB__text__006b37a0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  fVar16 = *(float *)(param_1 + 0x34); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar5 = *(byte *)(param_1 + 0x5b) >> 6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (bVar5 == 2) { // [自动静态注释] 条件判断/分支
    fVar17 = *(float *)(lVar6 + 0x54); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar21 = -0.5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (bVar5 != 1) goto LAB__text__006b37dc; // [自动静态注释] 条件判断/分支
    fVar17 = *(float *)(lVar6 + 0x54); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar21 = 0.5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  fVar16 = fVar16 + fVar17 * fVar21; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__006b37dc: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  fVar17 = *(float *)(param_1 + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((*(float *)(param_1 + 0x3c) != 0.0) || (*(float *)(param_1 + 0x40) != 0.0)) { // [自动静态注释] 条件判断/分支
    fVar21 = (float)NEON_ucvtf(*_DAT_008a1d20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar21 = fVar21 / *_DAT_008a02d0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar7 = (ulong)(*(float *)(param_1 + 0x3c) * fVar21); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar8 = (ulong)(fVar21 * *(float *)(param_1 + 0x40)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar9 = (ulong)(fVar21 * *(float *)(param_1 + 0x44)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    pfVar1 = (float *)(_DAT_008a1d28 + (uVar7 >> 0x18 & 0xff) * 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    pfVar2 = (float *)(_DAT_008a1d28 + (uVar8 >> 0x18 & 0xff) * 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar21 = (float)((uint)uVar7 & 0xffffff) * 5.9604645e-08; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    pfVar3 = (float *)(_DAT_008a1d28 + (uVar9 >> 0x18 & 0xff) * 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar22 = (float)((uint)uVar8 & 0xffffff) * 5.9604645e-08; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar25 = (float)((uint)uVar9 & 0xffffff) * 5.9604645e-08; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar27 = pfVar1[1] + fVar21 * pfVar1[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar29 = pfVar2[1] + fVar22 * pfVar2[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar20 = *pfVar1 + fVar21 * pfVar1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar21 = *pfVar2 + fVar22 * pfVar2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar26 = pfVar3[1] + fVar25 * pfVar3[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar22 = *pfVar3 + fVar25 * pfVar3[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar32 = fVar18 * fVar21 * fVar26; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar31 = fVar18 * fVar21 * fVar22; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar19 = -(fVar29 * fVar18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar30 = fVar12 * (fVar27 * fVar29 * fVar22 - fVar20 * fVar26); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar28 = fVar12 * (fVar20 * fVar22 + fVar26 * fVar27 * fVar29); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar12 = fVar12 * fVar27 * fVar21; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar25 = fVar27 * fVar26 + fVar29 * fVar20 * fVar22; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar26 = -(fVar27 * fVar22) + fVar29 * fVar20 * fVar26; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar20 = fVar20 * fVar21; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar11 = *(undefined8 *)(pfVar4 + 6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar15 = *(undefined8 *)(pfVar4 + 10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar18 = (float)*(undefined8 *)pfVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar21 = (float)((ulong)*(undefined8 *)pfVar4 >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar22 = (float)*(undefined8 *)(pfVar4 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar27 = (float)*(undefined8 *)(pfVar4 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar29 = (float)((ulong)*(undefined8 *)(pfVar4 + 4) >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar13 = (float)uVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar14 = (float)*(undefined8 *)(pfVar4 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar23 = (float)((ulong)*(undefined8 *)(pfVar4 + 8) >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar24 = (float)uVar15; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(ulong *)(param_1 + 0x78) =
         CONCAT44((float)((ulong)*(undefined8 *)(pfVar4 + 2) >> 0x20) + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                  fVar10 * fVar18 + fVar16 * fVar21 + fVar17 * fVar22, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                  fVar25 * fVar18 + fVar26 * fVar21 + fVar20 * fVar22 + 0.0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(ulong *)(param_1 + 0x70) =
         CONCAT44(fVar30 * fVar18 + fVar28 * fVar21 + fVar12 * fVar22 + 0.0, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                  fVar31 * fVar18 + fVar32 * fVar21 + fVar19 * fVar22 + 0.0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(ulong *)(param_1 + 0x88) =
         CONCAT44((float)((ulong)uVar11 >> 0x20) + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                  fVar10 * fVar27 + fVar16 * fVar29 + fVar17 * fVar13, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                  fVar25 * fVar27 + fVar26 * fVar29 + fVar20 * fVar13 + 0.0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(ulong *)(param_1 + 0x80) =
         CONCAT44(fVar30 * fVar27 + fVar28 * fVar29 + fVar12 * fVar13 + 0.0, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                  fVar31 * fVar27 + fVar32 * fVar29 + fVar19 * fVar13 + 0.0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(ulong *)(param_1 + 0x98) =
         CONCAT44((float)((ulong)uVar15 >> 0x20) + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                  fVar10 * fVar14 + fVar16 * fVar23 + fVar17 * fVar24, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                  fVar25 * fVar14 + fVar26 * fVar23 + fVar20 * fVar24 + 0.0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(ulong *)(param_1 + 0x90) =
         CONCAT44(fVar30 * fVar14 + fVar28 * fVar23 + fVar12 * fVar24 + 0.0, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                  fVar31 * fVar14 + fVar32 * fVar23 + fVar19 * fVar24 + 0.0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if (*(float *)(param_1 + 0x44) == 0.0) { // [自动静态注释] 条件判断/分支
    fVar21 = *pfVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar22 = pfVar4[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar11 = *(undefined8 *)(pfVar4 + 6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar15 = *(undefined8 *)(pfVar4 + 10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar26 = (float)((ulong)*(undefined8 *)(pfVar4 + 4) >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar29 = (float)((ulong)*(undefined8 *)(pfVar4 + 8) >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar25 = (float)*(undefined8 *)(pfVar4 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar27 = (float)*(undefined8 *)(pfVar4 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar20 = (float)uVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar13 = (float)uVar15; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(ulong *)(param_1 + 0x78) =
         CONCAT44(pfVar4[3] + fVar16 * fVar22 + fVar17 * pfVar4[2] + fVar10 * fVar21,pfVar4[2]); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(ulong *)(param_1 + 0x70) = CONCAT44(fVar12 * fVar22,fVar18 * fVar21);
    *(ulong *)(param_1 + 0x88) =
         CONCAT44((float)((ulong)uVar11 >> 0x20) + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                  fVar16 * fVar26 + fVar17 * fVar20 + fVar10 * fVar25,fVar20); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(ulong *)(param_1 + 0x80) = CONCAT44(fVar12 * fVar26,fVar18 * fVar25);
    *(ulong *)(param_1 + 0x98) =
         CONCAT44((float)((ulong)uVar15 >> 0x20) + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                  fVar16 * fVar29 + fVar17 * fVar13 + fVar10 * fVar27,fVar13); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(ulong *)(param_1 + 0x90) = CONCAT44(fVar12 * fVar29,fVar18 * fVar27);
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  fVar21 = (float)NEON_ucvtf(*_DAT_008a1d20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar7 = (ulong)(*(float *)(param_1 + 0x44) * (fVar21 / *_DAT_008a02d0)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pfVar1 = (float *)(_DAT_008a1d28 + (uVar7 >> 0x18 & 0xff) * 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar21 = (float)((uint)uVar7 & 0xffffff) * 5.9604645e-08; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar22 = pfVar1[1] + fVar21 * pfVar1[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar21 = *pfVar1 + fVar21 * pfVar1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar24 = fVar18 * fVar21; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar18 = fVar18 * fVar22; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar23 = -(fVar12 * fVar22); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar12 = fVar12 * fVar21; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar15 = *(undefined8 *)(pfVar4 + 6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar21 = (float)*(undefined8 *)pfVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar25 = (float)((ulong)*(undefined8 *)pfVar4 >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar20 = (float)*(undefined8 *)(pfVar4 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar11 = *(undefined8 *)(pfVar4 + 10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar29 = (float)*(undefined8 *)(pfVar4 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar13 = (float)((ulong)*(undefined8 *)(pfVar4 + 4) >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar14 = (float)uVar15; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar22 = (float)*(undefined8 *)(pfVar4 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar26 = (float)((ulong)*(undefined8 *)(pfVar4 + 8) >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar27 = (float)uVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(ulong *)(param_1 + 0x78) =
       CONCAT44((float)((ulong)*(undefined8 *)(pfVar4 + 2) >> 0x20) + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                fVar10 * fVar21 + fVar16 * fVar25 + fVar17 * fVar20, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                fVar21 * 0.0 + fVar25 * 0.0 + fVar20 * 1.0 + 0.0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(ulong *)(param_1 + 0x70) =
       CONCAT44(fVar23 * fVar21 + fVar12 * fVar25 + fVar20 * 0.0 + 0.0, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                fVar24 * fVar21 + fVar18 * fVar25 + fVar20 * 0.0 + 0.0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(ulong *)(param_1 + 0x88) =
       CONCAT44((float)((ulong)uVar15 >> 0x20) + fVar10 * fVar29 + fVar16 * fVar13 + fVar17 * fVar14 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                ,fVar29 * 0.0 + fVar13 * 0.0 + fVar14 * 1.0 + 0.0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(ulong *)(param_1 + 0x80) =
       CONCAT44(fVar23 * fVar29 + fVar12 * fVar13 + fVar14 * 0.0 + 0.0, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                fVar24 * fVar29 + fVar18 * fVar13 + fVar14 * 0.0 + 0.0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(ulong *)(param_1 + 0x98) =
       CONCAT44((float)((ulong)uVar11 >> 0x20) + fVar10 * fVar22 + fVar16 * fVar26 + fVar17 * fVar27 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                ,fVar22 * 0.0 + fVar26 * 0.0 + fVar27 * 1.0 + 0.0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(ulong *)(param_1 + 0x90) =
       CONCAT44(fVar23 * fVar22 + fVar12 * fVar26 + fVar27 * 0.0 + 0.0, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                fVar24 * fVar22 + fVar18 * fVar26 + fVar27 * 0.0 + 0.0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



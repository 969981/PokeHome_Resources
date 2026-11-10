/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003207A0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004207a0; name: FUN_.text__004207a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004207a0(float param_1,float param_2,long param_3,long param_4,uint param_5) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float *pfVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float *pfVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
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
  undefined8 uVar28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar29; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar30; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar31; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar32; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar33; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar35; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar36; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auVar34 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar37; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar39; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar41; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar42; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar43; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar44; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar45; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar46; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (1.1920929e-07 <= ABS(param_2)) { // [自动静态注释] 条件判断/分支
    fVar24 = param_1 + (float)_DAT_00724b40 * param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar25 = param_1 + (float)((ulong)_DAT_00724b40 >> 0x20) * param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar26 = param_1 + (float)uRam0000000000724b48 * param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar27 = param_1 + (float)((ulong)uRam0000000000724b48 >> 0x20) * param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((param_5 & 0xfffffff0) == 0) { // [自动静态注释] 条件判断/分支
      uVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (param_5 == 0) { // [自动静态注释] 条件判断/分支
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      auVar34 = NEON_fmov(0x41800000,4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar33 = auVar34._0_4_ * param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar35 = auVar34._4_4_ * param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar36 = auVar34._8_4_ * param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar37 = auVar34._12_4_ * param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar38 = param_1 + (float)_DAT_00724a30 * param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar39 = param_1 + (float)((ulong)_DAT_00724a30 >> 0x20) * param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar40 = param_1 + (float)uRam0000000000724a38 * param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar42 = param_1 + (float)((ulong)uRam0000000000724a38 >> 0x20) * param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar43 = param_1 + (float)_DAT_00724840 * param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar44 = param_1 + (float)((ulong)_DAT_00724840 >> 0x20) * param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar45 = param_1 + (float)uRam0000000000724848 * param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar46 = param_1 + (float)((ulong)uRam0000000000724848 >> 0x20) * param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar30 = param_1 + (float)_DAT_00724850 * param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar31 = param_1 + (float)((ulong)_DAT_00724850 >> 0x20) * param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar32 = param_1 + (float)uRam0000000000724858 * param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_1 = param_1 + (float)((ulong)uRam0000000000724858 >> 0x20) * param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar6 = (undefined8 *)(param_3 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar7 = (undefined8 *)(param_4 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        uVar4 = uVar4 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar8 = fVar30 * (float)puVar6[-2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar12 = fVar31 * (float)((ulong)puVar6[-2] >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar16 = fVar32 * (float)puVar6[-1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar20 = param_1 * (float)((ulong)puVar6[-1] >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar30 = fVar30 + fVar33; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar31 = fVar31 + fVar35; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar32 = fVar32 + fVar36; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        param_1 = param_1 + fVar37; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar9 = fVar24 * (float)puVar6[-4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar13 = fVar25 * (float)((ulong)puVar6[-4] >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar17 = fVar26 * (float)puVar6[-3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar21 = fVar27 * (float)((ulong)puVar6[-3] >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar24 = fVar24 + fVar33; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar25 = fVar25 + fVar35; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar26 = fVar26 + fVar36; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar27 = fVar27 + fVar37; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar10 = fVar43 * (float)*puVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar14 = fVar44 * (float)((ulong)*puVar6 >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar18 = fVar45 * (float)puVar6[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar22 = fVar46 * (float)((ulong)puVar6[1] >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar11 = fVar38 * (float)puVar6[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar15 = fVar39 * (float)((ulong)puVar6[2] >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar19 = fVar40 * (float)puVar6[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar23 = fVar42 * (float)((ulong)puVar6[3] >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar43 = fVar43 + fVar33; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar44 = fVar44 + fVar35; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar45 = fVar45 + fVar36; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar46 = fVar46 + fVar37; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar38 = fVar38 + fVar33; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar39 = fVar39 + fVar35; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar40 = fVar40 + fVar36; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar42 = fVar42 + fVar37; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar7[-3] = CONCAT44((float)((ulong)puVar7[-3] >> 0x20) + fVar21,(float)puVar7[-3] + fVar17 // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                             ); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        puVar7[-4] = CONCAT44((float)((ulong)puVar7[-4] >> 0x20) + fVar13,(float)puVar7[-4] + fVar9) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        ; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        puVar7[-1] = CONCAT44((float)((ulong)puVar7[-1] >> 0x20) + fVar20,(float)puVar7[-1] + fVar16 // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                             ); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        puVar7[-2] = CONCAT44((float)((ulong)puVar7[-2] >> 0x20) + fVar12,(float)puVar7[-2] + fVar8) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        ; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        puVar7[1] = CONCAT44((float)((ulong)puVar7[1] >> 0x20) + fVar22,(float)puVar7[1] + fVar18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *puVar7 = CONCAT44((float)((ulong)*puVar7 >> 0x20) + fVar14,(float)*puVar7 + fVar10);
        puVar7[3] = CONCAT44((float)((ulong)puVar7[3] >> 0x20) + fVar23,(float)puVar7[3] + fVar19); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar7[2] = CONCAT44((float)((ulong)puVar7[2] >> 0x20) + fVar15,(float)puVar7[2] + fVar11); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar6 = puVar6 + 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar7 = puVar7 + 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (uVar4 < (param_5 & 0xfffffff0)); // [自动静态注释] 循环/迭代
      if (param_5 <= (uint)uVar4) { // [自动静态注释] 条件判断/分支
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    auVar34 = NEON_fmov(0x40800000,4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      lVar2 = (uVar4 & 0xffffffff) * 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar1 = (int)uVar4 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar4 = (ulong)uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      pfVar5 = (float *)(param_3 + lVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      pfVar3 = (float *)(param_4 + lVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar30 = *pfVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar31 = pfVar3[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar32 = fVar24 * *pfVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar33 = fVar25 * pfVar5[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar35 = fVar26 * pfVar5[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar36 = fVar27 * pfVar5[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar24 = fVar24 + auVar34._0_4_ * param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar25 = fVar25 + auVar34._4_4_ * param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar26 = fVar26 + auVar34._8_4_ * param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar27 = fVar27 + auVar34._12_4_ * param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      pfVar5 = (float *)(param_4 + lVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      pfVar5[2] = pfVar3[2] + fVar35; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      pfVar5[3] = pfVar3[3] + fVar36; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *pfVar5 = fVar30 + fVar32;
      pfVar5[1] = fVar31 + fVar33; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (uVar1 < param_5); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  else if (1.1920929e-07 <= ABS(param_1)) { // [自动静态注释] 条件判断/分支
    if ((param_5 & 0xfffffff0) == 0) { // [自动静态注释] 条件判断/分支
      uVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      pfVar5 = (float *)(param_3 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar6 = (undefined8 *)(param_4 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        uVar28 = *(undefined8 *)(pfVar5 + -8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar24 = pfVar5[-4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar25 = pfVar5[-3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar26 = pfVar5[-2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar27 = pfVar5[-1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar4 = uVar4 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar30 = *pfVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar31 = pfVar5[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar32 = pfVar5[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar33 = pfVar5[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar41 = *(undefined8 *)(pfVar5 + 6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar29 = *(undefined8 *)(pfVar5 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar6[-3] = CONCAT44((float)((ulong)puVar6[-3] >> 0x20) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                              (float)((ulong)*(undefined8 *)(pfVar5 + -6) >> 0x20) * param_1, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                              (float)puVar6[-3] + (float)*(undefined8 *)(pfVar5 + -6) * param_1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        puVar6[-4] = CONCAT44((float)((ulong)puVar6[-4] >> 0x20) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                              (float)((ulong)uVar28 >> 0x20) * param_1, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                              (float)puVar6[-4] + (float)uVar28 * param_1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        puVar6[-1] = CONCAT44((float)((ulong)puVar6[-1] >> 0x20) + fVar27 * param_1, // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                              (float)puVar6[-1] + fVar26 * param_1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        puVar6[-2] = CONCAT44((float)((ulong)puVar6[-2] >> 0x20) + fVar25 * param_1, // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                              (float)puVar6[-2] + fVar24 * param_1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        puVar6[1] = CONCAT44((float)((ulong)puVar6[1] >> 0x20) + fVar33 * param_1, // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                             (float)puVar6[1] + fVar32 * param_1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *puVar6 = CONCAT44((float)((ulong)*puVar6 >> 0x20) + fVar31 * param_1,
                           (float)*puVar6 + fVar30 * param_1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *(float *)(puVar6 + 3) = *(float *)(puVar6 + 3) + (float)uVar41 * param_1;
        *(float *)((long)puVar6 + 0x1c) =
             *(float *)((long)puVar6 + 0x1c) + (float)((ulong)uVar41 >> 0x20) * param_1;
        *(float *)(puVar6 + 2) = *(float *)(puVar6 + 2) + (float)uVar29 * param_1;
        *(float *)((long)puVar6 + 0x14) =
             *(float *)((long)puVar6 + 0x14) + (float)((ulong)uVar29 >> 0x20) * param_1;
        pfVar5 = pfVar5 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar6 = puVar6 + 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (uVar4 < (param_5 & 0xfffffff0)); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    for (; (uint)uVar4 < param_5; uVar4 = (ulong)((uint)uVar4 + 4)) { // [自动静态注释] 循环/迭代
      lVar2 = (uVar4 & 0xffffffff) * 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar29 = ((undefined8 *)(param_3 + lVar2))[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar28 = *(undefined8 *)(param_3 + lVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      pfVar5 = (float *)(param_4 + lVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar24 = *pfVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar25 = pfVar5[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      pfVar3 = (float *)(param_4 + lVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      pfVar3[2] = pfVar5[2] + (float)uVar29 * param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      pfVar3[3] = pfVar5[3] + (float)((ulong)uVar29 >> 0x20) * param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *pfVar3 = fVar24 + (float)uVar28 * param_1;
      pfVar3[1] = fVar25 + (float)((ulong)uVar28 >> 0x20) * param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



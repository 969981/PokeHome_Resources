/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005E0E28
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006e0e28; name: FUN_.text__006e0e28
 */


void FUN__text__006e0e28(undefined8 param_1,undefined8 param_2,undefined8 *param_3, // [自动静态注释] 调用尚未恢复正式名称的函数
                        undefined8 *param_4,int param_5,int param_6) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float *pfVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float *pfVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auVar11 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_30; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_20; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  fVar4 = (float)param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_5 == 0) { // [自动静态注释] 条件判断/分支
    local_20 = *param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_18 = param_4[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    pfVar2 = (float *)param_4[0xb]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar12 = 1.0 - fVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    pfVar3 = *(float **)(pfVar2 + 0x16); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_30 = *(undefined8 *)pfVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_28 = *(undefined8 *)(pfVar2 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar8 = (float)*param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar5 = (float)((ulong)*param_4 >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar6 = (float)param_4[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar7 = (float)((ulong)param_4[1] >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_48 = CONCAT44((pfVar3[3] - fVar7) * 0.5,(pfVar3[2] - fVar6) * 0.5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_50 = CONCAT44((pfVar3[1] - fVar5) * 0.5,(*pfVar3 - fVar8) * 0.5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    auVar11 = NEON_fmov(0x3e800000,4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_40 = CONCAT44(((pfVar2[1] - fVar5) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                        (pfVar2[1] - (float)((ulong)*(undefined8 *)pfVar3 >> 0x20))) * auVar11._4_4_ // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                        ,((*pfVar2 - fVar8) + (*pfVar2 - (float)*(undefined8 *)pfVar3)) * // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                         auVar11._0_4_); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uStack_38 = CONCAT44(((pfVar2[3] - fVar7) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                         (pfVar2[3] - (float)((ulong)*(undefined8 *)(pfVar3 + 2) >> 0x20))) * // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                         auVar11._12_4_, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                         ((pfVar2[2] - fVar6) + (pfVar2[2] - (float)*(undefined8 *)(pfVar3 + 2))) * // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                         auVar11._8_4_); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar13 = CONCAT44((float)((ulong)param_4[4] >> 0x20) * fVar12 + pfVar2[9] * fVar4, // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                      (float)param_4[4] * fVar12 + pfVar2[8] * fVar4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar14 = CONCAT44((float)((ulong)param_4[5] >> 0x20) * fVar12 + pfVar2[0xb] * fVar4, // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                      (float)param_4[5] * fVar12 + pfVar2[10] * fVar4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  else if (param_6 + -1 == param_5) { // [自动静态注释] 条件判断/分支
    puVar1 = (undefined8 *)param_4[0xc]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_30 = *param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_28 = param_4[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_20 = *puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_18 = puVar1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    pfVar2 = (float *)puVar1[0xc]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar4 = (float)*param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar8 = (float)((ulong)*param_4 >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar5 = (float)param_4[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar6 = (float)((ulong)param_4[1] >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_40 = CONCAT44((fVar8 - (float)((ulong)*(undefined8 *)pfVar2 >> 0x20)) * 0.5, // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                        (fVar4 - (float)*(undefined8 *)pfVar2) * 0.5); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uStack_38 = CONCAT44((fVar6 - (float)((ulong)*(undefined8 *)(pfVar2 + 2) >> 0x20)) * 0.5, // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                         (fVar5 - (float)*(undefined8 *)(pfVar2 + 2)) * 0.5); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    fVar7 = (float)*puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar12 = (float)((ulong)*puVar1 >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar9 = (float)puVar1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar10 = (float)((ulong)puVar1[1] >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    auVar11 = NEON_fmov(0xbe800000,4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_50 = CONCAT44(((fVar12 - fVar8) + (fVar12 - pfVar2[1])) * auVar11._4_4_, // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                        ((fVar7 - fVar4) + (fVar7 - *pfVar2)) * auVar11._0_4_); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uStack_48 = CONCAT44(((fVar10 - fVar6) + (fVar10 - pfVar2[3])) * auVar11._12_4_, // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                         ((fVar9 - fVar5) + (fVar9 - pfVar2[2])) * auVar11._8_4_); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    auVar11 = *(undefined1 (*) [16])(param_4 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar13 = CONCAT44(*(float *)((long)puVar1 + 0x24) * 0.0 + auVar11._4_4_, // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                      *(float *)(puVar1 + 4) * 0.0 + auVar11._0_4_);
    uVar14 = CONCAT44(*(float *)((long)puVar1 + 0x2c) * 0.0 + auVar11._12_4_, // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                      *(float *)(puVar1 + 5) * 0.0 + auVar11._8_4_);
    param_1 = 0x3f800000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    pfVar2 = (float *)param_4[0xb]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (param_6 + -2 == param_5) { // [自动静态注释] 条件判断/分支
      puVar1 = *(undefined8 **)(pfVar2 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_18 = puVar1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      pfVar3 = (float *)puVar1[0xc]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_20 = *puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_30 = *(undefined8 *)pfVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_28 = *(undefined8 *)(pfVar2 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_40 = CONCAT44(((float)((ulong)*(undefined8 *)pfVar2 >> 0x20) - pfVar3[1]) * 0.5, // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                          ((float)*(undefined8 *)pfVar2 - *pfVar3) * 0.5); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uStack_38 = CONCAT44(((float)((ulong)*(undefined8 *)(pfVar2 + 2) >> 0x20) - pfVar3[3]) * 0.5, // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                           ((float)*(undefined8 *)(pfVar2 + 2) - pfVar3[2]) * 0.5); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      fVar8 = (float)*puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar5 = (float)((ulong)*puVar1 >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar6 = (float)puVar1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar7 = (float)((ulong)puVar1[1] >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar12 = 1.0 - fVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      auVar11 = NEON_fmov(0xbe800000,4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_50 = CONCAT44(((fVar5 - pfVar2[1]) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                          (fVar5 - (float)((ulong)*(undefined8 *)pfVar3 >> 0x20))) * auVar11._4_4_, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                          ((fVar8 - *pfVar2) + (fVar8 - (float)*(undefined8 *)pfVar3)) * // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                          auVar11._0_4_); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uStack_48 = CONCAT44(((fVar7 - pfVar2[3]) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                           (fVar7 - (float)((ulong)*(undefined8 *)(pfVar3 + 2) >> 0x20))) * // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                           auVar11._12_4_, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                           ((fVar6 - pfVar2[2]) + (fVar6 - (float)*(undefined8 *)(pfVar3 + 2))) * // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                           auVar11._8_4_); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar13 = CONCAT44((float)((ulong)puVar1[4] >> 0x20) * fVar12 + pfVar2[9] * fVar4, // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                        (float)puVar1[4] * fVar12 + pfVar2[8] * fVar4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar14 = CONCAT44((float)((ulong)puVar1[5] >> 0x20) * fVar12 + pfVar2[0xb] * fVar4, // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                        (float)puVar1[5] * fVar12 + pfVar2[10] * fVar4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      local_20 = *param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_18 = param_4[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      pfVar3 = (float *)param_4[0xc]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_30 = *(undefined8 *)pfVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_28 = *(undefined8 *)(pfVar2 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_40 = CONCAT44(((float)((ulong)*(undefined8 *)pfVar2 >> 0x20) - pfVar3[1]) * 0.5, // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                          ((float)*(undefined8 *)pfVar2 - *pfVar3) * 0.5); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uStack_38 = CONCAT44(((float)((ulong)*(undefined8 *)(pfVar2 + 2) >> 0x20) - pfVar3[3]) * 0.5, // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                           ((float)*(undefined8 *)(pfVar2 + 2) - pfVar3[2]) * 0.5); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      fVar8 = 1.0 - fVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar14 = (*(undefined8 **)(pfVar2 + 0x16))[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar13 = **(undefined8 **)(pfVar2 + 0x16); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      auVar11._0_8_ = // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
           CONCAT44(((float)((ulong)uVar13 >> 0x20) - (float)((ulong)*param_4 >> 0x20)) * 0.5, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    ((float)uVar13 - (float)*param_4) * 0.5); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      auVar11._8_4_ = ((float)uVar14 - (float)param_4[1]) * 0.5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      auVar11._12_4_ = ((float)((ulong)uVar14 >> 0x20) - (float)((ulong)param_4[1] >> 0x20)) * 0.5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_48 = auVar11._8_8_; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar13 = CONCAT44((float)((ulong)param_4[4] >> 0x20) * fVar8 + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                        (float)((ulong)*(undefined8 *)(pfVar2 + 8) >> 0x20) * fVar4, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                        (float)param_4[4] * fVar8 + (float)*(undefined8 *)(pfVar2 + 8) * fVar4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar14 = CONCAT44((float)((ulong)param_4[5] >> 0x20) * fVar8 + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                        (float)((ulong)*(undefined8 *)(pfVar2 + 10) >> 0x20) * fVar4, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                        (float)param_4[5] * fVar8 + (float)*(undefined8 *)(pfVar2 + 10) * fVar4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      local_50 = auVar11._0_8_; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  param_3[1] = uVar14; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_3 = uVar13;
  FUN__text__006d8770(param_1,param_2,&local_20,&local_40,&local_30,&local_50); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



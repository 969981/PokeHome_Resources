/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005DBF40
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006dbf40; name: FUN_.text__006dbf40
 */


void FUN__text__006dbf40(undefined8 param_1,undefined8 param_2,undefined8 *param_3, // [自动静态注释] 调用尚未恢复正式名称的函数
                        undefined8 *param_4,int param_5,int param_6) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  undefined1 auVar1 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float *pfVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 (*pauVar3) [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float *pfVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auVar13 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auVar14 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar15; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uStack_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uStack_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_30; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uStack_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_20; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uStack_18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  fVar6 = (float)param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_5 == 0) { // [自动静态注释] 条件判断/分支
    local_20 = *param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    pfVar2 = (float *)param_4[6]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    pfVar5 = *(float **)(pfVar2 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar10 = (float)param_4[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_18 = param_4[1] & 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_30 = *(undefined8 *)pfVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    auVar1 = *(undefined1 (*) [16])(pfVar2 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_28 = (ulong)(uint)pfVar2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar7 = (float)((ulong)local_20 >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_50 = CONCAT44((pfVar5[1] - fVar7) * 0.5,(*pfVar5 - (float)local_20) * 0.5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_48 = (ulong)(uint)((pfVar5[2] - fVar10) * 0.5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    auVar13 = NEON_fmov(0x3e800000,4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_40 = CONCAT44(((pfVar2[1] - fVar7) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                        (pfVar2[1] - (float)((ulong)*(undefined8 *)pfVar5 >> 0x20))) * auVar13._4_4_ // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                        ,((*pfVar2 - (float)local_20) + (*pfVar2 - (float)*(undefined8 *)pfVar5)) * // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                         auVar13._0_4_); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    fVar7 = 1.0 - fVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar8 = *(float *)(param_4 + 2) * fVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar9 = *(float *)((long)param_4 + 0x14) * fVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar11 = *(float *)(param_4 + 3) * fVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar7 = *(float *)((long)param_4 + 0x1c) * fVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    auVar14._0_4_ = auVar1._0_4_ * fVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    auVar14._4_4_ = auVar1._4_4_ * fVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    auVar14._8_4_ = auVar1._8_4_ * fVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    auVar14._12_4_ = auVar1._12_4_ * fVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_38 = (ulong)(uint)(((pfVar2[2] - fVar10) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                              (pfVar2[2] - (float)*(undefined8 *)(pfVar5 + 2))) * auVar13._8_4_); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (param_6 + -1 == param_5) { // [自动静态注释] 条件判断/分支
      pfVar2 = (float *)param_4[7]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      pauVar3 = *(undefined1 (**) [16])(pfVar2 + 0xe); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_20 = *(undefined8 *)pfVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      auVar1 = *(undefined1 (*) [16])(pfVar2 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_30 = *param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar7 = (float)param_4[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_18 = (ulong)(uint)pfVar2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_28 = param_4[1] & 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar6 = (float)((ulong)local_30 >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_40 = CONCAT44((fVar6 - *(float *)(*pauVar3 + 4)) * 0.5, // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                          ((float)local_30 - *(float *)*pauVar3) * 0.5); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uStack_38 = (ulong)(uint)((fVar7 - *(float *)(*pauVar3 + 8)) * 0.5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      auVar14 = *pauVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      auVar13 = NEON_fmov(0xbe800000,4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_50 = CONCAT44(((pfVar2[1] - fVar6) + (pfVar2[1] - auVar14._4_4_)) * auVar13._4_4_, // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                          ((*pfVar2 - (float)local_30) + (*pfVar2 - auVar14._0_4_)) * auVar13._0_4_) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      ; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar15 = CONCAT44(auVar1._4_4_ * 0.0 + (float)((ulong)param_4[2] >> 0x20), // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                        auVar1._0_4_ * 0.0 + (float)param_4[2]); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar12 = CONCAT44(auVar1._12_4_ * 0.0 + (float)((ulong)param_4[3] >> 0x20), // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                        auVar1._8_4_ * 0.0 + (float)param_4[3]); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      param_1 = 0x3f800000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_48 = (ulong)(uint)(((pfVar2[2] - fVar7) + (pfVar2[2] - auVar14._8_4_)) * auVar13._8_4_) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      ; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      goto LAB__text__006dc1f8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    pfVar2 = (float *)param_4[6]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (param_6 + -2 == param_5) { // [自动静态注释] 条件判断/分支
      puVar4 = *(undefined8 **)(pfVar2 + 0xe); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      pfVar5 = (float *)puVar4[7]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_20 = *puVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_18 = puVar4[1] & 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_30 = *(undefined8 *)pfVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      auVar1 = *(undefined1 (*) [16])(pfVar2 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_28 = *(ulong *)(pfVar2 + 2) & 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_40 = CONCAT44(((float)((ulong)*(undefined8 *)pfVar2 >> 0x20) - pfVar5[1]) * 0.5, // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                          ((float)*(undefined8 *)pfVar2 - *pfVar5) * 0.5); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uStack_38 = (ulong)(uint)(((float)*(undefined8 *)(pfVar2 + 2) - pfVar5[2]) * 0.5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar7 = (float)*puVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar8 = (float)((ulong)*puVar4 >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      auVar13 = NEON_fmov(0xbe800000,4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_50 = CONCAT44(((fVar8 - pfVar2[1]) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                          (fVar8 - (float)((ulong)*(undefined8 *)pfVar5 >> 0x20))) * auVar13._4_4_, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                          ((fVar7 - *pfVar2) + (fVar7 - (float)*(undefined8 *)pfVar5)) * // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                          auVar13._0_4_); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      fVar7 = 1.0 - fVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar8 = *(float *)(puVar4 + 2) * fVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar9 = *(float *)((long)puVar4 + 0x14) * fVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar11 = *(float *)(puVar4 + 3) * fVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar7 = *(float *)((long)puVar4 + 0x1c) * fVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      auVar14._0_4_ = auVar1._0_4_ * fVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      auVar14._4_4_ = auVar1._4_4_ * fVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      auVar14._8_4_ = auVar1._8_4_ * fVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      auVar14._12_4_ = auVar1._12_4_ * fVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_48 = (ulong)(uint)((((float)puVar4[1] - pfVar2[2]) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                                ((float)puVar4[1] - (float)*(undefined8 *)(pfVar5 + 2))) * // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                               auVar13._8_4_); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      local_20 = *param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_18 = param_4[1] & 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_30 = *(undefined8 *)pfVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      auVar1 = *(undefined1 (*) [16])(pfVar2 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_28 = (ulong)(uint)pfVar2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar15 = *(undefined8 *)param_4[7]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      pfVar5 = *(float **)(pfVar2 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_40 = CONCAT44((pfVar2[1] - (float)((ulong)uVar15 >> 0x20)) * 0.5, // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                          (*pfVar2 - (float)uVar15) * 0.5); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uStack_38 = (ulong)(uint)((pfVar2[2] - (float)((undefined8 *)param_4[7])[1]) * 0.5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_50 = CONCAT44((pfVar5[1] - (float)((ulong)local_20 >> 0x20)) * 0.5, // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                          (*pfVar5 - (float)local_20) * 0.5); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      fVar7 = 1.0 - fVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar8 = *(float *)(param_4 + 2) * fVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar9 = *(float *)((long)param_4 + 0x14) * fVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar11 = *(float *)(param_4 + 3) * fVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar7 = *(float *)((long)param_4 + 0x1c) * fVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      auVar14._0_4_ = auVar1._0_4_ * fVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      auVar14._4_4_ = auVar1._4_4_ * fVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      auVar14._8_4_ = auVar1._8_4_ * fVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      auVar14._12_4_ = auVar1._12_4_ * fVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_48 = (ulong)(uint)((pfVar5[2] - (float)param_4[1]) * 0.5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  uVar15 = CONCAT44(fVar9 + auVar14._4_4_,fVar8 + auVar14._0_4_); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar12 = CONCAT44(fVar7 + auVar14._12_4_,fVar11 + auVar14._8_4_); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__006dc1f8: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  param_3[1] = uVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_3 = uVar15;
  FUN__text__006d8770(param_1,param_2,&local_20,&local_40,&local_30,&local_50); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



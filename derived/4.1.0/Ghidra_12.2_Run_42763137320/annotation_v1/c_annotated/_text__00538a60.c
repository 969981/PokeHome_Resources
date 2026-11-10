/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00438A60
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00538a60; name: FUN_.text__00538a60
 */


bool FUN__text__00538a60(undefined8 param_1,long param_2,double *param_3,double *param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        double *param_5,float *param_6) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
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
  float fVar18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar19; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fStack_54; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float local_4c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fStack_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float local_44; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  fVar5 = (float)(param_3[1] - *(double *)(param_2 + 0x28)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar10 = *(float *)(param_2 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar11 = *(float *)(param_2 + 0x1c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar7 = (float)(param_4[1] - *(double *)(param_2 + 0x28)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar13 = *(float *)(param_2 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar12 = *(float *)(param_2 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar4 = (float)(*param_3 - *(double *)(param_2 + 0x20)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar8 = (float)(param_3[2] - *(double *)(param_2 + 0x30)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar6 = (float)(*param_4 - *(double *)(param_2 + 0x20)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar9 = (float)(param_4[2] - *(double *)(param_2 + 0x30)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar14 = fVar10 * fVar4 - fVar12 * fVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar16 = fVar11 * fVar5 - fVar10 * fVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar17 = fVar12 * fVar8 - fVar11 * fVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar15 = fVar10 * fVar6 - fVar12 * fVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar18 = fVar11 * fVar7 - fVar10 * fVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar19 = fVar12 * fVar9 - fVar11 * fVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar14 = fVar14 + fVar14; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar16 = fVar16 + fVar16; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar17 = fVar17 + fVar17; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar15 = fVar15 + fVar15; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar18 = fVar18 + fVar18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar19 = fVar19 + fVar19; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_4c = ((fVar4 - fVar10 * fVar14) + fVar13 * fVar16 + fVar11 * fVar17) / // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
             *(float *)(param_2 + 0x38);
  fStack_48 = ((fVar5 + fVar12 * fVar14 + fVar13 * fVar17) - fVar11 * fVar16) / // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              *(float *)(param_2 + 0x3c);
  local_44 = ((fVar8 + fVar13 * fVar14 + fVar10 * fVar16) - fVar12 * fVar17) / // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
             *(float *)(param_2 + 0x40);
  local_58 = ((fVar6 - fVar10 * fVar15) + fVar13 * fVar18 + fVar11 * fVar19) / // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
             *(float *)(param_2 + 0x38);
  fStack_54 = ((fVar7 + fVar12 * fVar15 + fVar13 * fVar19) - fVar11 * fVar18) / // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              *(float *)(param_2 + 0x3c);
  local_50 = ((fVar9 + fVar13 * fVar15 + fVar10 * fVar18) - fVar12 * fVar19) / // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
             *(float *)(param_2 + 0x40);
  iVar1 = FUN__text__00516f44(param_1,&local_4c); // [自动静态注释] 调用尚未恢复正式名称的函数
  iVar2 = FUN__text__00516f44(param_1,&local_58); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((iVar1 == 0) && (iVar2 == 1)) { // [自动静态注释] 条件判断/分支
    uVar3 = FUN__text__00516fe8(param_1,&local_4c,&local_58); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (iVar1 != 1) { // [自动静态注释] 条件判断/分支
      return false; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    if (iVar2 != 0) { // [自动静态注释] 条件判断/分支
      return false; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    uVar3 = FUN__text__00516fe8(param_1,&local_58,&local_4c); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  if ((uVar3 & 1) == 0) { // [自动静态注释] 条件判断/分支
    return false; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  fVar5 = (float)(param_3[1] - param_5[1]); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar8 = (float)(param_5[1] - param_4[1]); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar4 = (float)(*param_3 - *param_5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar7 = (float)(*param_5 - *param_4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar6 = (float)(param_3[2] - param_5[2]); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar9 = (float)(param_5[2] - param_4[2]); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar10 = SQRT((fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9) * // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                (fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (fVar10 == 0.0) { // [自动静态注释] 条件判断/分支
    fVar4 = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    fVar4 = (float)NEON_fminnm((fVar7 * fVar4 + fVar5 * fVar8 + fVar6 * fVar9) / fVar10,0x3f800000); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (fVar4 <= -1.0) { // [自动静态注释] 条件判断/分支
      fVar4 = -1.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    fVar4 = acosf(fVar4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar4 = fVar4 * 0.31830987; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *param_6 = fVar4;
  return fVar10 != 0.0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



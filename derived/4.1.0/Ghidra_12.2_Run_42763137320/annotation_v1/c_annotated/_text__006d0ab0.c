/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005D0AB0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006d0ab0; name: FUN_.text__006d0ab0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006d0ab0(long param_1,long *param_2,long *param_3,float *param_4,undefined8 *param_5 // [自动静态注释] 调用尚未恢复正式名称的函数
                        ,uint param_6,int param_7) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  int *piVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
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
  undefined8 uVar18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar19; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar20; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar21; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar22; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar23; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar18 = NEON_rev64(param_5[6],4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar15 = (float)param_5[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar17 = (float)uVar18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar16 = (float)((ulong)param_5[3] >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar19 = (float)((ulong)uVar18 >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar20 = (float)_DAT_00723990; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar21 = (float)((ulong)_DAT_00723990 >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar3 = fVar15 * fVar17 * fVar20 + fVar16 * fVar19 * fVar21; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (fVar3 != 0.0) { // [自动静态注释] 条件判断/分支
    uVar18 = param_5[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar6 = param_5[5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar10 = (float)param_5[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar13 = (float)param_5[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar11 = (float)((ulong)param_5[4] >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar14 = (float)((ulong)param_5[1] >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar4 = ((fVar10 - fVar13) * fVar17 * fVar20 + (fVar11 - fVar14) * fVar19 * fVar21) / fVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar5 = fVar13 + fVar15 * fVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar7 = fVar14 + fVar16 * fVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar8 = (float)*param_5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar22 = fVar5 - fVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar9 = (float)((ulong)*param_5 >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar23 = fVar7 - fVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar4 = (float)FUN__text__006cb1c0(*(long *)(param_4 + 2) + 0x20); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (fVar4 * *param_4 <= SQRT(fVar22 * fVar22 + fVar23 * fVar23)) { // [自动静态注释] 条件判断/分支
      if ((param_6 & 1) == 0) { // [自动静态注释] 条件判断/分支
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      iVar2 = param_7 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(int *)*param_3 = param_7;
      *param_3 = *param_3 + 4;
      *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 1;
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *(int *)*param_3 = *(int *)(param_1 + 0xe8) + -1;
      fVar4 = (float)uVar18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar23 = (float)uVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar22 = (float)((ulong)uVar18 >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar12 = (float)((ulong)uVar6 >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *param_3 = *param_3 + 4;
      piVar1 = (int *)(param_1 + 0xec); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *piVar1 = *piVar1 + 1;
      *(undefined4 *)*param_3 = *(undefined4 *)(param_1 + 0xe8);
      fVar3 = ((fVar23 - fVar4) * fVar17 * fVar20 + (fVar12 - fVar22) * fVar19 * fVar21) / fVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *param_3 = *param_3 + 4;
      *piVar1 = *piVar1 + 1;
      *(undefined4 *)*param_3 = *(undefined4 *)(param_1 + 0xe8);
      *param_3 = *param_3 + 4;
      *piVar1 = *piVar1 + 1;
      *(int *)*param_3 = *(int *)(param_1 + 0xe8) + 1;
      *param_3 = *param_3 + 4;
      *piVar1 = *piVar1 + 1;
      *(float *)*param_2 = fVar13;
      *(float *)(*param_2 + 4) = fVar14;
      *param_2 = *param_2 + 8;
      *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
      *(float *)*param_2 = fVar8;
      *(float *)(*param_2 + 4) = fVar9;
      *param_2 = *param_2 + 8;
      iVar2 = *(int *)(param_1 + 0xe8) + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(int *)(param_1 + 0xe8) = iVar2;
      *(int *)*param_3 = iVar2;
      *param_3 = *param_3 + 4;
      *piVar1 = *piVar1 + 1;
      *(int *)*param_3 = *(int *)(param_1 + 0xe8) + 1;
      *param_3 = *param_3 + 4;
      *piVar1 = *piVar1 + 1;
      *(float *)*param_2 = fVar5;
      *(float *)(*param_2 + 4) = fVar7;
      *param_2 = *param_2 + 8;
      *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
      *(float *)*param_2 = fVar10;
      *(float *)(*param_2 + 4) = fVar11;
      *param_2 = *param_2 + 8;
      iVar2 = *(int *)(param_1 + 0xe8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(int *)(param_1 + 0xe8) = iVar2 + 1;
      *(int *)*param_3 = iVar2;
      *param_3 = *param_3 + 4;
      *piVar1 = *piVar1 + 1;
      *(undefined4 *)*param_3 = *(undefined4 *)(param_1 + 0xe8);
      *param_3 = *param_3 + 4;
      *piVar1 = *piVar1 + 1;
      *(undefined4 *)*param_3 = *(undefined4 *)(param_1 + 0xe8);
      *param_3 = *param_3 + 4;
      *piVar1 = *piVar1 + 1;
      *(int *)*param_3 = *(int *)(param_1 + 0xe8) + 1;
      *param_3 = *param_3 + 4;
      *piVar1 = *piVar1 + 1;
      *(float *)*param_2 = fVar23;
      *(float *)(*param_2 + 4) = fVar12;
      *param_2 = *param_2 + 8;
      *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
      *(float *)*param_2 = fVar4 + fVar15 * fVar3;
      *(float *)(*param_2 + 4) = fVar22 + fVar16 * fVar3;
      *param_2 = *param_2 + 8;
      iVar2 = *(int *)(param_1 + 0xe8) + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(int *)(param_1 + 0xe8) = iVar2;
      *(int *)*param_3 = iVar2;
      *param_3 = *param_3 + 4;
      *piVar1 = *piVar1 + 1;
      *(int *)*param_3 = *(int *)(param_1 + 0xe8) + 1;
      *param_3 = *param_3 + 4;
      *piVar1 = *piVar1 + 1;
      *(float *)*param_2 = fVar8;
      *(float *)(*param_2 + 4) = fVar9;
      *param_2 = *param_2 + 8;
      *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
      *(float *)*param_2 = fVar4;
      *(float *)(*param_2 + 4) = fVar22;
      *param_2 = *param_2 + 8;
      iVar2 = *(int *)(param_1 + 0xe8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(int *)(param_1 + 0xe8) = iVar2 + 1;
      if ((param_6 & 1) != 0) { // [自动静态注释] 条件判断/分支
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      *(int *)*param_3 = iVar2;
      *param_3 = *param_3 + 4;
      iVar2 = *(int *)(param_1 + 0xe8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 1;
    } // [自动静态注释] 作用域/控制流边界
    *(int *)*param_3 = iVar2;
    *param_3 = *param_3 + 4;
    *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 1;
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



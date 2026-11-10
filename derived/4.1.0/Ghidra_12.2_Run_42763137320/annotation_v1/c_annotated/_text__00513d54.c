/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00413D54
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00513d54; name: FUN_.text__00513d54
 */


void FUN__text__00513d54(undefined8 param_1,int param_2,int param_3,long param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  float *pfVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar15; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar4 = param_4 + (long)param_2 * 0x28; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(int *)(param_4 + (long)param_2 * 4) = param_3;
  piVar3 = (int *)(param_4 + (long)param_3 * 4 + 0x4c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar5 = param_4 + (long)param_3 * 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pfVar1 = (float *)(lVar5 + 0x54); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*piVar3 == 0) { // [自动静态注释] 条件判断/分支
    uVar2 = *(undefined8 *)(lVar4 + 0x90); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar6 = *(undefined8 *)(lVar4 + 0xa0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(lVar5 + 0x5c) = *(undefined8 *)(lVar4 + 0x98);
    *(undefined8 *)(lVar5 + 100) = uVar6;
    *(undefined8 *)pfVar1 = uVar2;
    lVar4 = param_4 + (long)param_3 * 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar11 = *(float *)(lVar5 + 0x5c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar10 = *pfVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar8 = *(float *)(lVar5 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar12 = *(float *)(lVar4 + 0x68); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar13 = *(float *)(lVar4 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar9 = *(float *)(lVar4 + 100); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar7 = param_4 + (long)param_3 * 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar10 = (float)NEON_fminnm(*(undefined4 *)(lVar4 + 0x90),*pfVar1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar8 = (float)NEON_fminnm(*(undefined4 *)(lVar4 + 0x94),*(undefined4 *)(lVar5 + 0x58)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar13 = *(float *)(lVar4 + 0x9c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar11 = (float)NEON_fminnm(*(undefined4 *)(lVar4 + 0x98),*(undefined4 *)(lVar5 + 0x5c)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar15 = *(float *)(lVar7 + 100); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar12 = *(float *)(lVar4 + 0xa4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar14 = *(float *)(lVar7 + 0x68); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar9 = *(float *)(lVar4 + 0xa0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(float *)(lVar4 + 0xa0) <= fVar15) { // [自动静态注释] 条件判断/分支
      fVar9 = fVar15; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *pfVar1 = fVar10;
    *(float *)(lVar5 + 0x58) = fVar8;
    if (fVar12 <= fVar14) { // [自动静态注释] 条件判断/分支
      fVar12 = fVar14; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *(float *)(lVar5 + 0x5c) = fVar11;
    *(float *)(lVar5 + 0x60) = fVar13;
    *(float *)(lVar5 + 100) = fVar9;
    *(float *)(lVar5 + 0x68) = fVar12;
  } // [自动静态注释] 作用域/控制流边界
  fVar10 = (fVar13 - fVar10) * 0.5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar9 = (fVar9 - fVar8) * 0.5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar12 = (fVar12 - fVar11) * 0.5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar9 = fVar10 * fVar10 + fVar9 * fVar9 + fVar12 * fVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(float *)(param_4 + (long)param_3 * 4 + 0x84) = fVar9 * 4.1887903 * SQRT(fVar9);
  *piVar3 = *piVar3 + 1;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



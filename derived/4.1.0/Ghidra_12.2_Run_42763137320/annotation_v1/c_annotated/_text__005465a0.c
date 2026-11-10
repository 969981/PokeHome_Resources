/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004465A0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005465a0; name: FUN_.text__005465a0
 */


void FUN__text__005465a0(undefined8 param_1,int param_2,int param_3,long param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  double *pdVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar15; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar16; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar7 = param_4 + (long)param_2 * 0x40; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(int *)(param_4 + (long)param_2 * 4) = param_3;
  piVar5 = (int *)(param_4 + (long)param_3 * 4 + 0x4c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar6 = param_4 + (long)param_3 * 0x30; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pdVar1 = (double *)(lVar6 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*piVar5 == 0) { // [自动静态注释] 条件判断/分支
    uVar2 = *(undefined8 *)(lVar7 + 0xd8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = *(undefined8 *)(lVar7 + 0xe8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = *(undefined8 *)(lVar7 + 0xf0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(lVar6 + 0x70) = *(undefined8 *)(lVar7 + 0xe0);
    *(undefined8 *)(lVar6 + 0x78) = uVar3;
    *(undefined8 *)(lVar6 + 0x80) = uVar4;
    dVar10 = *(double *)(lVar7 + 200); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = *(undefined8 *)(lVar7 + 0xd0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(lVar6 + 0x68) = uVar2;
    dVar12 = *(double *)(lVar6 + 0x68); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *pdVar1 = dVar10;
    *(undefined8 *)(lVar6 + 0x60) = uVar3;
    lVar7 = param_4 + (long)param_3 * 0x30; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar13 = *(double *)(lVar7 + 0x80); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar14 = *(double *)(lVar7 + 0x70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar10 = *(double *)(lVar7 + 0x78); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar11 = *pdVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar9 = *(double *)(lVar6 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar8 = param_4 + (long)param_3 * 0x30; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar11 = (double)NEON_fminnm(*(double *)(lVar7 + 200),*pdVar1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar9 = (double)NEON_fminnm(*(undefined8 *)(lVar7 + 0xd0),*(undefined8 *)(lVar6 + 0x60)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar14 = *(double *)(lVar7 + 0xe0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar12 = (double)NEON_fminnm(*(undefined8 *)(lVar7 + 0xd8),*(undefined8 *)(lVar6 + 0x68)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar16 = *(double *)(lVar8 + 0x78); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar13 = *(double *)(lVar7 + 0xf0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar15 = *(double *)(lVar8 + 0x80); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar10 = *(double *)(lVar7 + 0xe8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(double *)(lVar7 + 0xe8) <= dVar16) { // [自动静态注释] 条件判断/分支
      dVar10 = dVar16; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *pdVar1 = dVar11;
    *(double *)(lVar6 + 0x60) = dVar9;
    if (dVar13 <= dVar15) { // [自动静态注释] 条件判断/分支
      dVar13 = dVar15; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *(double *)(lVar6 + 0x68) = dVar12;
    *(double *)(lVar6 + 0x70) = dVar14;
    *(double *)(lVar6 + 0x78) = dVar10;
    *(double *)(lVar6 + 0x80) = dVar13;
  } // [自动静态注释] 作用域/控制流边界
  dVar11 = (dVar14 - dVar11) * 0.5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar10 = (dVar10 - dVar9) * 0.5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar13 = (dVar13 - dVar12) * 0.5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar10 = dVar11 * dVar11 + dVar10 * dVar10 + dVar13 * dVar13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(double *)(param_4 + (long)param_3 * 8 + 0xb8) = dVar10 * 4.188790204786391 * SQRT(dVar10);
  *piVar5 = *piVar5 + 1;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



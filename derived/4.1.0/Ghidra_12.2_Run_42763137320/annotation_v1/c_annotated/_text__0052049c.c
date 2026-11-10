/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0042049C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0052049c; name: FUN_.text__0052049c
 */


undefined1  [16] FUN__text__0052049c(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auVar4 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar15; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar16; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar17; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar19; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  fVar2 = *(float *)(param_1 + 0xa8) * 0.5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar1 = *(long *)(param_1 + 0x160); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar18 = *(double *)(lVar1 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar7 = *(float *)(lVar1 + 0x38) * // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          (*(float *)(param_1 + 0x5c) + fVar2 * *(float *)(param_1 + 0x68)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  fVar5 = *(float *)(lVar1 + 0x3c) * // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          (*(float *)(param_1 + 0x60) + fVar2 * *(float *)(param_1 + 0x6c)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  fVar2 = *(float *)(lVar1 + 0x40) * // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          (*(float *)(param_1 + 100) + fVar2 * *(float *)(param_1 + 0x70)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  fVar9 = *(float *)(lVar1 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar11 = *(float *)(lVar1 + 0x1c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar14 = *(float *)(lVar1 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar12 = *(float *)(lVar1 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar16 = *(double *)(lVar1 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar17 = *(double *)(lVar1 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar15 = fVar12 * fVar7 + fVar5 * fVar9 + fVar2 * fVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar19 = fVar14 * fVar14 - (fVar12 * fVar12 + fVar9 * fVar9 + fVar11 * fVar11); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar10 = (fVar11 * fVar7 - fVar2 * fVar12) * fVar14 + fVar9 * fVar15; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar13 = (fVar9 * fVar2 - fVar11 * fVar5) * fVar14 + fVar12 * fVar15; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar9 = (fVar12 * fVar5 - fVar9 * fVar7) * fVar14 + fVar11 * fVar15; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar5 = fVar10 + fVar10 + fVar5 * fVar19; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar6 = (double)(ulong)(uint)fVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar7 = fVar13 + fVar13 + fVar7 * fVar19; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar8 = (double)(ulong)(uint)fVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar3 = (double)FUN__text__00520320(); // [自动静态注释] 调用尚未恢复正式名称的函数
  dVar3 = (dVar16 - dVar3) + (double)fVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar6 = (dVar17 - dVar6) + (double)fVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar8 = (dVar18 - dVar8) + (double)(fVar9 + fVar9 + fVar2 * fVar19); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar6 = SQRT(dVar3 * dVar3 + dVar6 * dVar6 + dVar8 * dVar8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (dVar6 == 0.0) { // [自动静态注释] 条件判断/分支
    return ZEXT816(0); // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  auVar4._0_8_ = dVar3 * (1.0 / dVar6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  auVar4._8_8_ = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return auVar4; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



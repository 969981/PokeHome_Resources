/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0036FAE8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0046fae8; name: FUN_.text__0046fae8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0046fae8(long param_1,undefined4 *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float __x; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar5 = *(long *)(param_1 + 0xa8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar5 == 0) goto LAB__text__0046fcbc; // [自动静态注释] 条件判断/分支
  __x = *(float *)(lVar5 + 0x24); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar8 = *(undefined4 *)(lVar5 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar2 = *(int *)(lVar5 + 0x2c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar6 = *(undefined8 *)(lVar5 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar7 = *(undefined8 *)(lVar5 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(lVar5 + 0x20);
  *(undefined8 *)(param_1 + 0x118) = uVar7;
  *(undefined4 *)(param_1 + 0x128) = uVar8;
  *(int *)(param_1 + 300) = iVar2;
  *(undefined8 *)(param_1 + 0x130) = uVar6;
  *(float *)(param_1 + 0x124) = __x;
  if (iVar2 == 0) { // [自动静态注释] 条件判断/分支
    fVar13 = 6.2831855; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__0046fb5c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    __x = fmodf(__x,fVar13); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(float *)(param_1 + 0x124) = __x;
  } // [自动静态注释] 作用域/控制流边界
  else if (iVar2 != 5) { // [自动静态注释] 条件判断/分支
    fVar13 = 1.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    goto LAB__text__0046fb5c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  uVar3 = _DAT_008ab030; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(char *)(param_1 + 0x138) == '\0') goto LAB__text__0046fcbc; // [自动静态注释] 条件判断/分支
  fVar13 = *(float *)(param_1 + 0x10c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (fVar13 == 0.0) { // [自动静态注释] 条件判断/分支
    fVar12 = *(float *)(param_1 + 0x108); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar9 = 1.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar13 = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar11 = (float)_DAT_008ab030; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (fVar12 < fVar11) goto LAB__text__0046fba4; // [自动静态注释] 条件判断/分支
LAB__text__0046fc38: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    fVar12 = 1.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar4 = *(int *)(param_1 + 0x104); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(param_1 + 0x128) = 0x3f800000;
    if (iVar4 != 0) goto LAB__text__0046fc48; // [自动静态注释] 条件判断/分支
LAB__text__0046fc60: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(float *)(param_1 + 0x128) = fVar12 * 6.2831855;
    *(float *)(param_1 + 0x11c) = fVar9;
    *(float *)(param_1 + 0x120) = fVar13;
    if (iVar2 != iVar4) goto LAB__text__0046fc84; // [自动静态注释] 条件判断/分支
LAB__text__0046fc58: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    iVar4 = iVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    dVar14 = (double)_DAT_008ab030; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar12 = *(float *)(param_1 + 0x108); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar10 = (double)NEON_fminnm((double)fVar12,dVar14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar10 = log((dVar14 * 0.5) / dVar10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar10 = exp(-((double)fVar13 * dVar10)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar10 = cos((dVar14 * 3.141592653589793 * dVar10) / dVar14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar10 = 2.0 - dVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar13 = (float)(SQRT(dVar10 * dVar10 + -1.0) - dVar10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar9 = fVar13 + 1.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar11 = (float)uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (fVar11 <= fVar12) goto LAB__text__0046fc38; // [自动静态注释] 条件判断/分支
LAB__text__0046fba4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    fVar12 = fVar12 / fVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar4 = *(int *)(param_1 + 0x104); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(float *)(param_1 + 0x128) = fVar12;
    if (iVar4 == 0) goto LAB__text__0046fc60; // [自动静态注释] 条件判断/分支
LAB__text__0046fc48: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(float *)(param_1 + 0x11c) = fVar9;
    *(float *)(param_1 + 0x120) = fVar13;
    if (iVar2 == iVar4) goto LAB__text__0046fc58; // [自动静态注释] 条件判断/分支
LAB__text__0046fc84: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if ((iVar4 == 0) || (iVar2 == 0)) { // [自动静态注释] 条件判断/分支
      fVar13 = 0.15915494; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (iVar2 != 0) { // [自动静态注释] 条件判断/分支
        fVar13 = 6.2831855; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      *(float *)(param_1 + 0x124) = __x * fVar13;
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  *(int *)(param_1 + 300) = iVar4;
  *(undefined1 *)(param_1 + 0x138) = 0;
LAB__text__0046fcbc: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  param_2[6] = *(undefined4 *)(param_1 + 0xf8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_2[7] = *(undefined4 *)(param_1 + 0xfc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_2[8] = *(undefined4 *)(param_1 + 0x100); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_2[9] = *(undefined4 *)(param_1 + 0x104); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_2[10] = *(undefined4 *)(param_1 + 0x108); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_2[0xb] = *(undefined4 *)(param_1 + 0x10c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_2[0xc] = *(undefined4 *)(param_1 + 0x110); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar6 = *(undefined8 *)(param_1 + 0x118); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar7 = *(undefined8 *)(param_1 + 0x120); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = *(undefined8 *)(param_1 + 0x130); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_2 + 0x12) = *(undefined8 *)(param_1 + 0x128);
  *(undefined8 *)(param_2 + 0x14) = uVar1;
  *(undefined8 *)(param_2 + 0xe) = uVar6;
  *(undefined8 *)(param_2 + 0x10) = uVar7;
  *param_2 = *(undefined4 *)(param_1 + 0xc0);
  param_2[3] = *(undefined4 *)(param_1 + 0xb8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_2[2] = *(undefined4 *)(param_1 + 0xb4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_2[1] = *(undefined4 *)(param_1 + 0xb0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_2[4] = *(undefined4 *)(param_1 + 200); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_2[5] = *(undefined4 *)(param_1 + 0xd4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



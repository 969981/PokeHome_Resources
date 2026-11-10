/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0042AA30
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0052aa30; name: FUN_.text__0052aa30
 */


void FUN__text__0052aa30(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint *param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        uint *param_5,undefined8 param_6) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  double *pdVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double *pdVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar6 = param_4[0x3e]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_5[0x3e] != 0) { // [自动静态注释] 条件判断/分支
    uVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    pdVar1 = (double *)(param_4 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar6 != 0) { // [自动静态注释] 条件判断/分支
      pdVar1 = (double *)(param_4 + (ulong)(uVar6 - 1) * 6 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    pdVar5 = (double *)(param_5 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar7 = pdVar1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar9 = pdVar1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar10 = *pdVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      if (7 < (uint)(uVar4 + uVar6)) break; // [自动静态注释] 条件判断/分支
      dVar11 = pdVar5[-2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      dVar12 = pdVar5[-1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar2 = uVar4 + uVar6 & 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      dVar13 = *pdVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(double *)(param_4 + uVar2 * 6 + 0xc) = dVar13;
      *(double *)(param_4 + uVar2 * 6 + 8) = dVar11;
      *(double *)(param_4 + uVar2 * 6 + 10) = dVar12;
      uVar6 = param_4[0x3e]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar8 = (float)param_4[0x40]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      iVar3 = (int)uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar4 = uVar4 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(param_4 + (ulong)(iVar3 + uVar6) * 2 + 0x4e) = param_6;
      param_4[0x40] = // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
           (uint)(fVar8 + (float)SQRT((dVar11 - dVar10) * (dVar11 - dVar10) + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                                      (dVar12 - dVar9) * (dVar12 - dVar9) + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                                      (dVar13 - dVar7) * (dVar13 - dVar7))); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      pdVar5 = pdVar5 + 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      dVar7 = dVar13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      dVar9 = dVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      dVar10 = dVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (uVar4 < param_5[0x3e]); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)(param_4 + 0x38) = param_1;
  *(undefined8 *)(param_4 + 0x3a) = param_2;
  *(undefined8 *)(param_4 + 0x3c) = param_3;
  uVar6 = param_5[0x3e] + uVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (7 < uVar6) { // [自动静态注释] 条件判断/分支
    uVar6 = 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  param_4[0x3e] = uVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar8 = (float)param_5[0x42]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((float)param_5[0x42] <= (float)param_4[0x42]) { // [自动静态注释] 条件判断/分支
    fVar8 = (float)param_4[0x42]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  param_4[0x42] = (uint)fVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar8 = (float)param_5[0x43]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((float)param_5[0x43] <= (float)param_4[0x43]) { // [自动静态注释] 条件判断/分支
    fVar8 = (float)param_4[0x43]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  param_4[0x43] = (uint)fVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar6 = NEON_fminnm(param_5[0x44],param_4[0x44]); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_4[0x44] = uVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar6 = *param_5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar6 != 0) { // [自动静态注释] 条件判断/分支
    if (*param_4 != 0) { // [自动静态注释] 条件判断/分支
      uVar6 = (((*param_4 * 0x1000193 ^ uVar6 & 0xff) * 0x1000193 ^ uVar6 >> 8 & 0xff) * 0x1000193 ^ // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              uVar6 >> 0x10 & 0xff) * 0x1000193 ^ uVar6 >> 0x18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    *param_4 = uVar6;
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



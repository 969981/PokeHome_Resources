/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0042ACF0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0052acf0; name: FUN_.text__0052acf0
 */


undefined1  [16] // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
FUN__text__0052acf0(uint *param_1,double *param_2,undefined8 param_3,undefined8 param_4,long param_5 // [自动静态注释] 调用尚未恢复正式名称的函数
                   ) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  double *pdVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auVar7 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double local_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dStack_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double local_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_58 = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_50 = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_48 = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__00520ce4(param_5,param_2,param_3,&local_58); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar4 = *(undefined8 *)(param_5 + 0x70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar13 = (float)param_1[0x40]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = 0x50c5d1f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*param_1 != 0) { // [自动静态注释] 条件判断/分支
    uVar2 = *param_1 * 0x1000193; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  uVar3 = (uint)uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar6 = (uint)((ulong)uVar4 >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = (((((((uVar2 ^ uVar3 & 0xff) * 0x1000193 ^ uVar3 >> 8 & 0xff) * 0x1000193 ^
                 uVar3 >> 0x10 & 0xff) * 0x1000193 ^ uVar3 >> 0x18) * 0x1000193 ^ uVar6 & 0xff) * // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
               0x1000193 ^ uVar6 >> 8 & 0xff) * 0x1000193 ^ (ushort)((ulong)uVar4 >> 0x30) & 0xff) * // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
             0x1000193 ^ (uint)(byte)((ulong)uVar4 >> 0x38); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar2 = param_1[0x3e]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pdVar1 = (double *)(param_1 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar2 != 0) { // [自动静态注释] 条件判断/分支
    pdVar1 = (double *)(param_1 + (ulong)(uVar2 - 1) * 6 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  dVar9 = pdVar1[1] - local_50; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar10 = *pdVar1 - local_58; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar8 = pdVar1[2] - local_48; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar11 = (float)SQRT(dVar10 * dVar10 + dVar9 * dVar9 + dVar8 * dVar8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (fVar11 <= 0.0) { // [自动静态注释] 条件判断/分支
    param_1[0x44] = 0x42480000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    dVar12 = (double)(fVar13 + fVar11) / (double)fVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_70 = local_58 + dVar10 * dVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dStack_68 = local_50 + dVar9 * dVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_60 = local_48 + dVar8 * dVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar5 = (float)FUN__text__00521144(param_5,&local_70); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar2 = param_1[0x3e]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar6 = NEON_fminnm(fVar5 * 15.915494,param_1[0x44]); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[0x44] = uVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (uVar2 < 8) { // [自动静态注释] 条件判断/分支
    param_1[0x40] = (uint)(fVar13 + fVar11); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_2 = &local_58; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(double *)(param_1 + (ulong)uVar2 * 6 + 8) = local_58;
    *(double *)(param_1 + (ulong)uVar2 * 6 + 10) = local_50;
    *(double *)(param_1 + (ulong)uVar2 * 6 + 0xc) = local_48;
    uVar2 = param_1[0x3e]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_1 + (ulong)uVar2 * 2 + 0x4e) = param_4;
    uVar4 = *(undefined8 *)(param_5 + 0x70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[0x3e] = uVar2 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_1 + (ulong)uVar2 * 2 + 0x5e) = uVar4;
  } // [自动静态注释] 作用域/控制流边界
  auVar7._0_8_ = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  auVar7._8_8_ = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return auVar7; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



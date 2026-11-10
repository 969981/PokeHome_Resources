/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00416598
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00516598; name: FUN_.text__00516598
 */


void FUN__text__00516598(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3, // [自动静态注释] 调用尚未恢复正式名称的函数
                        undefined8 *param_4) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  undefined4 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
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
  
  uVar2 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar3 = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar4 = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar5 = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar8 = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = uVar2;
  uVar1 = *(undefined4 *)(param_3 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)((long)param_1 + 0xc) = *param_3;
  *(undefined4 *)((long)param_1 + 0x14) = uVar1;
  fVar11 = *(float *)((long)param_1 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar12 = *(float *)(param_1 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar13 = *(float *)((long)param_1 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar14 = SQRT(fVar11 * fVar11 + fVar12 * fVar12 + fVar13 * fVar13); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(float *)(param_1 + 3) = fVar14;
  uVar1 = *(undefined4 *)(param_4 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)((long)param_1 + 0x1c) = *param_4;
  *(undefined4 *)((long)param_1 + 0x24) = uVar1;
  fVar6 = *(float *)((long)param_1 + 0x1c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar7 = *(float *)(param_1 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar9 = *(float *)((long)param_1 + 0x24); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar10 = SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fVar9 * fVar9); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(float *)(param_1 + 5) = fVar10;
  if (fVar14 != 0.0) { // [自动静态注释] 条件判断/分支
    fVar14 = 1.0 / fVar14; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar4 = fVar11 * fVar14; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar5 = fVar12 * fVar14; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar8 = fVar13 * fVar14; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  fVar14 = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(float *)((long)param_1 + 0xc) = fVar4;
  *(float *)(param_1 + 2) = fVar5;
  fVar11 = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(float *)((long)param_1 + 0x14) = fVar8;
  if (fVar10 != 0.0) { // [自动静态注释] 条件判断/分支
    fVar10 = 1.0 / fVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar3 = fVar6 * fVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar14 = fVar7 * fVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar11 = fVar9 * fVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  fVar6 = fVar11 * fVar5 - fVar14 * fVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(float *)((long)param_1 + 0x1c) = fVar3;
  *(float *)(param_1 + 4) = fVar14;
  fVar7 = fVar3 * fVar8 - fVar11 * fVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(float *)((long)param_1 + 0x24) = fVar11;
  fVar4 = fVar14 * fVar4 - fVar3 * fVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar3 = SQRT(fVar4 * fVar4 + fVar6 * fVar6 + fVar7 * fVar7); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (fVar3 == 0.0) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)((long)param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 6) = 0;
    *(undefined4 *)((long)param_1 + 0x34) = 0;
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  fVar3 = 1.0 / fVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(float *)((long)param_1 + 0x2c) = fVar6 * fVar3;
  *(float *)(param_1 + 6) = fVar7 * fVar3;
  *(float *)((long)param_1 + 0x34) = fVar4 * fVar3;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



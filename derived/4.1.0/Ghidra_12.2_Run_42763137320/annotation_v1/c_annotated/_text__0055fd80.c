/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0045FD80
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0055fd80; name: FUN_.text__0055fd80
 */


void FUN__text__0055fd80(long param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  if (param_2 != 0) { // [自动静态注释] 条件判断/分支
    fVar2 = (float)NEON_fminnm(*(undefined4 *)(param_2 + 0x34),0x41c00000); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (fVar2 <= -96.0) { // [自动静态注释] 条件判断/分支
      fVar2 = -96.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    fVar2 = exp2f(fVar2 * 0.1660964); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(float *)(param_1 + 0x40) != fVar2) { // [自动静态注释] 条件判断/分支
      *(float *)(param_1 + 0x40) = fVar2;
      *(float *)(param_1 + 0x44) = fVar2;
      *(undefined4 *)(param_1 + 0x3c) = 0;
    } // [自动静态注释] 作用域/控制流边界
    fVar2 = (float)NEON_fminnm(*(undefined4 *)(param_2 + 0x48),0x41c00000); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (fVar2 <= -96.0) { // [自动静态注释] 条件判断/分支
      fVar2 = -96.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    fVar2 = exp2f(fVar2 * 0.1660964); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(float *)(param_1 + 0x80) != fVar2) { // [自动静态注释] 条件判断/分支
      *(float *)(param_1 + 0x80) = fVar2;
      *(float *)(param_1 + 0x84) = fVar2;
      *(undefined4 *)(param_1 + 0x7c) = 0;
    } // [自动静态注释] 作用域/控制流边界
    fVar2 = (float)NEON_fminnm(*(undefined4 *)(param_2 + 0x1c),0x41c00000); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (fVar2 <= -96.0) { // [自动静态注释] 条件判断/分支
      fVar2 = -96.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    fVar2 = exp2f(fVar2 * 0.1660964); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(float *)(param_1 + 0x9c) != fVar2) { // [自动静态注释] 条件判断/分支
      *(float *)(param_1 + 0x9c) = fVar2;
      *(float *)(param_1 + 0xa0) = fVar2;
      *(undefined4 *)(param_1 + 0x98) = 0;
    } // [自动静态注释] 作用域/控制流边界
    fVar2 = (float)NEON_fminnm(*(undefined4 *)(param_2 + 0x14),0x41c00000); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (fVar2 <= -96.0) { // [自动静态注释] 条件判断/分支
      fVar2 = -96.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    fVar2 = exp2f(fVar2 * 0.1660964); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(float *)(param_1 + 0xa8) != fVar2) { // [自动静态注释] 条件判断/分支
      *(float *)(param_1 + 0xa8) = fVar2;
      *(float *)(param_1 + 0xac) = fVar2;
      *(undefined4 *)(param_1 + 0xa4) = 0;
    } // [自动静态注释] 作用域/控制流边界
    iVar1 = *(int *)(param_2 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (0xe0f < iVar1) { // [自动静态注释] 条件判断/分支
      iVar1 = 0xe10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    if (iVar1 < -0xe0f) { // [自动静态注释] 条件判断/分支
      iVar1 = -0xe10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    fVar2 = exp2f((float)iVar1 * 0.00083333335); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(float *)(param_1 + 0x34) != fVar2) { // [自动静态注释] 条件判断/分支
      *(float *)(param_1 + 0x34) = fVar2;
      *(float *)(param_1 + 0x38) = fVar2;
      *(undefined4 *)(param_1 + 0x30) = 0;
    } // [自动静态注释] 作用域/控制流边界
    iVar1 = *(int *)(param_2 + 0x44); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (0xe0f < iVar1) { // [自动静态注释] 条件判断/分支
      iVar1 = 0xe10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    if (iVar1 < -0xe0f) { // [自动静态注释] 条件判断/分支
      iVar1 = -0xe10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    fVar2 = exp2f((float)iVar1 * 0.00083333335); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(float *)(param_1 + 0x74) != fVar2) { // [自动静态注释] 条件判断/分支
      *(float *)(param_1 + 0x74) = fVar2;
      *(float *)(param_1 + 0x78) = fVar2;
      *(undefined4 *)(param_1 + 0x70) = 0;
    } // [自动静态注释] 作用域/控制流边界
    fVar2 = *(float *)(param_2 + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(float *)(param_1 + 0x4c) != fVar2) { // [自动静态注释] 条件判断/分支
      *(float *)(param_1 + 0x4c) = fVar2;
      *(float *)(param_1 + 0x50) = fVar2;
      *(undefined4 *)(param_1 + 0x48) = 0;
    } // [自动静态注释] 作用域/控制流边界
    fVar2 = *(float *)(param_2 + 0x4c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(float *)(param_1 + 0x8c) != fVar2) { // [自动静态注释] 条件判断/分支
      *(float *)(param_1 + 0x8c) = fVar2;
      *(float *)(param_1 + 0x90) = fVar2;
      *(undefined4 *)(param_1 + 0x88) = 0;
    } // [自动静态注释] 作用域/控制流边界
    fVar3 = *(float *)(param_2 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar2 = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((0.0 <= fVar3) && (fVar2 = 100.0, fVar3 <= 100.0)) { // [自动静态注释] 条件判断/分支
      fVar2 = fVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    if (*(float *)(param_1 + 0xb4) != fVar2) { // [自动静态注释] 条件判断/分支
      *(float *)(param_1 + 0xb4) = fVar2;
      *(float *)(param_1 + 0xb8) = fVar2;
      *(undefined4 *)(param_1 + 0xb0) = 0;
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



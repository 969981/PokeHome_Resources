/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0037D5A8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047d5a8; name: FUN_.text__0047d5a8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__0047d5a8(long param_1,float *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uStack_11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar1 = *(undefined8 *)(param_2 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)param_2;
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = *(undefined8 *)(param_2 + 6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = *(undefined8 *)(param_2 + 10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x88) = uVar3;
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  *(undefined8 *)(param_1 + 0x78) = uVar2;
  fVar4 = param_2[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar5 = param_2[5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar7 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar6 = param_2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar8 = param_2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar9 = param_2[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(float *)(param_1 + 0x3c) = fVar8 * fVar4 - fVar6 * fVar5;
  *(float *)(param_1 + 0x40) = fVar7 * fVar5 - fVar9 * fVar8;
  *(float *)(param_1 + 0x44) = fVar9 * fVar6 - fVar7 * fVar4;
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 100);
  FUN__text__0044b8a0(_DAT_008a4480,*(undefined8 *)(*(long *)(param_1 + 8) + 0x58),&uStack_11); // [自动静态注释] 调用尚未恢复正式名称的函数
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



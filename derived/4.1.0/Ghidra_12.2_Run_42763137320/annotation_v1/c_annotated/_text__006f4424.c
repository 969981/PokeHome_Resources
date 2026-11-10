/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005F4424
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006f4424; name: FUN_.text__006f4424
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006f4424(long param_1,undefined8 param_2,undefined1 *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  (*(code *)*_DAT_008a7828)(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar6 = FUN__text__006f23b4(param_3[2]); // [自动静态注释] 调用尚未恢复正式名称的函数
  (*(code *)*_DAT_008a7830)(param_1,uVar6); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar6 = FUN__text__006f2330(param_3[1]); // [自动静态注释] 调用尚未恢复正式名称的函数
  (*(code *)*_DAT_008a7838)(param_1,uVar6); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar6 = FUN__text__006f2340(*param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  (*(code *)*_DAT_008a7840)(param_1,uVar6); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  iVar2 = *(int *)(param_3 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar1 = param_1 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(float *)(param_1 + 0x20) = (float)iVar2;
  fVar7 = *(float *)(param_3 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(float *)(param_1 + 0x24) = fVar7;
  fVar8 = *(float *)(param_3 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(float *)(param_1 + 0x28) = fVar8;
  bVar5 = false; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((fVar8 == 0.0) && (bVar5 = false, !NAN(fVar7))) { // [自动静态注释] 条件判断/分支
    bVar5 = fVar7 == 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  uVar6 = 7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (bVar5 && iVar2 == 0) { // [自动静态注释] 条件判断/分支
    uVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  (*DAT_00c608e0)(param_1,uVar6); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_3 + 0x1c);
  (*DAT_00c60808)(lVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  (*DAT_00c60810)(lVar1,(byte)param_3[4] >> 1 & 1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bVar3 = param_3[0x18]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (bVar3 < 2) { // [自动静态注释] 条件判断/分支
    bVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  (*DAT_00c60818)(lVar1,bVar3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  (*DAT_00c60820)(lVar1,param_3[0x1a] & 1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bVar4 = *(byte *)(param_1 + 0x2d); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar3 = (byte)param_3[4] >> 1 & 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(byte *)(param_1 + 0x2d) = bVar4 & 0xfe | bVar3;
  bVar3 = (bVar4 & 0xfc | bVar3 | ((byte)param_3[4] >> 2 & 1) << 1) ^ 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(byte *)(param_1 + 0x2d) = bVar3;
  bVar3 = (bVar3 & 0xf8 | bVar3 & 3 | (param_3[4] & 1) << 2) ^ 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(byte *)(param_1 + 0x2d) = bVar3;
  *(byte *)(param_1 + 0x2d) = bVar3 & 0xf7 | (param_3[6] == '\x01') << 3;
  *(undefined1 *)(param_1 + 0x2c) = 1;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00439D5C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00539d5c; name: FUN_.text__00539d5c
 */


undefined1  [16] // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
FUN__text__00539d5c(undefined8 *param_1,long param_2,long param_3,uint param_4,undefined8 param_5) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_c0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_b8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_b0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_a8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_a0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_98; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_90; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lStack_88; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_80; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float local_78; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte local_74; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte local_73; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *param_1 = param_5;
  uVar3 = (ulong)param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar5 = (float)FUN__text__0047da60(*(undefined8 *)(*(long *)(param_2 + 8) + 0x20)); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (param_4 < *(uint *)(param_3 + 0x80)) { // [自动静态注释] 条件判断/分支
    puVar2 = (undefined8 *)(*(long *)(param_3 + 0x78) + uVar3 * 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    puVar2 = (undefined8 *) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
             (*(long *)(*(long *)(*(long *)(param_3 + 8) + 8) + 0x20) + uVar3 * 0x38 + 0x18); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  uVar7 = *puVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar8 = puVar2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar9 = puVar2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar4 = *(long *)(param_3 + 0x20) + uVar3 * 0x118; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar6 = (float)FUN__text__00509290(param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  bVar1 = FUN__text__00509350(param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_73 = FUN__text__00509374(param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_c0 = *(undefined8 *)(param_2 + 0xe8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_b8 = *(undefined8 *)(param_2 + 0xf0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_74 = bVar1 & 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_73 = local_73 & 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_b0 = *(undefined8 *)(param_2 + 0xf8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_a8 = uVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_a0 = uVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_98 = uVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_90 = lVar4 + 0x78; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lStack_88 = lVar4 + 0x40; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_80 = lVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_78 = fVar6 + fVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__00539e90(param_1,&local_c0,param_2 + 0x58,&local_a8); // [自动静态注释] 调用尚未恢复正式名称的函数
  return ZEXT816(0); // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



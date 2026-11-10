/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0043A11C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0053a11c; name: FUN_.text__0053a11c
 */


undefined1  [16] // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
FUN__text__0053a11c(undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3, // [自动静态注释] 调用尚未恢复正式名称的函数
                   undefined8 *param_4,long param_5,long param_6,long param_7,long param_8, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                   uint param_9) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  byte bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_d0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_c8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_c0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_b8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_b0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_a8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_a0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lStack_98; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_90; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float local_88; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte local_84; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte local_83; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_80 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_78; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *param_4 = *(undefined8 *)(param_7 + 0xb0);
  FUN__text__00521214(param_5,&local_78,auStack_80); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (param_9 < *(uint *)(param_8 + 0x80)) { // [自动静态注释] 条件判断/分支
    puVar2 = (undefined8 *)(*(long *)(param_8 + 0x78) + (ulong)param_9 * 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    puVar2 = (undefined8 *) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
             (*(long *)(*(long *)(*(long *)(param_8 + 8) + 8) + 0x20) + (ulong)param_9 * 0x38 + 0x18 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
             ); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  fVar3 = *(float *)(param_6 + 0x128); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = *puVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar6 = puVar2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar7 = puVar2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar8 = fVar3 + SQRT(*(float *)(param_5 + 0x40) * *(float *)(param_5 + 0x40) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                       *(float *)(param_5 + 0x3c) * *(float *)(param_5 + 0x3c));
  bVar1 = FUN__text__00509350(param_8); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_83 = FUN__text__00509374(param_8); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_84 = bVar1 & 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_83 = local_83 & 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_b8 = uVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_b0 = uVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_a8 = uVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_a0 = param_6 + 0x80; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lStack_98 = param_6 + 0x48; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_90 = param_6 + 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_88 = fVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_d0 = FUN__text__00521904(param_5,(ulong)(local_78 != param_7)); // [自动静态注释] 调用尚未恢复正式名称的函数
  uStack_c8 = CONCAT44(uVar4,fVar3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_c0 = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__00539e90(param_4,&local_d0,param_5 + (ulong)(local_78 != param_7) * 0x90 + 0x418, // [自动静态注释] 调用尚未恢复正式名称的函数
                      &local_b8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return ZEXT816(0); // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



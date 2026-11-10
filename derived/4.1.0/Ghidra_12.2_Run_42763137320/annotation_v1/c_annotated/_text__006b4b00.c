/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005B4B00
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b4b00; name: FUN_.text__006b4b00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006b4b00(long *param_1,ulong *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ulong uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_30; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_28 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (**(code **)(*param_1 + 0x60))(param_1,&local_28); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  local_30 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (**(code **)(*param_1 + 0x68))(param_1,&local_30); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar4 = uRam0000000000724ae8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = _DAT_00724ae0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = uRam0000000000724938; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = _DAT_00724930; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar6 = 1.0 / ((local_30._4_4_ - local_28._4_4_) - local_30._4_4_); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar5 = 1.0 / (((float)local_30 + (float)local_28) - (float)local_30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_2[1] = (ulong)(uint)-(((float)local_30 + (float)local_30 + (float)local_28) * fVar5) << 0x20 // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  ; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *param_2 = (ulong)(uint)(fVar5 + fVar5);
  param_2[3] = (ulong)(uint)-((local_30._4_4_ + (local_30._4_4_ - local_28._4_4_)) * fVar6) << 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_2[2] = (ulong)(uint)(fVar6 + fVar6) << 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_2[5] = uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_2[4] = uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_2[7] = uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_2[6] = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



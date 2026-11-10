/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002B81E8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b81e8; name: FUN_.text__003b81e8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003b81e8(undefined4 param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fStack_4c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uStack_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar1 = _DAT_008a04a8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar3 = *(float *)(param_2 + 0x90); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar5 = *(float *)(param_2 + 0xa0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar2 = (float)(**(code **)(_DAT_008a04a8 + (ulong)*(uint *)(param_2 + 0xb0) * 8))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar4 = *(float *)(param_2 + 0x94); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar6 = *(float *)(param_2 + 0xa4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  _local_50 = CONCAT44(fStack_4c,fVar3 + fVar2 * (fVar5 - fVar3)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar2 = (float)(**(code **)(lVar1 + (ulong)*(uint *)(param_2 + 0xb0) * 8))(param_1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar3 = *(float *)(param_2 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar5 = *(float *)(param_2 + 0xa8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  _local_50 = CONCAT44(fVar4 + fVar2 * (fVar6 - fVar4),local_50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar2 = (float)(**(code **)(lVar1 + (ulong)*(uint *)(param_2 + 0xb0) * 8))(param_1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_48 = (ulong)(uint)(fVar3 + fVar2 * (fVar5 - fVar3)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (**(code **)(**(long **)(param_2 + 0x80) + 0x38))(*(long **)(param_2 + 0x80),&local_50); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



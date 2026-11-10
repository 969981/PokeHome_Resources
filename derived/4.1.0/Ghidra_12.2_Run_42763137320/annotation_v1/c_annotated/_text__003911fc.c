/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002911FC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003911fc; name: FUN_.text__003911fc
 */


uint FUN__text__003911fc(long param_1,ushort param_2,uint param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_2 < 0x402) { // [自动静态注释] 条件判断/分支
    uVar4 = *(uint *)(param_1 + (ulong)param_2 * 0x20 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  iVar3 = FUN__text__005fdad0(); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (iVar3 != 0x2e8) { // [自动静态注释] 条件判断/分支
    uVar1 = param_3 & 0xff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  uVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (1 < iVar3 - 0x298U) { // [自动静态注释] 条件判断/分支
    uVar2 = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return uVar4 >> (ulong)(uVar2 & 0x1f) & 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0000E28C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0010e28c; name: FUN_.text__0010e28c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0010e28c(long param_1,uint param_2,uint param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ulong uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *pcVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((*(uint *)(param_1 + 0x9d8) == param_2) && ((param_3 & 1) == 0)) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  pcVar3 = *(code **)((ulong)param_2 * 0x10 + 0x8aa2b8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = *(ulong *)((ulong)param_2 * 0x10 + 0x8aa2c0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((uVar1 & 1) != 0) { // [自动静态注释] 条件判断/分支
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + ((long)uVar1 >> 1))); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  uVar2 = (*pcVar3)(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__003c8d50(*(undefined8 *)(param_1 + 0x8e8),1); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((*(uint *)(param_1 + 0x9d4) == uVar2) && ((param_3 & 1) == 0)) { // [自动静态注释] 条件判断/分支
    *(uint *)(param_1 + 0x9d8) = param_2;
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  local_38 = *(undefined8 *)(_DAT_0089f828 + (ulong)uVar2 * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__003c7d90(*(undefined8 *)(param_1 + 0x8e8),&local_38); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(uint *)(param_1 + 0x9d4) = uVar2;
  *(uint *)(param_1 + 0x9d8) = param_2;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



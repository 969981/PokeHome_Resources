/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0044DEA4
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0054dea4; name: FUN_.text__0054dea4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0054dea4(long *param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *param_1 = _DAT_008a3a70 + 0x10;
  lVar1 = *(long *)(param_2 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = *(long *)(param_2 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar4 = *(long *)(param_2 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  param_1[5] = lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = *(long *)(param_2 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar3 = *(long *)(param_2 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)((long)param_1 + 0x32) = 1;
  param_1[3] = lVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[4] = lVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)((long)param_1 + 0x2c) = 1;
  param_1[1] = lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[2] = lVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



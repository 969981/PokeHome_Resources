/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005A7FD0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006a7fd0; name: FUN_.text__006a7fd0
 */


void FUN__text__006a7fd0(long *param_1,long param_2,long param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ushort uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *param_1 = param_2 + 0x1c;
  param_1[1] = param_2 + (ulong)*(uint *)(param_2 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = *(ushort *)(param_2 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(ushort *)(param_1 + 2) = uVar1;
  *(undefined2 *)((long)param_1 + 0x12) = *(undefined2 *)(param_2 + 0x12);
  param_1[3] = param_2 + (ulong)*(uint *)(param_2 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[4] = param_2 + (ulong)(*(int *)(param_2 + 0xc) + (uint)uVar1 * 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[5] = param_2 + (ulong)*(uint *)(param_2 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[6] = param_2 + (ulong)*(uint *)(param_2 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[7] = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



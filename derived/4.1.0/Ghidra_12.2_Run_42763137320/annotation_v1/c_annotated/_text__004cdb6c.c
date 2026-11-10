/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003CDB6C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004cdb6c; name: FUN_.text__004cdb6c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__004cdb6c(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar4 = *_DAT_008a45e8 * 0x5851f42d4c957f2d + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *_DAT_008a45e8 = lVar4;
  uVar1 = *(uint *)(param_1 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = (uint)((ulong)lVar4 >> 0x21); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar1 != 0) { // [自动静态注释] 条件判断/分支
    uVar2 = uVar3 / uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return uVar3 - uVar2 * uVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



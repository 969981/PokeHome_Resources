/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005C6E5C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006c6e5c; name: FUN_.text__006c6e5c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006c6e5c(long *param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  FUN__text__006b19a4(); // [自动静态注释] 调用尚未恢复正式名称的函数
  *param_1 = _DAT_008a6910 + 0x10;
  param_1[4] = (long)(param_1 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[5] = (long)(param_1 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__006b2810(param_1,param_2,0,0,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *param_1 = 0x89e688;
  *(undefined4 *)((long)param_1 + 0xd4) = *(undefined4 *)(param_2 + 0xd4);
  *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_2 + 0xd8);
  *(undefined1 *)((long)param_1 + 0xdc) = *(undefined1 *)(param_2 + 0xdc);
  *(undefined1 *)((long)param_1 + 0xdd) = *(undefined1 *)(param_2 + 0xdd);
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



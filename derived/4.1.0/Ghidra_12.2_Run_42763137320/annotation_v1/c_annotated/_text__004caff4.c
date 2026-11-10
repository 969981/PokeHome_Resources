/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003CAFF4
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004caff4; name: FUN_.text__004caff4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__004caff4(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar1 = FUN__text__004319c0(*_DAT_008a4658); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (lVar1 == 0) { // [自动静态注释] 条件判断/分支
    return 2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if (*(long *)(lVar1 + 0x28) == 0) { // [自动静态注释] 条件判断/分支
    *(long *)(lVar1 + 0x20) = param_1;
    *(long *)(lVar1 + 0x28) = param_1;
    *(undefined8 *)(param_1 + 8) = 0;
    return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  *(long *)(param_1 + 8) = *(long *)(lVar1 + 0x28);
  *(long *)(lVar1 + 0x28) = param_1;
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



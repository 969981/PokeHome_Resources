/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005BF7BC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006bf7bc; name: FUN_.text__006bf7bc
 */


void FUN__text__006bf7bc(undefined4 param_1,long param_2,int param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  if (param_3 == 1) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(*(long *)(param_2 + 0x150) + 4) = param_1;
    *(ushort *)(param_2 + 0x114) = *(ushort *)(param_2 + 0x114) | 4;
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if (param_3 == 0) { // [自动静态注释] 条件判断/分支
    **(undefined4 **)(param_2 + 0x150) = param_1;
  } // [自动静态注释] 作用域/控制流边界
  *(ushort *)(param_2 + 0x114) = *(ushort *)(param_2 + 0x114) | 4;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



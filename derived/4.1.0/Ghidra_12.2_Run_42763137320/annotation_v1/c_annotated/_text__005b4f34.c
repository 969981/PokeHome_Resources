/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004B4F34
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005b4f34; name: FUN_.text__005b4f34
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005b4f34(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  FUN__text__006ec5bc(param_1,_DAT_008a0448); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__005b509c(param_1 + 0x48); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__005b509c(param_1 + 0x48); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*(long *)(param_1 + 0x50) != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(*(long *)(param_1 + 0x50) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(undefined8 *)(param_1 + 0x50) = 0;
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__006ec4c8(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003DB9FC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004db9fc; name: FUN_.text__004db9fc
 */


void FUN__text__004db9fc(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  (**(code **)(**(long **)(param_1 + 0xd0) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  (**(code **)(**(long **)(param_1 + 8) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xec) = 0x2b;
  *(undefined8 *)(param_1 + 0xf4) = 0;
  *(undefined1 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xfc) = 0x3f800000ffffffff;
  *(undefined8 *)(param_1 + 0x104) = 0x1ffffffff;
                    /* WARNING: Could not recover jumptable at 0x004dba6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x38))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



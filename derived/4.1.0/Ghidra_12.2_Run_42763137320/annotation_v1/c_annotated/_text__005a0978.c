/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004A0978
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a0978; name: FUN_.text__005a0978
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005a0978(long param_1,long param_2,long param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Could not recover jumptable at 0x005a0994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*_DAT_008a5598) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            (*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_3 + 8), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
             *(undefined8 *)(param_2 + 8));
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



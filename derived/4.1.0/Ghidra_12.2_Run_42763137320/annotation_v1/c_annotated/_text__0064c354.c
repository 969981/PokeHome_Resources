/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0054C354
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0064c354; name: FUN_.text__0064c354
 */


void FUN__text__0064c354(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(long *)(param_1 + 0xce0) != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(*(long *)(param_1 + 0xce0) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(undefined8 *)(param_1 + 0xce0) = 0;
  } // [自动静态注释] 作用域/控制流边界
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0xcc0)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  puVar1 = *(undefined8 **)(param_1 + 0xca0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 0xca0) = 0;
  if (puVar1 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  (**(code **)*puVar1)(puVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    /* WARNING: Could not recover jumptable at 0x0064c3c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xca8) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            (*(long **)(param_1 + 0xca8),puVar1,*(undefined8 *)(param_1 + 0xcb0), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
             *(undefined8 *)(param_1 + 0xcb8));
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



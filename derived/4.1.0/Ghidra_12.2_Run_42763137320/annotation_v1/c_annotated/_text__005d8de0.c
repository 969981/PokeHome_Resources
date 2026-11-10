/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004D8DE0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005d8de0; name: FUN_.text__005d8de0
 */


void FUN__text__005d8de0(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  MutexType *pMVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  pMVar1 = (MutexType *)(param_1 + 0x130); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  nn::os::LockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (*(char *)(param_1 + 0x170) == '\0') { // [自动静态注释] 条件判断/分支
    do { // [自动静态注释] 循环/迭代
      nn::os::WaitConditionVariable((ConditionVariableType *)(param_1 + 0x150),pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } while (*(char *)(param_1 + 0x170) == '\0'); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  nn::os::UnlockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002FCA74
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003fca74; name: FUN_.text__003fca74
 */


undefined4 FUN__text__003fca74(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  MutexType *pMVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(char *)(param_1 + 0xc2) == '\0') { // [自动静态注释] 条件判断/分支
    nn::os::LockMutex((MutexType *)(param_1 + 0x28)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(undefined1 *)(param_1 + 0xc2) = 1;
    *(bool *)(param_1 + 0x6c) =
         *(char *)(param_1 + 0x67) == '\0' && *(char *)(param_1 + 0x68) == '\0';
    FUN__text__003fc6a8(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined1 *)(param_1 + 0xc4) = 1;
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(*(long *)(param_1 + 0x50) + 0x270);
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x28)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    pMVar1 = (MutexType *)(*(long *)(param_1 + 0x50) + 0x1e8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    nn::os::LockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__003fe0c8(*(undefined8 *)(param_1 + 0x50)); // [自动静态注释] 调用尚未恢复正式名称的函数
    nn::os::UnlockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  uVar2 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(char *)(param_1 + 0xc3) != '\0') { // [自动静态注释] 条件判断/分支
    uVar2 = 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



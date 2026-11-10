/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002FB85C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003fb85c; name: FUN_.text__003fb85c
 */


void FUN__text__003fb85c(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  MutexType *pMVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  pMVar3 = (MutexType *)(param_1 + -0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  nn::os::LockMutex(pMVar3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  plVar2 = (long *)(param_1 + -0x70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar1 = (**(code **)(*plVar2 + 0xb8))(plVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (iVar1 == 2) { // [自动静态注释] 条件判断/分支
    FUN__text__003fdc68(plVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
    nn::os::UnlockMutex(pMVar3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__003fe1b0(*(undefined8 *)(param_1 + -0x20),plVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    nn::os::UnlockMutex(pMVar3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Could not recover jumptable at 0x003fb8d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xb8))(plVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



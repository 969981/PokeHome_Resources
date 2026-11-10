/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0029C1D4
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0039c1d4; name: FUN_.text__0039c1d4
 */


undefined8 FUN__text__0039c1d4(long param_1,long *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x170)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (*(long *)(param_1 + 0x150) != 0) { // [自动静态注释] 条件判断/分支
    plVar1 = (long *)FUN__text__0039fa84(); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (*plVar1 == *param_2) { // [自动静态注释] 条件判断/分支
      FUN__text__0039fa88(*(undefined8 *)(param_1 + 0x150)); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar2 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      goto LAB__text__0039c228; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  uVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__0039c228: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x170)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



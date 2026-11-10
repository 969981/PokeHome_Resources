/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003005D8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004005d8; name: FUN_.text__004005d8
 */


bool FUN__text__004005d8(long param_1,long param_2,int param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  bool bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x28)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (param_2 != 0) { // [自动静态注释] 条件判断/分支
    if (param_3 == 1) { // [自动静态注释] 条件判断/分支
      bVar1 = (*(byte *)(param_2 + 0x14) & 7) != 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      bVar1 = false; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__003fb934(param_1,param_2,bVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined8 *)(param_1 + 0xb0) = 0;
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__003fba44(param_1,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x28)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return param_2 != 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002FAC28
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003fac28; name: FUN_.text__003fac28
 */


uint FUN__text__003fac28(long param_1,long *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uStack_31; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_30 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_28 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x1e8)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar2 = (**(code **)(*param_2 + 0x28))(param_2,auStack_28,auStack_30,&uStack_31,1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = (**(code **)(*param_2 + 0x30))(param_2,uVar2,1,0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1e8)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return uVar1 & 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



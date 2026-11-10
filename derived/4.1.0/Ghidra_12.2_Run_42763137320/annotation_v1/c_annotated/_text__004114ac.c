/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003114AC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004114ac; name: FUN_.text__004114ac
 */


void FUN__text__004114ac(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  char cVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(char *)(param_1 + 0x663) == '\x01') { // [自动静态注释] 条件判断/分支
    nn::os::FinalizeEvent((EventType *)(param_1 + 0x650)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    nn::os::FinalizeMutex((MutexType *)(param_1 + 0x628)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    cVar1 = *(char *)(param_1 + 0x5eb); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    nn::os::FinalizeMutex((MutexType *)(param_1 + 0x628)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    cVar1 = *(char *)(param_1 + 0x5eb); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (cVar1 == '\x01') { // [自动静态注释] 条件判断/分支
    nn::os::FinalizeEvent((EventType *)(param_1 + 0x5d8)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    nn::os::FinalizeMutex((MutexType *)(param_1 + 0x5b0)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    cVar1 = *(char *)(param_1 + 0x573); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    nn::os::FinalizeMutex((MutexType *)(param_1 + 0x5b0)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    cVar1 = *(char *)(param_1 + 0x573); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (cVar1 == '\x01') { // [自动静态注释] 条件判断/分支
    nn::os::FinalizeEvent((EventType *)(param_1 + 0x560)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    nn::os::FinalizeMutex((MutexType *)(param_1 + 0x538)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    cVar1 = *(char *)(param_1 + 0x4fb); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    nn::os::FinalizeMutex((MutexType *)(param_1 + 0x538)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    cVar1 = *(char *)(param_1 + 0x4fb); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (cVar1 == '\x01') { // [自动静态注释] 条件判断/分支
    nn::os::FinalizeEvent((EventType *)(param_1 + 0x4e8)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    nn::os::FinalizeMutex((MutexType *)(param_1 + 0x4c0)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    cVar1 = *(char *)(param_1 + 0x483); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    nn::os::FinalizeMutex((MutexType *)(param_1 + 0x4c0)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    cVar1 = *(char *)(param_1 + 0x483); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (cVar1 == '\x01') { // [自动静态注释] 条件判断/分支
    nn::os::FinalizeEvent((EventType *)(param_1 + 0x470)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    nn::os::FinalizeMutex((MutexType *)(param_1 + 0x448)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    cVar1 = *(char *)(param_1 + 0x40b); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    nn::os::FinalizeMutex((MutexType *)(param_1 + 0x448)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    cVar1 = *(char *)(param_1 + 0x40b); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (cVar1 == '\x01') { // [自动静态注释] 条件判断/分支
    nn::os::FinalizeEvent((EventType *)(param_1 + 0x3f8)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    nn::os::FinalizeMutex((MutexType *)(param_1 + 0x3d0)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    cVar1 = *(char *)(param_1 + 0x393); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    nn::os::FinalizeMutex((MutexType *)(param_1 + 0x3d0)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    cVar1 = *(char *)(param_1 + 0x393); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (cVar1 == '\x01') { // [自动静态注释] 条件判断/分支
    nn::os::FinalizeEvent((EventType *)(param_1 + 0x380)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    nn::os::FinalizeMutex((MutexType *)(param_1 + 0x358)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    cVar1 = *(char *)(param_1 + 0x31b); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    nn::os::FinalizeMutex((MutexType *)(param_1 + 0x358)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    cVar1 = *(char *)(param_1 + 0x31b); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (cVar1 == '\x01') { // [自动静态注释] 条件判断/分支
    nn::os::FinalizeEvent((EventType *)(param_1 + 0x308)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    nn::os::FinalizeMutex((MutexType *)(param_1 + 0x2e0)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    cVar1 = *(char *)(param_1 + 0x2a3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    nn::os::FinalizeMutex((MutexType *)(param_1 + 0x2e0)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    cVar1 = *(char *)(param_1 + 0x2a3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (cVar1 == '\x01') { // [自动静态注释] 条件判断/分支
    nn::os::FinalizeEvent((EventType *)(param_1 + 0x290)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    nn::os::FinalizeMutex((MutexType *)(param_1 + 0x268)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    cVar1 = *(char *)(param_1 + 0x22b); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    nn::os::FinalizeMutex((MutexType *)(param_1 + 0x268)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    cVar1 = *(char *)(param_1 + 0x22b); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (cVar1 == '\x01') { // [自动静态注释] 条件判断/分支
    nn::os::FinalizeEvent((EventType *)(param_1 + 0x218)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    nn::os::FinalizeMutex((MutexType *)(param_1 + 0x1f0)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    cVar1 = *(char *)(param_1 + 0x1b3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    nn::os::FinalizeMutex((MutexType *)(param_1 + 0x1f0)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    cVar1 = *(char *)(param_1 + 0x1b3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (cVar1 == '\x01') { // [自动静态注释] 条件判断/分支
    nn::os::FinalizeEvent((EventType *)(param_1 + 0x1a0)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    nn::os::FinalizeMutex((MutexType *)(param_1 + 0x178)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    cVar1 = *(char *)(param_1 + 0x13b); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    nn::os::FinalizeMutex((MutexType *)(param_1 + 0x178)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    cVar1 = *(char *)(param_1 + 0x13b); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (cVar1 == '\x01') { // [自动静态注释] 条件判断/分支
    nn::os::FinalizeEvent((EventType *)(param_1 + 0x128)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    nn::os::FinalizeMutex((MutexType *)(param_1 + 0x100)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    cVar1 = *(char *)(param_1 + 0xc3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    nn::os::FinalizeMutex((MutexType *)(param_1 + 0x100)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    cVar1 = *(char *)(param_1 + 0xc3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (cVar1 == '\x01') { // [自动静态注释] 条件判断/分支
    nn::os::FinalizeEvent((EventType *)(param_1 + 0xb0)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    nn::os::FinalizeMutex((MutexType *)(param_1 + 0x88)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    cVar1 = *(char *)(param_1 + 0x4b); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    nn::os::FinalizeMutex((MutexType *)(param_1 + 0x88)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    cVar1 = *(char *)(param_1 + 0x4b); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (cVar1 == '\x01') { // [自动静态注释] 条件判断/分支
    nn::os::FinalizeEvent((EventType *)(param_1 + 0x38)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    nn::os::FinalizeMutex((MutexType *)(param_1 + 0x10)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x10)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



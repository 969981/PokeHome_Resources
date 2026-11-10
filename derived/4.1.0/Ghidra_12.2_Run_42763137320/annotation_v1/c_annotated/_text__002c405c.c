/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001C405C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002c405c; name: FUN_.text__002c405c
 */


void FUN__text__002c405c(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x3b0)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if ((*(long *)(param_1 + 0x390) != 0) && (*(long *)(param_1 + 0x378) != 0)) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(*(long *)(param_1 + 0x378) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)(param_1 + 0x378) = 0;
  *(undefined8 *)(param_1 + 0x380) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x388) = 0x70f683;
  *(undefined8 *)(param_1 + 0x390) = 0;
  if (*(long *)(param_1 + 0x398) != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(*(long *)(param_1 + 0x398) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)(param_1 + 0x398) = 0;
  *(undefined4 *)(param_1 + 0x3a0) = 0;
  FUN__text__005e8798(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



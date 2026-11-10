/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00208CF8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00308cf8; name: FUN_.text__00308cf8
 */


void FUN__text__00308cf8(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *pcVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x50)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (*(long *)(param_1 + 0x78) == 0) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(param_1 + 0x78) = 0;
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__005d9290(*(long *)(param_1 + 0x78),param_1 + 0x70); // [自动静态注释] 调用尚未恢复正式名称的函数
    lVar1 = *(long *)(param_1 + 0x78); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_1 + 0x78) = 0;
    if (lVar1 != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  lVar1 = *(long *)(param_1 + 0x1b8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0x210) = 0;
  *(undefined2 *)(param_1 + 0x20c) = 0;
  *(undefined4 *)(param_1 + 0x208) = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  if (lVar1 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(**(long **)(param_1 + 0x1c0) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              (*(long **)(param_1 + 0x1c0),lVar1,*(undefined8 *)(param_1 + 0x1c8), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
               *(undefined8 *)(param_1 + 0x1d0));
  } // [自动静态注释] 作用域/控制流边界
  pcVar2 = *(code **)(param_1 + 0x228); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)(param_1 + 0x1f0) = 0;
  *(undefined2 *)(param_1 + 0x214) = 0;
  if (pcVar2 != (code *)0x0) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(param_1 + 0x238) = 0;
    *(undefined8 *)(param_1 + 0x230) = 0;
    *(undefined8 *)(param_1 + 0x228) = 0;
    *(undefined8 *)(param_1 + 0x220) = 0;
    (*pcVar2)(param_1 + 0x240); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  pcVar2 = *(code **)(param_1 + 0x2a8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (pcVar2 != (code *)0x0) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(param_1 + 0x2b8) = 0;
    *(undefined8 *)(param_1 + 0x2b0) = 0;
    *(undefined8 *)(param_1 + 0x2a8) = 0;
    *(undefined8 *)(param_1 + 0x2a0) = 0;
    (*pcVar2)(param_1 + 0x2c0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  nn::os::InitializeLightEvent(param_1 + 0x1d8,0,0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  nn::os::InitializeLightEvent(param_1 + 0x1e4,0,0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x50)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



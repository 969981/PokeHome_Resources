/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00271718
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00371718; name: FUN_.text__00371718
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00371718(long param_1,int param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x158)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if ((*(long *)(param_1 + 0x138) != 0) && (iVar1 = FUN__text__0037a128(), iVar1 == param_2)) { // [自动静态注释] 条件判断/分支
    FUN__text__0037a1ac(*(undefined8 *)(param_1 + 0x138)); // [自动静态注释] 调用尚未恢复正式名称的函数
    lVar2 = *(long *)(param_1 + 0x138); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_1 + 0x138) = 0;
    if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
      if (*(long *)(lVar2 + 8) != 0) { // [自动静态注释] 条件判断/分支
        (**(code **)(*(long *)(*(long *)(lVar2 + 8) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *(undefined8 *)(lVar2 + 8) = 0;
      } // [自动静态注释] 作用域/控制流边界
      (**(code **)(**(long **)(param_1 + 0x140) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                (*(long **)(param_1 + 0x140),lVar2,*(undefined8 *)(param_1 + 0x148), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                 *(undefined8 *)(param_1 + 0x150));
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005daa98(*_DAT_0089f550,param_1 + 0xa8); // [自动静态注释] 调用尚未恢复正式名称的函数
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x158)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



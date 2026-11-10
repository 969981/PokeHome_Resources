/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003BE8A0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004be8a0; name: FUN_.text__004be8a0
 */


void FUN__text__004be8a0(long param_1,int param_2,long param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((param_3 == 0) || (*(long *)(param_1 + 0x50) == param_3)) { // [自动静态注释] 条件判断/分支
    if (param_2 == 2) { // [自动静态注释] 条件判断/分支
      if ((*(int *)(param_1 + 0xa8) != 0) && // [自动静态注释] 条件判断/分支
         (iVar2 = *(int *)(param_1 + 0xa8) + -1, *(int *)(param_1 + 0xa8) = iVar2, iVar2 == 0)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (*(int *)(param_1 + 0x48) != 1) { // [自动静态注释] 条件判断/分支
          FUN__text__004bd630(param_1,0,4); // [自动静态注释] 调用尚未恢复正式名称的函数
        } // [自动静态注释] 作用域/控制流边界
        nn::os::LockMutex((MutexType *)(param_1 + 0x28)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        iVar2 = *(int *)(param_1 + 0xac); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        iVar1 = *(int *)(DAT_00ae9a40 + 0x88); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined4 *)(param_1 + 0xac) = 0;
        *(int *)(param_1 + 0xb0) = (iVar1 - iVar2) + *(int *)(param_1 + 0xb0);
        nn::os::UnlockMutex((MutexType *)(param_1 + 0x28)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    else if (param_2 == 1) { // [自动静态注释] 条件判断/分支
      if ((*(int *)(param_1 + 0x48) != 0) && // [自动静态注释] 条件判断/分支
         (iVar2 = *(int *)(param_1 + 0xa8), *(int *)(param_1 + 0xa8) = iVar2 + 1, iVar2 == 0)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(DAT_00ae9a40 + 0x88);
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    else if (param_2 == 0) { // [自动静态注释] 条件判断/分支
      *(undefined4 *)(param_1 + 0x48) = 0;
      *(undefined4 *)(param_1 + 0xa8) = 0;
      nn::os::LockMutex((MutexType *)(param_1 + 0x28)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined8 *)(param_1 + 0x98) = 0;
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x28)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



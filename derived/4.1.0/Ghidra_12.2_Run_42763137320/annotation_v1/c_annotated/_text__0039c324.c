/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0029C324
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0039c324; name: FUN_.text__0039c324
 */


void FUN__text__0039c324(long param_1,long *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *pcVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x170)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (*(long *)(param_1 + 0x150) != 0) { // [自动静态注释] 条件判断/分支
    plVar1 = (long *)FUN__text__0039fa84(); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (*plVar1 == *param_2) { // [自动静态注释] 条件判断/分支
      FUN__text__0039fb04(*(undefined8 *)(param_1 + 0x150)); // [自动静态注释] 调用尚未恢复正式名称的函数
      lVar3 = *(long *)(param_1 + 0x150); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(param_1 + 0x150) = 0;
      if (lVar3 != 0) { // [自动静态注释] 条件判断/分支
        pcVar2 = *(code **)(lVar3 + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (pcVar2 != (code *)0x0) { // [自动静态注释] 条件判断/分支
          *(undefined8 *)(lVar3 + 0x40) = 0;
          *(undefined8 *)(lVar3 + 0x48) = 0;
          *(undefined8 *)(lVar3 + 0x30) = 0;
          *(undefined8 *)(lVar3 + 0x38) = 0;
          (*pcVar2)(lVar3 + 0x50); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        if (*(long *)(lVar3 + 0x20) != 0) { // [自动静态注释] 条件判断/分支
          (**(code **)(*(long *)(*(long *)(lVar3 + 0x20) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          *(undefined8 *)(lVar3 + 0x20) = 0;
        } // [自动静态注释] 作用域/控制流边界
        if (*(long *)(lVar3 + 0x18) != 0) { // [自动静态注释] 条件判断/分支
          (**(code **)(*(long *)(*(long *)(lVar3 + 0x18) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          *(undefined8 *)(lVar3 + 0x18) = 0;
        } // [自动静态注释] 作用域/控制流边界
        (**(code **)(**(long **)(param_1 + 0x158) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                  (*(long **)(param_1 + 0x158),lVar3,*(undefined8 *)(param_1 + 0x160), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                   *(undefined8 *)(param_1 + 0x168));
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x170)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



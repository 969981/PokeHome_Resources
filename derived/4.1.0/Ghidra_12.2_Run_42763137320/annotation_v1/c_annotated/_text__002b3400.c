/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001B3400
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002b3400; name: FUN_.text__002b3400
 */


void FUN__text__002b3400(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  MutexType *pMVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  pMVar1 = (MutexType *)(param_1 + 0x78); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  nn::os::LockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if ((*(byte *)(param_1 + 0xb8) & 1) != 0) { // [自动静态注释] 条件判断/分支
    if (*(long **)(param_1 + 0x58) != (long *)0x0) { // [自动静态注释] 条件判断/分支
      (**(code **)(**(long **)(param_1 + 0x58) + 0x60))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    nn::os::UnlockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  plVar3 = (long *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar5 = *plVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = *(long *)(param_1 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar5 != lVar2) { // [自动静态注释] 条件判断/分支
    do { // [自动静态注释] 循环/迭代
      if (*(long *)(lVar5 + 8) != 0 && *(long *)(lVar5 + 0x10) != 0) { // [自动静态注释] 条件判断/分支
        plVar4 = *(long **)(param_1 + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        (**(code **)(*plVar4 + 0x18))(plVar4,*(long *)(lVar5 + 8),*(undefined8 *)(lVar5 + 0x18)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        (**(code **)(*plVar4 + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                  (plVar4,*(undefined8 *)(lVar5 + 0x10),*(undefined8 *)(lVar5 + 0x18)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *(undefined8 *)(lVar5 + 0x18) = 0;
        *(undefined8 *)(lVar5 + 0x20) = 0;
      } // [自动静态注释] 作用域/控制流边界
      lVar5 = lVar5 + 0x30; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (lVar5 != lVar2); // [自动静态注释] 循环/迭代
    lVar5 = *plVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(long *)(param_1 + 0x10) = lVar5;
  FUN__text__002b4db0(plVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
  nn::os::UnlockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



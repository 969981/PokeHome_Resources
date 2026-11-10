/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001FCE00
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002fce00; name: FUN_.text__002fce00
 */


undefined8 FUN__text__002fce00(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  MutexType *pMVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar5 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(lVar5 + 0x1a8) == 0) { // [自动静态注释] 条件判断/分支
    return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar3 = FUN__text__002ff090(); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((uVar3 & 1) == 0) { // [自动静态注释] 条件判断/分支
    return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  pMVar1 = (MutexType *)(lVar5 + 0x1c8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  nn::os::LockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if ((*(long *)(lVar5 + 0x1a8) != 0) && // [自动静态注释] 条件判断/分支
     (plVar4 = (long *)FUN__text__002ff034(), *plVar4 == param_1[1])) { // [自动静态注释] 调用尚未恢复正式名称的函数
    iVar2 = FUN__text__002ff0b0(*(undefined8 *)(lVar5 + 0x1a8)); // [自动静态注释] 调用尚未恢复正式名称的函数
    nn::os::UnlockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (iVar2 != 2) goto LAB__text__002fcea0; // [自动静态注释] 条件判断/分支
    nn::os::LockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if ((*(long *)(lVar5 + 0x1a8) != 0) && // [自动静态注释] 条件判断/分支
       (plVar4 = (long *)FUN__text__002ff034(), *plVar4 == param_1[1])) { // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__005dd758(lVar5 + 0xc0); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  nn::os::UnlockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
LAB__text__002fcea0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__002fa6b8(lVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004F52B0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f52b0; name: FUN_.text__005f52b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN__text__005f52b0(void) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ThreadType *pTVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (((DAT_00c153f8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_00c153f8), iVar1 != 0)) { // [自动静态注释] 条件判断/分支
    nn::os::InitializeMutex((MutexType *)&DAT_00c15400,false,0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__001001d0(_DAT_008a5c80,&DAT_00c15400,&__DT_FINI_ARRAY); // [自动静态注释] 调用尚未恢复正式名称的函数
    __cxa_guard_release(&DAT_00c153f8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  nn::os::LockMutex((MutexType *)&DAT_00c15400); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (*_DAT_008a5c88 == '\0') { // [自动静态注释] 条件判断/分支
    if (*_DAT_008a5c90 != 0) { // [自动静态注释] 条件判断/分支
LAB__text__005f5324: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      plVar4 = _DAT_008a5c90; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      goto LAB__text__005f532c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else if (*_DAT_008a5c90 != 0) { // [自动静态注释] 条件判断/分支
    lVar5 = *_DAT_008a5c98; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    pTVar2 = (ThreadType *)nn::os::GetCurrentThread(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar3 = nn::os::GetThreadId(pTVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar5 == lVar3) goto LAB__text__005f5324; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  plVar4 = _DAT_008a5ca8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__005f532c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  lVar3 = *plVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  nn::os::UnlockMutex((MutexType *)&DAT_00c15400); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return lVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



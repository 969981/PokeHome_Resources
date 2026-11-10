/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004E5A80
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e5a80; name: FUN_.text__005e5a80
 */


long FUN__text__005e5a80(long param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  size_t __n; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x3a0)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  plVar2 = *(long **)(param_1 + 0x370); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar1 = *(long **)(param_1 + 0x378); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar2 != plVar1) { // [自动静态注释] 条件判断/分支
    plVar3 = plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(int *)(param_2 + 0xc) == 0) { // [自动静态注释] 条件判断/分支
      lVar4 = *plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__005e5af0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      __n = (long)plVar1 - (long)(plVar3 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (__n != 0) { // [自动静态注释] 条件判断/分支
        memmove(plVar3,plVar3 + 1,__n); // [自动静态注释] 内存复制、清零或移动
      } // [自动静态注释] 作用域/控制流边界
      *(size_t *)(param_1 + 0x378) = (long)plVar3 + __n;
      goto LAB__text__005e5b10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    do { // [自动静态注释] 循环/迭代
      lVar4 = *plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((*(byte *)(lVar4 + 0x130) >> 1 & 1) == 0) goto LAB__text__005e5af0; // [自动静态注释] 条件判断/分支
      plVar2 = plVar2 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar3 = plVar3 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (plVar2 != plVar1); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  lVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__005e5b10: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x3a0)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return lVar4; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



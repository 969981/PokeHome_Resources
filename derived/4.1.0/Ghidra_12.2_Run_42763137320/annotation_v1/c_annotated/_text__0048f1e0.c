/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0038F1E0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0048f1e0; name: FUN_.text__0048f1e0
 */


undefined1 FUN__text__0048f1e0(long param_1,int param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x30)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  piVar2 = *(int **)(param_1 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = *(uint *)(param_1 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  piVar3 = piVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar1 == 0) { // [自动静态注释] 条件判断/分支
LAB__text__0048f240: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (piVar3 != piVar2 + (ulong)uVar1 * 8) { // [自动静态注释] 条件判断/分支
      uVar5 = (undefined1)piVar3[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      goto LAB__text__0048f258; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar4 = (ulong)uVar1 << 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      if (*piVar3 == param_2) goto LAB__text__0048f240; // [自动静态注释] 条件判断/分支
      piVar3 = piVar3 + 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar4 = lVar4 + -0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (lVar4 != 0); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  uVar5 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__0048f258: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x30)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return uVar5; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



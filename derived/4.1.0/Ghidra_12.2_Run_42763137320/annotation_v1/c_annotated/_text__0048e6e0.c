/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0038E6E0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0048e6e0; name: FUN_.text__0048e6e0
 */


void FUN__text__0048e6e0(int param_1,undefined8 *param_2,int param_3,long param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  MutexType *pMVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  pMVar1 = (MutexType *)(param_2 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  nn::os::LockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  piVar3 = (int *)*param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = *(uint *)(param_2 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  piVar5 = piVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar2 == 0) { // [自动静态注释] 条件判断/分支
LAB__text__0048e76c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (piVar5 != piVar3 + (ulong)uVar2 * 0xc) { // [自动静态注释] 条件判断/分支
      uVar4 = param_2[8]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      piVar5[7] = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(piVar5 + 4) = uVar4;
      nn::os::UnlockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar6 = (ulong)uVar2 * 0x30; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      if (*piVar5 == param_3 && *(long *)(piVar5 + 2) == param_4) goto LAB__text__0048e76c; // [自动静态注释] 条件判断/分支
      piVar5 = piVar5 + 0xc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar6 = lVar6 + -0x30; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (lVar6 != 0); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  nn::os::UnlockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



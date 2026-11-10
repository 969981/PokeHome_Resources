/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0038E8C0
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0048e8c0; name: FUN_.text__0048e8c0
 */


void FUN__text__0048e8c0(undefined8 *param_1,int param_2,long param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  MutexType *pMVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  pMVar1 = (MutexType *)(param_1 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  nn::os::LockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  piVar3 = (int *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = *(uint *)(param_1 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  piVar2 = piVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar4 == 0) { // [自动静态注释] 条件判断/分支
LAB__text__0048e938: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (piVar2 != piVar3 + (ulong)uVar4 * 0xc) { // [自动静态注释] 条件判断/分支
      uVar4 = uVar4 - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (piVar2 < piVar3 + (ulong)uVar4 * 0xc) { // [自动静态注释] 条件判断/分支
        memmove(piVar2,piVar2 + 0xc,(ulong)(uint)((int)(piVar3 + (ulong)uVar4 * 0xc) - (int)piVar2)) // [自动静态注释] 内存复制、清零或移动
        ; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        uVar4 = *(int *)(param_1 + 1) - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      *(uint *)(param_1 + 1) = uVar4;
      nn::os::UnlockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar5 = (ulong)uVar4 * 0x30; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      if (*piVar2 == param_2 && *(long *)(piVar2 + 2) == param_3) goto LAB__text__0048e938; // [自动静态注释] 条件判断/分支
      piVar2 = piVar2 + 0xc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar5 = lVar5 + -0x30; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (lVar5 != 0); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  nn::os::UnlockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



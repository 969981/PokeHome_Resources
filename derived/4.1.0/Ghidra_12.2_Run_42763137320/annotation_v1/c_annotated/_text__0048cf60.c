/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0038CF60
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0048cf60; name: FUN_.text__0048cf60
 */


undefined8 FUN__text__0048cf60(long *param_1,uint param_2,long param_3,int param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_2 == 0) { // [自动静态注释] 条件判断/分支
    return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  nn::os::LockMutex((MutexType *)(param_1 + 3)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar1 = *(uint *)(param_1 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar1 != 0) { // [自动静态注释] 条件判断/分支
    uVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar1 != 0) { // [自动静态注释] 条件判断/分支
      uVar2 = param_2 / uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    for (lVar3 = *(long *)(*param_1 + (ulong)(param_2 - uVar2 * uVar1) * 8); lVar3 != 0; // [自动静态注释] 循环/迭代
        lVar3 = *(long *)(lVar3 + 0x68)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*(uint *)(lVar3 + 0x4c) == param_2) { // [自动静态注释] 条件判断/分支
        if ((*(long *)(lVar3 + 0x28) == param_3) && (*(int *)(lVar3 + 0x24) == param_4)) { // [自动静态注释] 条件判断/分支
          uVar4 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(int *)(lVar3 + 0x20) = *(int *)(lVar3 + 0x20) + 1;
          goto LAB__text__0048d014; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        break; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  uVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__0048d014: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  nn::os::UnlockMutex((MutexType *)(param_1 + 3)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return uVar4; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002FCFA0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003fcfa0; name: FUN_.text__003fcfa0
 */


undefined8 FUN__text__003fcfa0(long param_1,long *param_2,undefined4 *param_3,uint param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  MutexType *pMVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  pMVar1 = (MutexType *)(param_1 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_2 = 0;
  *param_3 = 0;
  nn::os::LockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  lVar2 = FUN__text__003fce50(param_1,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  *param_2 = lVar2;
  if ((lVar2 != 0) || (*(char *)(param_1 + 0xc3) != '\0')) goto LAB__text__003fcff4; // [自动静态注释] 条件判断/分支
  if (*(char *)(param_1 + 0x69) == '\0') { // [自动静态注释] 条件判断/分支
    lVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((param_4 & 1) == 0) goto LAB__text__003fcff4; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar2 = FUN__text__003fce50(param_1,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
    *param_2 = lVar2;
    if (lVar2 != 0) goto LAB__text__003fcff4; // [自动静态注释] 条件判断/分支
    uVar3 = (**(code **)(**(long **)(param_1 + 0x50) + 0x58))(*(long **)(param_1 + 0x50),param_1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((uVar3 & 1) == 0) { // [自动静态注释] 条件判断/分支
      lVar2 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      lVar2 = FUN__text__003fce50(param_1,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
      *param_2 = lVar2;
    } // [自动静态注释] 作用域/控制流边界
    if (lVar2 == 0 && (param_4 & 1) == 0) goto LAB__text__003fcff4; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  while (((lVar2 == 0 && (*(char *)(param_1 + 0xc3) == '\0')) && // [自动静态注释] 循环/迭代
         (*(char *)(param_1 + 0x6a) != '\0' || *(int *)(param_1 + 0x98) != 0))) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__003fdc68(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    nn::os::UnlockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__003fe1b0(*(undefined8 *)(param_1 + 0x50),param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    nn::os::LockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar2 = FUN__text__003fce50(param_1,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
    *param_2 = lVar2;
  } // [自动静态注释] 作用域/控制流边界
LAB__text__003fcff4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  nn::os::UnlockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (*(char *)(param_1 + 0xc3) != '\0') { // [自动静态注释] 条件判断/分支
    return 2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if (*param_2 == 0) { // [自动静态注释] 条件判断/分支
    if ((*(char *)(param_1 + 0x67) == '\0') || // [自动静态注释] 条件判断/分支
       (*(ulong *)(param_1 + 0x78) < **(ulong **)(param_1 + 0x20))) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      return 0x2e; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else if ((*(char *)(param_1 + 0x67) == '\0') || // [自动静态注释] 条件判断/分支
          (*(ulong *)(param_1 + 0x78) < **(ulong **)(param_1 + 0x20))) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    return 0x2d; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  return 0x11; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



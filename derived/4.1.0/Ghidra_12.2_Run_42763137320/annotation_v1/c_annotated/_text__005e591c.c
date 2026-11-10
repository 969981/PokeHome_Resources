/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004E591C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e591c; name: FUN_.text__005e591c
 */


undefined8 FUN__text__005e591c(long param_1,undefined8 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ulong uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_28 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = FUN__text__005e8950(); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((uVar1 & 1) == 0) { // [自动静态注释] 条件判断/分支
    nn::os::LockMutex((MutexType *)(param_1 + 0x3a0)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    puVar2 = *(undefined8 **)(param_1 + 0x378); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (puVar2 == *(undefined8 **)(param_1 + 0x380)) { // [自动静态注释] 条件判断/分支
      FUN__text__005e62c0(param_1 + 0x370,&local_28); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar1 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar1 = uVar1 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*(long *)(uVar1 + 0x98) == 0x10) goto LAB__text__005e5a70; // [自动静态注释] 条件判断/分支
      *(undefined8 *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0x388)
      ; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *(long *)(uVar1 + 0x98) = *(long *)(uVar1 + 0x98) + 1;
      *puVar2 = local_28;
      *(long *)(uVar1 + 0x98) = *(long *)(uVar1 + 0x98) + -1;
      *(undefined8 **)(param_1 + 0x378) = puVar2 + 1;
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__005e1f8c(*(undefined8 *)(param_1 + 0x3c8)); // [自动静态注释] 调用尚未恢复正式名称的函数
    nn::os::SignalConditionVariable((ConditionVariableType *)(param_1 + 0x3c0)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (*(long *)(param_1 + 0x3f0) == 0) { // [自动静态注释] 条件判断/分支
      *(undefined8 *)(param_1 + 0x3f0) = param_2;
      return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    nn::os::LockMutex((MutexType *)(param_1 + 0x3a0)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    puVar2 = *(undefined8 **)(param_1 + 0x378); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (puVar2 == *(undefined8 **)(param_1 + 0x380)) { // [自动静态注释] 条件判断/分支
      FUN__text__005e62c0(param_1 + 0x370,&local_28); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar1 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar1 = uVar1 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*(long *)(uVar1 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
LAB__text__005e5a70: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    /* WARNING: Subroutine does not return */
        FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
      *(undefined8 *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0x388)
      ; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *(long *)(uVar1 + 0x98) = *(long *)(uVar1 + 0x98) + 1;
      *puVar2 = local_28;
      *(long *)(uVar1 + 0x98) = *(long *)(uVar1 + 0x98) + -1;
      *(undefined8 **)(param_1 + 0x378) = puVar2 + 1;
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x3a0)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



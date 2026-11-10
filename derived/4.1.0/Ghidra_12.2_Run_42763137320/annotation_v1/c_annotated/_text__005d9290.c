/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004D9290
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005d9290; name: FUN_.text__005d9290
 */


void FUN__text__005d9290(long param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  MutexType *pMVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  size_t sVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *__dest; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  pMVar1 = (MutexType *)(param_1 + 0x110); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_48 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = nn::os::IsMutexLockedByCurrentThread(pMVar1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((uVar4 & 1) != 0) { // [自动静态注释] 条件判断/分支
    plVar7 = *(long **)(param_1 + 0xe8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (plVar7 == *(long **)(param_1 + 0xf0)) { // [自动静态注释] 条件判断/分支
      FUN__text__005d95d0(param_1 + 0xe0,&local_48); // [自动静态注释] 调用尚未恢复正式名称的函数
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    uVar4 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = uVar4 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(uVar4 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    *(undefined8 *)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0xf8);
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
    *plVar7 = local_48;
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
    *(long **)(param_1 + 0xe8) = plVar7 + 1;
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  nn::os::LockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  plVar7 = *(long **)(param_1 + 0xb0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar5 = *(long **)(param_1 + 0xb8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar7 != plVar5) { // [自动静态注释] 条件判断/分支
    do { // [自动静态注释] 循环/迭代
      if (*plVar7 == param_2) goto LAB__text__005d935c; // [自动静态注释] 条件判断/分支
      plVar7 = plVar7 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (plVar7 != plVar5); // [自动静态注释] 循环/迭代
    plVar7 = plVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
LAB__text__005d935c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (plVar7 != plVar5) { // [自动静态注释] 条件判断/分支
    sVar3 = (long)plVar5 - (long)(plVar7 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (sVar3 != 0) { // [自动静态注释] 条件判断/分支
      memmove(plVar7,plVar7 + 1,sVar3); // [自动静态注释] 内存复制、清零或移动
    } // [自动静态注释] 作用域/控制流边界
    plVar5 = (long *)((long)plVar7 + sVar3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long **)(param_1 + 0xb8) = plVar5;
  } // [自动静态注释] 作用域/控制流边界
  plVar7 = *(long **)(param_1 + 0xe0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2 = *(long **)(param_1 + 0xe8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar7 != plVar2) { // [自动静态注释] 条件判断/分支
    do { // [自动静态注释] 循环/迭代
      plVar6 = *(long **)(param_1 + 0xb0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      __dest = plVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (plVar6 != plVar5) { // [自动静态注释] 条件判断/分支
        do { // [自动静态注释] 循环/迭代
          __dest = plVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (*plVar6 == *plVar7) goto LAB__text__005d93dc; // [自动静态注释] 条件判断/分支
          plVar6 = plVar6 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } while (plVar6 != plVar5); // [自动静态注释] 循环/迭代
        __dest = plVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
LAB__text__005d93dc: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if (__dest != plVar5) { // [自动静态注释] 条件判断/分支
        sVar3 = (long)plVar5 - (long)(__dest + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (sVar3 != 0) { // [自动静态注释] 条件判断/分支
          memmove(__dest,__dest + 1,sVar3); // [自动静态注释] 内存复制、清零或移动
        } // [自动静态注释] 作用域/控制流边界
        plVar5 = (long *)((long)__dest + sVar3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(long **)(param_1 + 0xb8) = plVar5;
      } // [自动静态注释] 作用域/控制流边界
      plVar7 = plVar7 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (plVar7 != plVar2); // [自动静态注释] 循环/迭代
    plVar7 = *(long **)(param_1 + 0xe0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(long **)(param_1 + 0xe8) = plVar7;
  nn::os::UnlockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



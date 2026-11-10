/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001FA24C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002fa24c; name: FUN_.text__002fa24c
 */


bool FUN__text__002fa24c(long param_1,undefined8 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  bool bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *pcVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x1c8)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (*(long *)(param_1 + 0x1a8) == 0) { // [自动静态注释] 条件判断/分支
    plVar4 = *(long **)(param_1 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar2 = (**(code **)(*plVar4 + 0x10))(plVar4,0x130,0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar6 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar6 = uVar6 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(uVar6 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    *(long **)(uVar6 + *(long *)(uVar6 + 0x98) * 8 + 0x18) = plVar4;
    *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + 1;
    FUN__text__002feedc(lVar2,*(undefined8 *)(param_1 + 0xa0),param_2,param_1 + 0xc0); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + -1;
    lVar5 = *(long *)(param_1 + 0x1a8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long *)(param_1 + 0x1a8) = lVar2;
    if (lVar5 != 0) { // [自动静态注释] 条件判断/分支
      pcVar3 = *(code **)(lVar5 + 0xb8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (pcVar3 != (code *)0x0) { // [自动静态注释] 条件判断/分支
        *(undefined8 *)(lVar5 + 0xc0) = 0;
        *(undefined8 *)(lVar5 + 200) = 0;
        *(undefined8 *)(lVar5 + 0xb0) = 0;
        *(undefined8 *)(lVar5 + 0xb8) = 0;
        (*pcVar3)(lVar5 + 0xd0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      pcVar3 = *(code **)(lVar5 + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (pcVar3 != (code *)0x0) { // [自动静态注释] 条件判断/分支
        *(undefined8 *)(lVar5 + 0x40) = 0;
        *(undefined8 *)(lVar5 + 0x48) = 0;
        *(undefined8 *)(lVar5 + 0x30) = 0;
        *(undefined8 *)(lVar5 + 0x38) = 0;
        (*pcVar3)(lVar5 + 0x50); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      if (*(long *)(lVar5 + 0x20) != 0) { // [自动静态注释] 条件判断/分支
        (**(code **)(*(long *)(*(long *)(lVar5 + 0x20) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *(undefined8 *)(lVar5 + 0x20) = 0;
      } // [自动静态注释] 作用域/控制流边界
      if (*(long *)(lVar5 + 0x18) != 0) { // [自动静态注释] 条件判断/分支
        (**(code **)(*(long *)(*(long *)(lVar5 + 0x18) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *(undefined8 *)(lVar5 + 0x18) = 0;
      } // [自动静态注释] 作用域/控制流边界
      (**(code **)(**(long **)(param_1 + 0x1b0) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                (*(long **)(param_1 + 0x1b0),lVar5,*(undefined8 *)(param_1 + 0x1b8), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                 *(undefined8 *)(param_1 + 0x1c0));
      lVar2 = *(long *)(param_1 + 0x1a8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *(long **)(param_1 + 0x1b0) = plVar4;
    *(undefined8 *)(param_1 + 0x1b8) = 0x130;
    *(undefined8 *)(param_1 + 0x1c0) = 0x10;
    if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__002ff13c(lVar2,param_1 + 0x3a0); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__002ff1b4(*(undefined8 *)(param_1 + 0x1a8),param_1 + 0x420); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__002ff22c(*(undefined8 *)(param_1 + 0x1a8),param_1 + 0x4a0); // [自动静态注释] 调用尚未恢复正式名称的函数
      bVar1 = *(long *)(param_1 + 0x1a8) != 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      goto LAB__text__002fa3b4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  bVar1 = false; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__002fa3b4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1c8)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return bVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



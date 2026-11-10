/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003A9EF0
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004a9ef0; name: FUN_.text__004a9ef0
 */


void FUN__text__004a9ef0(long param_1,uint param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *__dest; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x68)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar1 = *(uint *)(param_1 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar1 != 0) { // [自动静态注释] 条件判断/分支
    uVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar1 != 0) { // [自动静态注释] 条件判断/分支
      uVar3 = param_2 / uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    uVar1 = param_2 - uVar3 * uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar6 = *(long **)(*(long *)(param_1 + 0x90) + (ulong)uVar1 * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (plVar6 != (long *)0x0) { // [自动静态注释] 条件判断/分支
      if (*(uint *)(plVar6 + 1) == param_2) { // [自动静态注释] 条件判断/分支
        plVar7 = (long *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        do { // [自动静态注释] 循环/迭代
          plVar7 = plVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          plVar6 = (long *)*plVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (plVar6 == (long *)0x0) goto LAB__text__004aa018; // [自动静态注释] 条件判断/分支
        } while (*(uint *)(plVar6 + 1) != param_2); // [自动静态注释] 循环/迭代
      } // [自动静态注释] 作用域/控制流边界
      iVar2 = (int)plVar6[4] + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(int *)(plVar6 + 4) = iVar2;
      if (iVar2 == 0) { // [自动静态注释] 条件判断/分支
        uVar4 = (ulong)*(uint *)(plVar6 + 3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (*(uint *)(plVar6 + 3) != 0) { // [自动静态注释] 条件判断/分支
          puVar5 = (undefined8 *)plVar6[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          __dest = puVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          do { // [自动静态注释] 循环/迭代
            while (*(char *)((long)__dest + 0xc) == '\x01') { // [自动静态注释] 循环/迭代
              FUN__text__00400fc0(*(undefined4 *)(__dest + 2),*__dest); // [自动静态注释] 调用尚未恢复正式名称的函数
              uVar4 = (ulong)((int)plVar6[3] - 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              puVar5 = (undefined8 *)plVar6[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              if (__dest < puVar5 + uVar4 * 3) { // [自动静态注释] 条件判断/分支
                memmove(__dest,__dest + 3,(ulong)(uint)((int)(puVar5 + uVar4 * 3) - (int)__dest)); // [自动静态注释] 内存复制、清零或移动
                uVar4 = (ulong)((int)plVar6[3] - 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                puVar5 = (undefined8 *)plVar6[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              } // [自动静态注释] 作用域/控制流边界
              *(int *)(plVar6 + 3) = (int)uVar4;
              if (__dest == puVar5 + uVar4 * 3) goto LAB__text__004a9ffc; // [自动静态注释] 条件判断/分支
            } // [自动静态注释] 作用域/控制流边界
            __dest = __dest + 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } while (__dest != puVar5 + uVar4 * 3); // [自动静态注释] 循环/迭代
LAB__text__004a9ffc: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          if ((int)plVar6[4] != 0) goto LAB__text__004aa018; // [自动静态注释] 条件判断/分支
        } // [自动静态注释] 作用域/控制流边界
        FUN__text__004ad290(param_1 + 0x88,uVar1,plVar6,plVar7); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
LAB__text__004aa018: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x68)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



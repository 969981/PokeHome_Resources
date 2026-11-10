/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004D9010
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005d9010; name: FUN_.text__005d9010
 */


void FUN__text__005d9010(long param_1,long *param_2,int param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  size_t sVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_58 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  nn::os::LockMutex((MutexType *)(param_1 + 0x110)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  plVar8 = *(long **)(param_1 + 0xe0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar6 = *(long **)(param_1 + 0xe8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar8 == plVar6) { // [自动静态注释] 条件判断/分支
    plVar2 = *(long **)(param_1 + 0xb8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar6 = *(long **)(param_1 + 0xb0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long **)(param_1 + 0xe8) = plVar8;
    plVar8 = plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (plVar6 != plVar2) goto LAB__text__005d9110; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    plVar2 = *(long **)(param_1 + 0xb8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      plVar5 = *(long **)(param_1 + 0xb0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar7 = plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (plVar5 != plVar2) { // [自动静态注释] 条件判断/分支
        do { // [自动静态注释] 循环/迭代
          plVar7 = plVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (*plVar5 == *plVar8) goto LAB__text__005d90ac; // [自动静态注释] 条件判断/分支
          plVar5 = plVar5 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } while (plVar5 != plVar2); // [自动静态注释] 循环/迭代
        plVar7 = plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
LAB__text__005d90ac: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if (plVar7 != plVar2) { // [自动静态注释] 条件判断/分支
        sVar1 = (long)plVar2 - (long)(plVar7 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (sVar1 != 0) { // [自动静态注释] 条件判断/分支
          memmove(plVar7,plVar7 + 1,sVar1); // [自动静态注释] 内存复制、清零或移动
        } // [自动静态注释] 作用域/控制流边界
        plVar2 = (long *)((long)plVar7 + sVar1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(long **)(param_1 + 0xb8) = plVar2;
      } // [自动静态注释] 作用域/控制流边界
      plVar8 = plVar8 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (plVar8 != plVar6); // [自动静态注释] 循环/迭代
    plVar6 = *(long **)(param_1 + 0xb0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_1 + 0xe0);
    plVar8 = plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (plVar6 != plVar2) { // [自动静态注释] 条件判断/分支
LAB__text__005d9110: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      do { // [自动静态注释] 循环/迭代
        plVar8 = plVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if ((long *)*plVar6 == param_2) goto LAB__text__005d912c; // [自动静态注释] 条件判断/分支
        plVar6 = plVar6 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (plVar6 != plVar2); // [自动静态注释] 循环/迭代
      plVar8 = plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
LAB__text__005d912c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (plVar8 != plVar2) goto LAB__text__005d9268; // [自动静态注释] 条件判断/分支
  if (plVar2 == *(long **)(param_1 + 0xc0)) { // [自动静态注释] 条件判断/分支
    FUN__text__005d95d0((long *)(param_1 + 0xb0),&local_58); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (param_3 == 2) goto LAB__text__005d91a4; // [自动静态注释] 条件判断/分支
LAB__text__005d91bc: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if ((param_3 == 1) && (*(char *)(param_1 + 0x170) != '\0')) { // [自动静态注释] 条件判断/分支
      puVar3 = (undefined8 *)*local_58; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      goto LAB__text__005d91d4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar4 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = uVar4 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(uVar4 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    *(undefined8 *)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 200);
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
    *plVar2 = (long)local_58;
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
    *(long **)(param_1 + 0xb8) = plVar2 + 1;
    if (param_3 != 2) goto LAB__text__005d91bc; // [自动静态注释] 条件判断/分支
LAB__text__005d91a4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (*(long *)(param_1 + 0xa8) == 0) goto LAB__text__005d91bc; // [自动静态注释] 条件判断/分支
    puVar3 = (undefined8 *)(*local_58 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__005d91d4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    (*(code *)*puVar3)(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  plVar8 = *(long **)(param_1 + 0xe0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar6 = *(long **)(param_1 + 0xe8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar8 != plVar6) { // [自动静态注释] 条件判断/分支
    plVar2 = *(long **)(param_1 + 0xb8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      plVar5 = *(long **)(param_1 + 0xb0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar7 = plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (plVar5 != plVar2) { // [自动静态注释] 条件判断/分支
        do { // [自动静态注释] 循环/迭代
          plVar7 = plVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (*plVar5 == *plVar8) goto LAB__text__005d923c; // [自动静态注释] 条件判断/分支
          plVar5 = plVar5 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } while (plVar5 != plVar2); // [自动静态注释] 循环/迭代
        plVar7 = plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
LAB__text__005d923c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if (plVar7 != plVar2) { // [自动静态注释] 条件判断/分支
        sVar1 = (long)plVar2 - (long)(plVar7 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (sVar1 != 0) { // [自动静态注释] 条件判断/分支
          memmove(plVar7,plVar7 + 1,sVar1); // [自动静态注释] 内存复制、清零或移动
        } // [自动静态注释] 作用域/控制流边界
        plVar2 = (long *)((long)plVar7 + sVar1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(long **)(param_1 + 0xb8) = plVar2;
      } // [自动静态注释] 作用域/控制流边界
      plVar8 = plVar8 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (plVar8 != plVar6); // [自动静态注释] 循环/迭代
    plVar8 = *(long **)(param_1 + 0xe0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(long **)(param_1 + 0xe8) = plVar8;
LAB__text__005d9268: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x110)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



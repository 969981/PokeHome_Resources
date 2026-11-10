/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004E6EC0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e6ec0; name: FUN_.text__005e6ec0
 */


void FUN__text__005e6ec0(long param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar4 = *(long **)(param_1 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar3 = *(long **)(param_1 + 0x68); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar4 != plVar3) { // [自动静态注释] 条件判断/分支
    do { // [自动静态注释] 循环/迭代
      if (*plVar4 == param_2) goto LAB__text__005e6f00; // [自动静态注释] 条件判断/分支
      plVar4 = plVar4 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (plVar4 != plVar3); // [自动静态注释] 循环/迭代
    plVar4 = plVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
LAB__text__005e6f00: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  local_8 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar4 == plVar3) { // [自动静态注释] 条件判断/分支
    if (plVar3 != *(long **)(param_1 + 0x70)) { // [自动静态注释] 条件判断/分支
      uVar2 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar2 = uVar2 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*(long *)(uVar2 + 0x98) == 0x10) goto LAB__text__005e7044; // [自动静态注释] 条件判断/分支
      *(undefined8 *)(uVar2 + *(long *)(uVar2 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0x78);
      *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + 1;
      *plVar3 = param_2;
      *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + -1;
      *(long **)(param_1 + 0x68) = plVar3 + 1;
      goto LAB__text__005e6f58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__005e5380((long *)(param_1 + 0x60),&local_8); // [自动静态注释] 调用尚未恢复正式名称的函数
    plVar3 = *(long **)(local_8 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar1 = (undefined8 *)(local_8 + 0x90); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar4 = (long *)*puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_2 = local_8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (plVar4 != plVar3) goto LAB__text__005e6f70; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
LAB__text__005e6f58: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    plVar3 = *(long **)(param_2 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar1 = (undefined8 *)(param_2 + 0x90); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar4 = (long *)*puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (plVar4 != plVar3) { // [自动静态注释] 条件判断/分支
LAB__text__005e6f70: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      do { // [自动静态注释] 循环/迭代
        if (*plVar4 == param_1) goto LAB__text__005e6f8c; // [自动静态注释] 条件判断/分支
        plVar4 = plVar4 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (plVar4 != plVar3); // [自动静态注释] 循环/迭代
      plVar4 = plVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
LAB__text__005e6f8c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (plVar4 != plVar3) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  local_28 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long **)(param_2 + 0xa0) <= plVar3) { // [自动静态注释] 条件判断/分支
    FUN__text__005e8060(puVar1,&local_28); // [自动静态注释] 调用尚未恢复正式名称的函数
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar2 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = uVar2 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar2 + 0x98) != 0x10) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(uVar2 + *(long *)(uVar2 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_2 + 0xa8);
    *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + 1;
    *plVar3 = param_1;
    *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + -1;
    *(long **)(param_2 + 0x98) = plVar3 + 1;
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
LAB__text__005e7044: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    /* WARNING: Subroutine does not return */
  FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
} // [自动静态注释] 作用域/控制流边界



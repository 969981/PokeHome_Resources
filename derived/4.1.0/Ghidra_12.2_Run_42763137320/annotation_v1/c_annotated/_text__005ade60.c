/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004ADE60
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005ade60; name: FUN_.text__005ade60
 */


int * FUN__text__005ade60(int *param_1,int *param_2,long param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int *piVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_1 == param_2) { // [自动静态注释] 条件判断/分支
    return param_2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  while (iVar3 = *param_1, *param_1 = iVar3 + 1, iVar3 + 1 != 2) { // [自动静态注释] 循环/迭代
    param_1 = param_1 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (param_1 == param_2) { // [自动静态注释] 条件判断/分支
      return param_2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  puVar2 = *(undefined8 **)(param_3 + 0xb8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar6 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (puVar2 == *(undefined8 **)(param_3 + 0xc0)) { // [自动静态注释] 条件判断/分支
    FUN__text__005ae010(param_3 + 0xb0); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar4 = uVar6 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(uVar4 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
LAB__text__005ae000: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    *(undefined8 *)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_3 + 200);
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
    *puVar2 = *(undefined8 *)(param_1 + 2);
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
    *(undefined8 **)(param_3 + 0xb8) = puVar2 + 1;
  } // [自动静态注释] 作用域/控制流边界
  if (param_1 == param_2) { // [自动静态注释] 条件判断/分支
    return param_2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if (param_1 + 4 == param_2) { // [自动静态注释] 条件判断/分支
    return param_1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  piVar5 = param_1 + 6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar6 = uVar6 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    iVar3 = piVar5[-2] + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    piVar5[-2] = iVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (iVar3 == 2) { // [自动静态注释] 条件判断/分支
      puVar2 = *(undefined8 **)(param_3 + 0xb8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (puVar2 == *(undefined8 **)(param_3 + 0xc0)) { // [自动静态注释] 条件判断/分支
        FUN__text__005ae010(param_3 + 0xb0,piVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        if (*(long *)(uVar6 + 0x98) == 0x10) goto LAB__text__005ae000; // [自动静态注释] 条件判断/分支
        *(undefined8 *)(uVar6 + *(long *)(uVar6 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_3 + 200)
        ; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + 1;
        *puVar2 = *(undefined8 *)piVar5;
        *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + -1;
        *(undefined8 **)(param_3 + 0xb8) = puVar2 + 1;
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *param_1 = iVar3;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)piVar5;
      param_1 = param_1 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    piVar1 = piVar5 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    piVar5 = piVar5 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (piVar1 == param_2) { // [自动静态注释] 条件判断/分支
      return param_1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } while( true ); // [自动静态注释] 循环/迭代
} // [自动静态注释] 作用域/控制流边界



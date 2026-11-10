/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004DC600
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005dc600; name: FUN_.text__005dc600
 */


void FUN__text__005dc600(long *param_1,ulong param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_2 <= (ulong)(param_1[2] - *param_1 >> 3)) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if (param_2 >> 0x3d != 0) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__003efebc(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  lVar8 = param_1[1] - *param_1 >> 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar1 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],param_2 << 3,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar1 == 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)param_1[3] + 0xb8))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar2 = param_2 * 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar4 = (long *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar7 = (long *)param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar3 = (long *)(lVar8 * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (plVar7 != plVar4) goto LAB__text__005dc678; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar2 = lVar1 + param_2 * 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar4 = (long *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar7 = (long *)param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar3 = (long *)(lVar1 + lVar8 * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (plVar7 != plVar4) { // [自动静态注释] 条件判断/分支
LAB__text__005dc678: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar5 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar5 = uVar5 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar1 = *(long *)(uVar5 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar6 = plVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        if (lVar1 == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
          FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
        } // [自动静态注释] 作用域/控制流边界
        *(long *)((uVar5 | 0x18) + lVar1 * 8) = param_1[3];
        *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + 1;
        plVar7 = plVar7 + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar1 = *plVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *plVar7 = 0;
        plVar6 = plVar6 + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *plVar6 = lVar1;
        lVar1 = *(long *)(uVar5 + 0x98) + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(long *)(uVar5 + 0x98) = lVar1;
      } while (plVar7 != plVar4); // [自动静态注释] 循环/迭代
      plVar7 = (long *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar4 = (long *)param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar1 = param_1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *param_1 = (long)plVar6;
      param_1[1] = (long)plVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_1[2] = lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (plVar4 != plVar7) { // [自动静态注释] 条件判断/分支
        do { // [自动静态注释] 循环/迭代
          plVar3 = plVar4 + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (*plVar3 != 0) { // [自动静态注释] 条件判断/分支
            (**(code **)(*(long *)(*plVar3 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            plVar4[-1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
          plVar4 = plVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } while (plVar3 != plVar7); // [自动静态注释] 循环/迭代
      } // [自动静态注释] 作用域/控制流边界
      goto LAB__text__005dc748; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  lVar1 = param_1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = (long)plVar3;
  param_1[1] = (long)plVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[2] = lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__005dc748: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (plVar7 == (long *)0x0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Could not recover jumptable at 0x005dc774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],plVar7,lVar1 - (long)plVar7,8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004E0780
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e0780; name: FUN_.text__005e0780
 */


void FUN__text__005e0780(long *param_1,long *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar8 = param_1[1] - *param_1 >> 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = lVar8 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar3 >> 0x3d != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__005e0954(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
                    /* WARNING: Subroutine does not return */
    FUN__text__001187c0(0x71a95e); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  uVar2 = param_1[2] - *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = (long)uVar2 >> 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar4 <= uVar3) { // [自动静态注释] 条件判断/分支
    uVar4 = uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (0x7ffffffffffffff7 < uVar2) { // [自动静态注释] 条件判断/分支
    uVar4 = 0x1fffffffffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (uVar4 != 0) { // [自动静态注释] 条件判断/分支
    lVar1 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar4 << 3,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar1 != 0) goto LAB__text__005e080c; // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)param_1[3] + 0xb8))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__005e080c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar3 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = uVar3 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar3 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
LAB__text__005e0948: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  plVar5 = (long *)(lVar1 + lVar8 * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar1 = lVar1 + uVar4 * 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(uVar3 + 0x18 + *(long *)(uVar3 + 0x98) * 8) = param_1[3];
  *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
  lVar8 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_2 = 0;
  plVar6 = plVar5 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *plVar5 = lVar8;
  lVar8 = *(long *)(uVar3 + 0x98) + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(uVar3 + 0x98) = lVar8;
  plVar9 = (long *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar7 = (long *)param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar7 == plVar9) { // [自动静态注释] 条件判断/分支
    lVar8 = param_1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *param_1 = (long)plVar5;
    param_1[1] = (long)plVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[2] = lVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    do { // [自动静态注释] 循环/迭代
      if (lVar8 == 0x10) goto LAB__text__005e0948; // [自动静态注释] 条件判断/分支
      *(long *)(uVar3 + 0x18 + lVar8 * 8) = param_1[3];
      *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
      plVar7 = plVar7 + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar8 = *plVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *plVar7 = 0;
      plVar5 = plVar5 + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *plVar5 = lVar8;
      lVar8 = *(long *)(uVar3 + 0x98) + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long *)(uVar3 + 0x98) = lVar8;
    } while (plVar7 != plVar9); // [自动静态注释] 循环/迭代
    plVar7 = (long *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar9 = (long *)param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar8 = param_1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *param_1 = (long)plVar5;
    param_1[1] = (long)plVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[2] = lVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (plVar9 != plVar7) { // [自动静态注释] 条件判断/分支
      do { // [自动静态注释] 循环/迭代
        plVar5 = plVar9 + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if ((long *)*plVar5 != (long *)0x0) { // [自动静态注释] 条件判断/分支
          (**(code **)(*(long *)*plVar5 + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          plVar9[-1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        plVar9 = plVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (plVar5 != plVar7); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  if (plVar7 == (long *)0x0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Could not recover jumptable at 0x005e0930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],plVar7,lVar8 - (long)plVar7,8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



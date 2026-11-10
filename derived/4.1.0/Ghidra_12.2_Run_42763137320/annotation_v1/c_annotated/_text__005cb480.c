/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004CB480
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005cb480; name: FUN_.text__005cb480
 */


void FUN__text__005cb480(long *param_1,long *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  code *pcVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar9 = param_1[1] - *param_1 >> 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = lVar9 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar4 >> 0x3d != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__005cb464(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
                    /* WARNING: Does not return */
    pcVar1 = (code *)UndefinedInstructionException(0,0x5cb654); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (*pcVar1)(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  uVar3 = param_1[2] - *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = (long)uVar3 >> 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar5 <= uVar4) { // [自动静态注释] 条件判断/分支
    uVar5 = uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (0x7ffffffffffffff7 < uVar3) { // [自动静态注释] 条件判断/分支
    uVar5 = 0x1fffffffffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (uVar5 != 0) { // [自动静态注释] 条件判断/分支
    lVar2 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar5 << 3,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar2 != 0) goto LAB__text__005cb50c; // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)param_1[3] + 0xb8))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__005cb50c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar4 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = uVar4 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar4 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
LAB__text__005cb648: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  plVar6 = (long *)(lVar2 + lVar9 * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = lVar2 + uVar5 * 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(uVar4 + 0x18 + *(long *)(uVar4 + 0x98) * 8) = param_1[3];
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
  lVar9 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_2 = 0;
  plVar7 = plVar6 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *plVar6 = lVar9;
  lVar9 = *(long *)(uVar4 + 0x98) + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(uVar4 + 0x98) = lVar9;
  plVar10 = (long *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar8 = (long *)param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar8 == plVar10) { // [自动静态注释] 条件判断/分支
    lVar9 = param_1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *param_1 = (long)plVar6;
    param_1[1] = (long)plVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[2] = lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    do { // [自动静态注释] 循环/迭代
      if (lVar9 == 0x10) goto LAB__text__005cb648; // [自动静态注释] 条件判断/分支
      *(long *)(uVar4 + 0x18 + lVar9 * 8) = param_1[3];
      *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
      plVar8 = plVar8 + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar9 = *plVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *plVar8 = 0;
      plVar6 = plVar6 + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *plVar6 = lVar9;
      lVar9 = *(long *)(uVar4 + 0x98) + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long *)(uVar4 + 0x98) = lVar9;
    } while (plVar8 != plVar10); // [自动静态注释] 循环/迭代
    plVar8 = (long *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar10 = (long *)param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar9 = param_1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *param_1 = (long)plVar6;
    param_1[1] = (long)plVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[2] = lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (plVar10 != plVar8) { // [自动静态注释] 条件判断/分支
      do { // [自动静态注释] 循环/迭代
        plVar6 = plVar10 + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (*plVar6 != 0) { // [自动静态注释] 条件判断/分支
          (**(code **)(*(long *)(*plVar6 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          plVar10[-1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        plVar10 = plVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (plVar6 != plVar8); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  if (plVar8 == (long *)0x0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Could not recover jumptable at 0x005cb630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],plVar8,lVar9 - (long)plVar8,8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



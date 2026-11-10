/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004A1E70
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a1e70; name: FUN_.text__005a1e70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005a1e70(long *param_1,long *param_2,undefined4 param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auVar12 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar10 = param_1[1] - *param_1 >> 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = lVar10 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar4 >> 0x3c != 0) { // [自动静态注释] 条件判断/分支
    auVar12 = FUN__text__005a1bfc(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    plVar2 = auVar12._0_8_; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar1 = *(long *)(*_DAT_008a0228 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar10 = _DAT_008a55a8 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(plVar2 + 3) = param_3;
    plVar2[2] = lVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *plVar2 = lVar10;
    plVar2[1] = auVar12._8_8_; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar3 = param_1[2] - *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = (long)uVar3 >> 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar5 <= uVar4) { // [自动静态注释] 条件判断/分支
    uVar5 = uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (0x7fffffffffffffef < uVar3) { // [自动静态注释] 条件判断/分支
    uVar5 = 0xfffffffffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (uVar5 != 0) { // [自动静态注释] 条件判断/分支
    lVar1 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar5 << 4,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar1 != 0) goto LAB__text__005a1efc; // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)param_1[3] + 0xb8))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__005a1efc: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar4 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = uVar4 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar4 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
LAB__text__005a203c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  plVar2 = (long *)(lVar1 + lVar10 * 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar1 = lVar1 + uVar5 * 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(uVar4 + 0x18 + *(long *)(uVar4 + 0x98) * 8) = param_1[3];
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
  lVar10 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_2 = 0;
  *plVar2 = lVar10;
  plVar2[1] = param_2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar10 = *(long *)(uVar4 + 0x98) + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(uVar4 + 0x98) = lVar10;
  plVar11 = (long *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar9 = (long *)param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar6 = plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar9 == plVar11) { // [自动静态注释] 条件判断/分支
    lVar10 = param_1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *param_1 = (long)plVar2;
    param_1[1] = (long)(plVar2 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[2] = lVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    do { // [自动静态注释] 循环/迭代
      if (lVar10 == 0x10) goto LAB__text__005a203c; // [自动静态注释] 条件判断/分支
      *(long *)(uVar4 + 0x18 + lVar10 * 8) = param_1[3];
      *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
      plVar8 = plVar9 + -2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar10 = *plVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *plVar8 = 0;
      plVar7 = plVar6 + -2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *plVar7 = lVar10;
      plVar6[-1] = plVar9[-1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar10 = *(long *)(uVar4 + 0x98) + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long *)(uVar4 + 0x98) = lVar10;
      plVar6 = plVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar9 = plVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (plVar8 != plVar11); // [自动静态注释] 循环/迭代
    plVar9 = (long *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar11 = (long *)param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar10 = param_1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *param_1 = (long)plVar7;
    param_1[1] = (long)(plVar2 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[2] = lVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (plVar11 != plVar9) { // [自动静态注释] 条件判断/分支
      do { // [自动静态注释] 循环/迭代
        plVar2 = plVar11 + -2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (*plVar2 != 0) { // [自动静态注释] 条件判断/分支
          (**(code **)(*(long *)(*plVar2 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          plVar11[-2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        plVar11 = plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (plVar2 != plVar9); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  if (plVar9 == (long *)0x0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Could not recover jumptable at 0x005a2024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],plVar9,lVar10 - (long)plVar9,8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



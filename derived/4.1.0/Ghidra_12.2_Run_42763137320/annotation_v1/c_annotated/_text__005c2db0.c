/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004C2DB0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005c2db0; name: FUN_.text__005c2db0
 */


void FUN__text__005c2db0(long *param_1,undefined8 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  code *pcVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar7 = param_1[1] - *param_1 >> 9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar9 = lVar7 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar9 >> 0x37 != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__005b8a24(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
                    /* WARNING: Does not return */
    pcVar1 = (code *)UndefinedInstructionException(0,0x5c2f7c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (*pcVar1)(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  uVar3 = param_1[2] - *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = (long)uVar3 >> 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar5 <= uVar9) { // [自动静态注释] 条件判断/分支
    uVar5 = uVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (0x7ffffffffffffdff < uVar3) { // [自动静态注释] 条件判断/分支
    uVar5 = 0x7fffffffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (uVar5 != 0) { // [自动静态注释] 条件判断/分支
    lVar2 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar5 << 9,0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar2 != 0) goto LAB__text__005c2e40; // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)param_1[3] + 0xb8))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__005c2e40: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar9 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar9 = uVar9 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar9 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
LAB__text__005c2f70: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  lVar8 = lVar2 + lVar7 * 0x200; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = lVar2 + uVar5 * 0x200; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(uVar9 + 0x18 + *(long *)(uVar9 + 0x98) * 8) = param_1[3];
  *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + 1;
  FUN__text__005bff30(lVar8,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar7 = lVar8 + 0x200; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar4 = *(long *)(uVar9 + 0x98) + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(uVar9 + 0x98) = lVar4;
  lVar10 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar6 = param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar6 == lVar10) { // [自动静态注释] 条件判断/分支
    *param_1 = lVar8;
    param_1[1] = lVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar7 = param_1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[2] = lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    do { // [自动静态注释] 循环/迭代
      if (lVar4 == 0x10) goto LAB__text__005c2f70; // [自动静态注释] 条件判断/分支
      lVar6 = lVar6 + -0x200; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar8 = lVar8 + -0x200; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long *)(uVar9 + 0x18 + lVar4 * 8) = param_1[3];
      *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + 1;
      FUN__text__005a6738(lVar8,lVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
      lVar4 = *(long *)(uVar9 + 0x98) + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long *)(uVar9 + 0x98) = lVar4;
    } while (lVar6 != lVar10); // [自动静态注释] 循环/迭代
    lVar6 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar10 = param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *param_1 = lVar8;
    param_1[1] = lVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar7 = param_1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[2] = lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    while (lVar10 != lVar6) { // [自动静态注释] 循环/迭代
      lVar10 = lVar10 + -0x200; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__0014821c(lVar10); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  if (lVar6 == 0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Could not recover jumptable at 0x005c2f44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar6,lVar7 - lVar6,0x10); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



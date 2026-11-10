/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004B8A40
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005b8a40; name: FUN_.text__005b8a40
 */


ulong FUN__text__005b8a40(long *param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                         undefined8 param_5) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auVar10 [12]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar7 = param_1[1] - *param_1 >> 9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar9 = lVar7 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar9 >> 0x37 != 0) { // [自动静态注释] 条件判断/分支
    auVar10 = FUN__text__005b8a24(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    return (ulong)*(byte *)(*(long *)(*(long *)(*(long *)(auVar10._0_8_ + 0x68) + 0x260) + // [自动静态注释] 返回表达式；具体返回语义取决于调用者
                                      (long)auVar10._8_4_ * 0x60 + 0x40) + 0x38); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  uVar2 = param_1[2] - *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = (long)uVar2 >> 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar4 <= uVar9) { // [自动静态注释] 条件判断/分支
    uVar4 = uVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (0x7ffffffffffffdff < uVar2) { // [自动静态注释] 条件判断/分支
    uVar4 = 0x7fffffffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (uVar4 != 0) { // [自动静态注释] 条件判断/分支
    lVar1 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar4 << 9,0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar1 != 0) goto LAB__text__005b8ae0; // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)param_1[3] + 0xb8))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__005b8ae0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar9 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar9 = uVar9 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar9 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
LAB__text__005b8c28: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  lVar8 = lVar1 + lVar7 * 0x200; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar1 = lVar1 + uVar4 * 0x200; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(uVar9 + 0x18 + *(long *)(uVar9 + 0x98) * 8) = param_1[3];
  *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + 1;
  uVar4 = FUN__text__005d51dc(lVar8,param_2,*param_3,*param_4,param_5); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar7 = lVar8 + 0x200; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar3 = *(long *)(uVar9 + 0x98) + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(uVar9 + 0x98) = lVar3;
  lVar6 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar5 = param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar5 == lVar6) { // [自动静态注释] 条件判断/分支
    *param_1 = lVar8;
    param_1[1] = lVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar7 = param_1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[2] = lVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    do { // [自动静态注释] 循环/迭代
      if (lVar3 == 0x10) goto LAB__text__005b8c28; // [自动静态注释] 条件判断/分支
      lVar5 = lVar5 + -0x200; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar8 = lVar8 + -0x200; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long *)(uVar9 + 0x18 + lVar3 * 8) = param_1[3];
      *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + 1;
      uVar4 = FUN__text__005a6738(lVar8,lVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
      lVar3 = *(long *)(uVar9 + 0x98) + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long *)(uVar9 + 0x98) = lVar3;
    } while (lVar5 != lVar6); // [自动静态注释] 循环/迭代
    lVar5 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar6 = param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *param_1 = lVar8;
    param_1[1] = lVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar7 = param_1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[2] = lVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    while (lVar6 != lVar5) { // [自动静态注释] 循环/迭代
      lVar6 = lVar6 + -0x200; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar4 = FUN__text__0014821c(lVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  if (lVar5 == 0) { // [自动静态注释] 条件判断/分支
    return uVar4; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Could not recover jumptable at 0x005b8bf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar9 = (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar5,lVar7 - lVar5,0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return uVar9; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



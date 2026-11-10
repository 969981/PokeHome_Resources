/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004B6650
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005b6650; name: FUN_.text__005b6650
 */


void FUN__text__005b6650(long *param_1,undefined8 *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar9 = param_1[1] - *param_1 >> 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar6 = lVar9 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar6 >> 0x3d != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__005b67c0(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
                    /* WARNING: Subroutine does not return */
    FUN__text__001187c0(0x71a95e); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  uVar4 = param_1[2] - *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar7 = (long)uVar4 >> 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar7 <= uVar6) { // [自动静态注释] 条件判断/分支
    uVar7 = uVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (0x7ffffffffffffff7 < uVar4) { // [自动静态注释] 条件判断/分支
    uVar7 = 0x1fffffffffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (uVar7 != 0) { // [自动静态注释] 条件判断/分支
    lVar2 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar7 << 3,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar2 != 0) goto LAB__text__005b66d8; // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)param_1[3] + 0xb8))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__005b66d8: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar6 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar6 = uVar6 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar6 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
LAB__text__005b67b4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(long *)(uVar6 + 0x18 + *(long *)(uVar6 + 0x98) * 8) = param_1[3];
  puVar5 = (undefined8 *)(lVar2 + lVar9 * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + 1;
  puVar8 = puVar5 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *puVar5 = *param_2;
  lVar9 = *(long *)(uVar6 + 0x98) + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(uVar6 + 0x98) = lVar9;
  puVar1 = (undefined8 *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar3 = (undefined8 *)param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (puVar3 != puVar1) { // [自动静态注释] 条件判断/分支
    do { // [自动静态注释] 循环/迭代
      if (lVar9 == 0x10) goto LAB__text__005b67b4; // [自动静态注释] 条件判断/分支
      *(long *)(uVar6 + 0x18 + lVar9 * 8) = param_1[3];
      *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + 1;
      puVar3 = puVar3 + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar5 = puVar5 + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *puVar5 = *puVar3;
      lVar9 = *(long *)(uVar6 + 0x98) + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long *)(uVar6 + 0x98) = lVar9;
    } while (puVar3 != puVar1); // [自动静态注释] 循环/迭代
    puVar3 = (undefined8 *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *param_1 = (long)puVar5;
  param_1[1] = (long)puVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar9 = param_1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[2] = lVar2 + uVar7 * 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (puVar3 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Could not recover jumptable at 0x005b67a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],puVar3,lVar9 - (long)puVar3,8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



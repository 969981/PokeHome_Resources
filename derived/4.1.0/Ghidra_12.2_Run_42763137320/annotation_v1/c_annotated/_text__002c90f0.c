/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001C90F0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002c90f0; name: FUN_.text__002c90f0
 */


void FUN__text__002c90f0(long *param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar14 = param_1[1] - *param_1 >> 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar8 = lVar14 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar8 >> 0x3b != 0) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__002c9298(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  uVar7 = param_1[2] - *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar9 = (long)uVar7 >> 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar9 <= uVar8) { // [自动静态注释] 条件判断/分支
    uVar9 = uVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (0x7fffffffffffffdf < uVar7) { // [自动静态注释] 条件判断/分支
    uVar9 = 0x7ffffffffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (uVar9 != 0) { // [自动静态注释] 条件判断/分支
    lVar4 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar9 << 5,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar4 != 0) goto LAB__text__002c9184; // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)param_1[3] + 0xb8))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__002c9184: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar8 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar8 = uVar8 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar8 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
LAB__text__002c928c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  puVar1 = (undefined8 *)(lVar4 + lVar14 * 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(uVar8 + 0x18 + *(long *)(uVar8 + 0x98) * 8) = param_1[3];
  *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
  uVar10 = *param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar13 = *param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)puVar1 = *param_2;
  puVar1[1] = uVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[2] = uVar13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[3] = uVar13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar14 = *(long *)(uVar8 + 0x98) + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(uVar8 + 0x98) = lVar14;
  puVar2 = (undefined8 *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar6 = (undefined8 *)param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar11 = puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar12 = puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (puVar6 != puVar2) { // [自动静态注释] 条件判断/分支
    do { // [自动静态注释] 循环/迭代
      if (lVar14 == 0x10) goto LAB__text__002c928c; // [自动静态注释] 条件判断/分支
      *(long *)(uVar8 + 0x18 + lVar14 * 8) = param_1[3];
      *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
      puVar5 = puVar6 + -4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar13 = puVar6[-3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar10 = puVar6[-2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar3 = puVar6[-1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar12 = puVar11 + -4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *puVar12 = *puVar5;
      puVar11[-2] = uVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar11[-1] = uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar11[-3] = uVar13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar14 = *(long *)(uVar8 + 0x98) + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long *)(uVar8 + 0x98) = lVar14;
      puVar6 = puVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar11 = puVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (puVar5 != puVar2); // [自动静态注释] 循环/迭代
    puVar6 = (undefined8 *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *param_1 = (long)puVar12;
  param_1[1] = (long)(puVar1 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar14 = param_1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[2] = lVar4 + uVar9 * 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (puVar6 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Could not recover jumptable at 0x002c9274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],puVar6,lVar14 - (long)puVar6,8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



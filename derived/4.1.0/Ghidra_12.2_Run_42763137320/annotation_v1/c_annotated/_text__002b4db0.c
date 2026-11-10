/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001B4DB0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002b4db0; name: FUN_.text__002b4db0
 */


void FUN__text__002b4db0(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar7 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar4 = param_1[1] - lVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar13 = lVar4 >> 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((ulong)((param_1[2] - lVar7 >> 4) * -0x5555555555555555) <= // [自动静态注释] 条件判断/分支
      (ulong)(lVar13 * -0x5555555555555555)) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if (param_1[1] == lVar7) { // [自动静态注释] 条件判断/分支
LAB__text__002b4ecc: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar9 = (undefined8 *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar6 = (undefined8 *)param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar8 = (undefined8 *)(lVar13 * 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (puVar6 == puVar9) { // [自动静态注释] 条件判断/分支
LAB__text__002b4ee4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      lVar4 = param_1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *param_1 = (long)puVar8;
      param_1[1] = (long)puVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_1[2] = (long)puVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      goto joined_r0x002b4ef4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar4 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],lVar4,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar4 == 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)param_1[3] + 0xb8))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      goto LAB__text__002b4ecc; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    puVar9 = (undefined8 *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar6 = (undefined8 *)param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar8 = (undefined8 *)(lVar4 + lVar13 * 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (puVar6 == puVar9) goto LAB__text__002b4ee4; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  uVar12 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar12 = uVar12 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar7 = *(long *)(uVar12 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar10 = puVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    if (lVar7 == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10(lVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    *(long *)((uVar12 | 0x18) + lVar7 * 8) = param_1[3];
    *(long *)(uVar12 + 0x98) = *(long *)(uVar12 + 0x98) + 1;
    puVar5 = puVar6 + -6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = puVar6[-5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar11 = puVar10 + -6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *puVar11 = *puVar5;
    puVar10[-5] = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = puVar6[-4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = puVar6[-3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = puVar6[-1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar10[-2] = puVar6[-2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar10[-1] = uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar10[-4] = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar10[-3] = uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar7 = *(long *)(uVar12 + 0x98) + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long *)(uVar12 + 0x98) = lVar7;
    puVar6 = puVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar10 = puVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while (puVar5 != puVar9); // [自动静态注释] 循环/迭代
  puVar6 = (undefined8 *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar4 = param_1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = (long)puVar11;
  param_1[1] = (long)puVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[2] = (long)puVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
joined_r0x002b4ef4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (puVar6 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Could not recover jumptable at 0x002b4eb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],puVar6,lVar4 - (long)puVar6,8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



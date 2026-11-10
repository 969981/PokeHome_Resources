/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002EB120
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003eb120; name: FUN_.text__003eb120
 */


void FUN__text__003eb120(long *param_1,undefined8 *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar8 = param_1[1] - *param_1 >> 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar7 = lVar8 * -0x5555555555555555 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (0xaaaaaaaaaaaaaaa < uVar7) { // [自动静态注释] 条件判断/分支
    FUN__text__003eb2d0(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
                    /* WARNING: Subroutine does not return */
    FUN__text__001187c0(0x71a95e); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  lVar6 = param_1[2] - *param_1 >> 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar9 = lVar6 * 0x5555555555555556; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar9 <= uVar7) { // [自动静态注释] 条件判断/分支
    uVar9 = uVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (0x555555555555554 < (ulong)(lVar6 * -0x5555555555555555)) { // [自动静态注释] 条件判断/分支
    uVar9 = 0xaaaaaaaaaaaaaaa; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (uVar9 != 0) { // [自动静态注释] 条件判断/分支
    lVar6 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar9 * 0x18,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar6 != 0) goto LAB__text__003eb1c8; // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)param_1[3] + 0xb8))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__003eb1c8: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar7 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar7 = uVar7 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar7 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
LAB__text__003eb2c4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  puVar5 = (undefined8 *)(lVar6 + lVar8 * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(uVar7 + 0x18 + *(long *)(uVar7 + 0x98) * 8) = param_1[3];
  *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
  uVar1 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar12 = param_2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar5[1] = param_2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar5[2] = uVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *puVar5 = uVar1;
  lVar8 = *(long *)(uVar7 + 0x98) + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(uVar7 + 0x98) = lVar8;
  puVar2 = (undefined8 *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar4 = (undefined8 *)param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar10 = puVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar11 = puVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (puVar4 != puVar2) { // [自动静态注释] 条件判断/分支
    do { // [自动静态注释] 循环/迭代
      if (lVar8 == 0x10) goto LAB__text__003eb2c4; // [自动静态注释] 条件判断/分支
      *(long *)(uVar7 + 0x18 + lVar8 * 8) = param_1[3];
      *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
      puVar3 = puVar4 + -3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar1 = puVar4[-2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar12 = puVar4[-1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar11 = puVar10 + -3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *puVar11 = *puVar3;
      puVar10[-2] = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar10[-1] = uVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar8 = *(long *)(uVar7 + 0x98) + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long *)(uVar7 + 0x98) = lVar8;
      puVar4 = puVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar10 = puVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (puVar3 != puVar2); // [自动静态注释] 循环/迭代
    puVar4 = (undefined8 *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *param_1 = (long)puVar11;
  param_1[1] = (long)(puVar5 + 3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar8 = param_1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[2] = lVar6 + uVar9 * 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (puVar4 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Could not recover jumptable at 0x003eb2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],puVar4,lVar8 - (long)puVar4,8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



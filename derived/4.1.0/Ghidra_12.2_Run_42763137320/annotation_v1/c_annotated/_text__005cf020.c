/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004CF020
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005cf020; name: FUN_.text__005cf020
 */


void FUN__text__005cf020(long *param_1,undefined8 *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

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
  undefined8 *puVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar12 = param_1[1] - *param_1 >> 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar8 = lVar12 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar8 >> 0x3c != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__005cf194(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
                    /* WARNING: Subroutine does not return */
    FUN__text__001187c0(0x71a95e); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  uVar7 = param_1[2] - *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar9 = (long)uVar7 >> 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar9 <= uVar8) { // [自动静态注释] 条件判断/分支
    uVar9 = uVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (0x7fffffffffffffef < uVar7) { // [自动静态注释] 条件判断/分支
    uVar9 = 0xfffffffffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (uVar9 != 0) { // [自动静态注释] 条件判断/分支
    lVar4 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar9 << 4,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar4 != 0) goto LAB__text__005cf0a8; // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)param_1[3] + 0xb8))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__005cf0a8: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar8 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar8 = uVar8 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar8 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
LAB__text__005cf188: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  puVar1 = (undefined8 *)(lVar4 + lVar12 * 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(uVar8 + 0x18 + *(long *)(uVar8 + 0x98) * 8) = param_1[3];
  *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
  uVar3 = param_2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *puVar1 = *param_2;
  puVar1[1] = uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar12 = *(long *)(uVar8 + 0x98) + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(uVar8 + 0x98) = lVar12;
  puVar2 = (undefined8 *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar6 = (undefined8 *)param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar10 = puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar11 = puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (puVar6 != puVar2) { // [自动静态注释] 条件判断/分支
    do { // [自动静态注释] 循环/迭代
      if (lVar12 == 0x10) goto LAB__text__005cf188; // [自动静态注释] 条件判断/分支
      *(long *)(uVar8 + 0x18 + lVar12 * 8) = param_1[3];
      *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
      puVar5 = puVar6 + -2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar3 = puVar6[-1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar11 = puVar10 + -2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *puVar11 = *puVar5;
      puVar10[-1] = uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar12 = *(long *)(uVar8 + 0x98) + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long *)(uVar8 + 0x98) = lVar12;
      puVar6 = puVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar10 = puVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (puVar5 != puVar2); // [自动静态注释] 循环/迭代
    puVar6 = (undefined8 *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *param_1 = (long)puVar11;
  param_1[1] = (long)(puVar1 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar12 = param_1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[2] = lVar4 + uVar9 * 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (puVar6 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Could not recover jumptable at 0x005cf174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],puVar6,lVar12 - (long)puVar6,8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



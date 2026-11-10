/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004E8060
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e8060; name: FUN_.text__005e8060
 */


void FUN__text__005e8060(long *param_1,undefined8 *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar9 = param_1[1] - *param_1 >> 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar6 = lVar9 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar6 >> 0x3d != 0) { // [自动静态注释] 条件判断/分支
    puVar3 = (undefined8 *)FUN__text__005e4ff4(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__005e251c(); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined4 *)(puVar3 + 0x4d) = 0;
    puVar3[9] = 0x8979b8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar3[10] = 0x8979f8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *puVar3 = 0x897960;
    puVar3[0x26] = puVar3[0x26] | 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar5 = param_1[2] - *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar7 = (long)uVar5 >> 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar7 <= uVar6) { // [自动静态注释] 条件判断/分支
    uVar7 = uVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (0x7ffffffffffffff7 < uVar5) { // [自动静态注释] 条件判断/分支
    uVar7 = 0x1fffffffffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (uVar7 != 0) { // [自动静态注释] 条件判断/分支
    lVar2 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar7 << 3,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar2 != 0) goto LAB__text__005e80e8; // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)param_1[3] + 0xb8))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__005e80e8: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar6 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar6 = uVar6 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar6 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
LAB__text__005e81c4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(long *)(uVar6 + 0x18 + *(long *)(uVar6 + 0x98) * 8) = param_1[3];
  puVar3 = (undefined8 *)(lVar2 + lVar9 * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + 1;
  puVar8 = puVar3 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *puVar3 = *param_2;
  lVar9 = *(long *)(uVar6 + 0x98) + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(uVar6 + 0x98) = lVar9;
  puVar1 = (undefined8 *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar4 = (undefined8 *)param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (puVar4 != puVar1) { // [自动静态注释] 条件判断/分支
    do { // [自动静态注释] 循环/迭代
      if (lVar9 == 0x10) goto LAB__text__005e81c4; // [自动静态注释] 条件判断/分支
      *(long *)(uVar6 + 0x18 + lVar9 * 8) = param_1[3];
      *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + 1;
      puVar4 = puVar4 + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar3 = puVar3 + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *puVar3 = *puVar4;
      lVar9 = *(long *)(uVar6 + 0x98) + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long *)(uVar6 + 0x98) = lVar9;
    } while (puVar4 != puVar1); // [自动静态注释] 循环/迭代
    puVar4 = (undefined8 *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *param_1 = (long)puVar3;
  param_1[1] = (long)puVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar9 = param_1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[2] = lVar2 + uVar7 * 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (puVar4 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Could not recover jumptable at 0x005e81b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],puVar4,lVar9 - (long)puVar4,8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



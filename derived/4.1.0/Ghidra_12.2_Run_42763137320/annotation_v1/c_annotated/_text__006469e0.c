/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005469E0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006469e0; name: FUN_.text__006469e0
 */


void FUN__text__006469e0(long *param_1,ulong param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar3 = (undefined8 *)param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_2 <= (ulong)(param_1[2] - (long)puVar3 >> 3)) { // [自动静态注释] 条件判断/分支
    puVar4 = puVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (param_2 != 0) { // [自动静态注释] 条件判断/分支
      uVar7 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar4 = puVar3 + param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar10 = param_2 << 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar7 = uVar7 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar1 = *(long *)(uVar7 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        if (lVar1 == 0x10) goto LAB__text__00646bbc; // [自动静态注释] 条件判断/分支
        lVar10 = lVar10 + -8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(long *)((uVar7 | 0x18) + lVar1 * 8) = param_1[3];
        *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
        *puVar3 = 0;
        lVar1 = *(long *)(uVar7 + 0x98) + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(long *)(uVar7 + 0x98) = lVar1;
        puVar3 = puVar3 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (lVar10 != 0); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    param_1[1] = (long)puVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  lVar10 = (long)puVar3 - *param_1 >> 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar7 = lVar10 + param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar7 >> 0x3d != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__00646bc8(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
                    /* WARNING: Subroutine does not return */
    FUN__text__001187c0(0x71a95e); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  uVar5 = param_1[2] - *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar6 = (long)uVar5 >> 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar6 <= uVar7) { // [自动静态注释] 条件判断/分支
    uVar6 = uVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (0x7ffffffffffffff7 < uVar5) { // [自动静态注释] 条件判断/分支
    uVar6 = 0x1fffffffffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (uVar6 != 0) { // [自动静态注释] 条件判断/分支
    lVar1 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar6 << 3,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar1 != 0) goto LAB__text__00646a74; // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)param_1[3] + 0xb8))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__00646a74: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar7 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar3 = (undefined8 *)(lVar1 + lVar10 * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar10 = param_2 * 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar7 = uVar7 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar8 = *(long *)(uVar7 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar4 = puVar3 + param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar9 = puVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    if (lVar8 == 0x10) goto LAB__text__00646bbc; // [自动静态注释] 条件判断/分支
    lVar10 = lVar10 + -8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long *)((uVar7 | 0x18) + lVar8 * 8) = param_1[3];
    *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
    *puVar9 = 0;
    lVar8 = *(long *)(uVar7 + 0x98) + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long *)(uVar7 + 0x98) = lVar8;
    puVar9 = puVar9 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while (lVar10 != 0); // [自动静态注释] 循环/迭代
  puVar9 = (undefined8 *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar2 = (undefined8 *)param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (puVar2 != puVar9) { // [自动静态注释] 条件判断/分支
    do { // [自动静态注释] 循环/迭代
      if (lVar8 == 0x10) { // [自动静态注释] 条件判断/分支
LAB__text__00646bbc: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    /* WARNING: Subroutine does not return */
        FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
      *(long *)((uVar7 | 0x18) + lVar8 * 8) = param_1[3];
      *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
      puVar2 = puVar2 + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar3 = puVar3 + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *puVar3 = *puVar2;
      lVar8 = *(long *)(uVar7 + 0x98) + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long *)(uVar7 + 0x98) = lVar8;
    } while (puVar2 != puVar9); // [自动静态注释] 循环/迭代
    puVar2 = (undefined8 *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *param_1 = (long)puVar3;
  param_1[1] = (long)puVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar10 = param_1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[2] = lVar1 + uVar6 * 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (puVar2 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Could not recover jumptable at 0x00646b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],puVar2,lVar10 - (long)puVar2,8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



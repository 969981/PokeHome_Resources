/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004C18A0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005c18a0; name: FUN_.text__005c18a0
 */


void FUN__text__005c18a0(long *param_1,undefined4 *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 *puVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 *puVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 *puVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 *puVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 *puVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 *puVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar3 = param_1[1] - *param_1 >> 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar8 = lVar3 * -0x5555555555555555 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (0xaaaaaaaaaaaaaaa < uVar8) { // [自动静态注释] 条件判断/分支
    FUN__text__005c1b10(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
                    /* WARNING: Subroutine does not return */
    FUN__text__001187c0(0x71a95e); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  lVar2 = param_1[2] - *param_1 >> 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = lVar2 * 0x5555555555555556; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar4 <= uVar8) { // [自动静态注释] 条件判断/分支
    uVar4 = uVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (0x555555555555554 < (ulong)(lVar2 * -0x5555555555555555)) { // [自动静态注释] 条件判断/分支
    uVar4 = 0xaaaaaaaaaaaaaaa; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (uVar4 == 0) { // [自动静态注释] 条件判断/分支
    lVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar2 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar4 * 0x18,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar2 == 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)param_1[3] + 0xb8))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  uVar8 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar8 = uVar8 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar8 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
LAB__text__005c1b04: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  puVar10 = (undefined4 *)(lVar2 + lVar3 * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(uVar8 + 0x18 + *(long *)(uVar8 + 0x98) * 8) = param_1[3];
  *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
  *puVar10 = *param_2;
  lVar1 = *(long *)(param_2 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(lVar2 + lVar3 * 8 + 8) = lVar1;
  if (lVar1 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar1 = *(long *)(param_2 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(lVar2 + lVar3 * 8 + 0x10) = lVar1;
  if (lVar1 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar2 = lVar2 + uVar4 * 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar3 = *(long *)(uVar8 + 0x98) + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(uVar8 + 0x98) = lVar3;
  puVar9 = (undefined4 *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar7 = (undefined4 *)param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar11 = puVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (puVar7 == puVar9) { // [自动静态注释] 条件判断/分支
    lVar3 = param_1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *param_1 = (long)puVar10;
    param_1[1] = (long)(puVar10 + 6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[2] = lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    do { // [自动静态注释] 循环/迭代
      if (lVar3 == 0x10) goto LAB__text__005c1b04; // [自动静态注释] 条件判断/分支
      *(long *)(uVar8 + 0x18 + lVar3 * 8) = param_1[3];
      *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
      puVar6 = puVar7 + -6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar12 = puVar11 + -6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *puVar12 = *puVar6;
      uVar5 = *(undefined8 *)(puVar7 + -4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(puVar7 + -4) = 0;
      *(undefined8 *)(puVar11 + -4) = uVar5;
      uVar5 = *(undefined8 *)(puVar7 + -2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(puVar7 + -2) = 0;
      *(undefined8 *)(puVar11 + -2) = uVar5;
      lVar3 = *(long *)(uVar8 + 0x98) + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long *)(uVar8 + 0x98) = lVar3;
      puVar7 = puVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar11 = puVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (puVar6 != puVar9); // [自动静态注释] 循环/迭代
    puVar7 = (undefined4 *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar9 = (undefined4 *)param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar3 = param_1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *param_1 = (long)puVar12;
    param_1[1] = (long)(puVar10 + 6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[2] = lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    for (; puVar9 != puVar7; puVar9 = puVar9 + -6) { // [自动静态注释] 循环/迭代
      if (*(long *)(puVar9 + -2) != 0) { // [自动静态注释] 条件判断/分支
        (**(code **)(*(long *)(*(long *)(puVar9 + -2) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *(undefined8 *)(puVar9 + -2) = 0;
      } // [自动静态注释] 作用域/控制流边界
      if (*(long *)(puVar9 + -4) != 0) { // [自动静态注释] 条件判断/分支
        (**(code **)(*(long *)(*(long *)(puVar9 + -4) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *(undefined8 *)(puVar9 + -4) = 0;
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  if (puVar7 == (undefined4 *)0x0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Could not recover jumptable at 0x005c1ae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],puVar7,lVar3 - (long)puVar7,8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



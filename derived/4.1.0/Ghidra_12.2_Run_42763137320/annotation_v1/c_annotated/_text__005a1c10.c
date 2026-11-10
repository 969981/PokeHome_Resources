/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004A1C10
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a1c10; name: FUN_.text__005a1c10
 */


void FUN__text__005a1c10(long *param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar10 = param_1[1] - *param_1 >> 6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar12 = lVar10 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar12 >> 0x3a != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__005a1e54(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
                    /* WARNING: Subroutine does not return */
    FUN__text__001187c0(0x71a95e); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  uVar3 = param_1[2] - *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = (long)uVar3 >> 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar4 <= uVar12) { // [自动静态注释] 条件判断/分支
    uVar4 = uVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (0x7fffffffffffffbf < uVar3) { // [自动静态注释] 条件判断/分支
    uVar4 = 0x3ffffffffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (uVar4 != 0) { // [自动静态注释] 条件判断/分支
    lVar2 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar4 << 6,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar2 != 0) goto LAB__text__005a1ca8; // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)param_1[3] + 0xb8))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__005a1ca8: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar12 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar12 = uVar12 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar12 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
LAB__text__005a1e48: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  lVar10 = lVar2 + lVar10 * 0x40; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = lVar2 + uVar4 * 0x40; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(uVar12 + 0x18 + *(long *)(uVar12 + 0x98) * 8) = param_1[3];
  *(long *)(uVar12 + 0x98) = *(long *)(uVar12 + 0x98) + 1;
  FUN__text__005a0e08(lVar10,param_2,*param_3,*param_4); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar6 = *(long *)(uVar12 + 0x98) + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(uVar12 + 0x98) = lVar6;
  lVar11 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar9 = param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar9 == lVar11) { // [自动静态注释] 条件判断/分支
    *param_1 = lVar10;
    param_1[1] = lVar10 + 0x40; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar11 = param_1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[2] = lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar5 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      if (lVar6 == 0x10) goto LAB__text__005a1e48; // [自动静态注释] 条件判断/分支
      lVar1 = lVar10 + lVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long *)(uVar12 + 0x18 + lVar6 * 8) = param_1[3];
      lVar6 = lVar9 + lVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar5 = lVar5 + -0x40; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long *)(uVar12 + 0x98) = *(long *)(uVar12 + 0x98) + 1;
      uVar7 = *(undefined8 *)(lVar6 + -0x40); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(lVar6 + -0x40) = 0;
      *(undefined8 *)(lVar1 + -0x40) = uVar7;
      *(undefined8 *)(lVar1 + -0x38) = *(undefined8 *)(lVar6 + -0x38);
      *(undefined8 *)(lVar1 + -0x30) = *(undefined8 *)(lVar6 + -0x30);
      *(undefined8 *)(lVar1 + -0x28) = *(undefined8 *)(lVar6 + -0x28);
      uVar7 = *(undefined8 *)(lVar6 + -0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(lVar6 + -0x20) = 0;
      *(undefined8 *)(lVar1 + -0x20) = uVar7;
      uVar7 = *(undefined8 *)(lVar6 + -0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar8 = *(undefined8 *)(lVar6 + -8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(lVar6 + -0x10);
      *(undefined8 *)(lVar1 + -8) = uVar8;
      *(undefined8 *)(lVar1 + -0x18) = uVar7;
      lVar6 = *(long *)(uVar12 + 0x98) + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long *)(uVar12 + 0x98) = lVar6;
    } while (lVar9 + lVar5 != lVar11); // [自动静态注释] 循环/迭代
    lVar9 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar6 = param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar11 = param_1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *param_1 = lVar10 + lVar5;
    param_1[1] = lVar10 + 0x40; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[2] = lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    for (; lVar6 != lVar9; lVar6 = lVar6 + -0x40) { // [自动静态注释] 循环/迭代
      if (*(long *)(lVar6 + -0x20) != 0) { // [自动静态注释] 条件判断/分支
        (**(code **)(*(long *)(*(long *)(lVar6 + -0x20) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *(undefined8 *)(lVar6 + -0x20) = 0;
      } // [自动静态注释] 作用域/控制流边界
      if (*(long *)(lVar6 + -0x40) != 0) { // [自动静态注释] 条件判断/分支
        (**(code **)(*(long *)(*(long *)(lVar6 + -0x40) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *(undefined8 *)(lVar6 + -0x40) = 0;
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  if (lVar9 == 0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Could not recover jumptable at 0x005a1e2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar9,lVar11 - lVar9,8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



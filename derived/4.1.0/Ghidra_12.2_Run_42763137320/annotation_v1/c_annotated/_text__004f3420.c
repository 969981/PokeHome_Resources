/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003F3420
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f3420; name: FUN_.text__004f3420
 */


void FUN__text__004f3420(long param_1,undefined8 *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(long *)(param_1 + 0x78) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__004f3420(*(long *)(param_1 + 0x78),param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  plVar7 = *(long **)(param_1 + 0x120); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((plVar7 != (long *)0x0) && ((int)plVar7[1] != 0)) { // [自动静态注释] 条件判断/分支
    piVar8 = (int *)*plVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      piVar3 = (int *)*param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar9 = *(uint *)(param_2 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (uVar9 != 0) { // [自动静态注释] 条件判断/分支
        piVar5 = piVar3 + (ulong)uVar9 * 6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        piVar4 = piVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        do { // [自动静态注释] 循环/迭代
          while (*piVar4 == *piVar8) { // [自动静态注释] 循环/迭代
            if (piVar4 < piVar5 + -6) { // [自动静态注释] 条件判断/分支
              uVar1 = *(undefined8 *)(piVar5 + -6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              uVar6 = *(undefined8 *)(piVar5 + -2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              *(undefined8 *)(piVar4 + 2) = *(undefined8 *)(piVar5 + -4);
              *(undefined8 *)(piVar4 + 4) = uVar6;
              *(undefined8 *)piVar4 = uVar1;
              uVar9 = *(uint *)(param_2 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              piVar3 = (int *)*param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            } // [自动静态注释] 作用域/控制流边界
            uVar9 = uVar9 - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *(uint *)(param_2 + 1) = uVar9;
            piVar5 = piVar3 + (ulong)uVar9 * 6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            if (piVar4 == piVar5) goto LAB__text__004f34f8; // [自动静态注释] 条件判断/分支
          } // [自动静态注释] 作用域/控制流边界
          piVar4 = piVar4 + 6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          piVar5 = piVar3 + (ulong)uVar9 * 6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } while (piVar4 != piVar5); // [自动静态注释] 循环/迭代
      } // [自动静态注释] 作用域/控制流边界
LAB__text__004f34f8: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if (uVar9 < *(uint *)((long)param_2 + 0xc)) { // [自动静态注释] 条件判断/分支
LAB__text__004f3524: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *(uint *)(param_2 + 1) = uVar9 + 1;
        if (piVar3 != (int *)0x0) { // [自动静态注释] 条件判断/分支
          uVar1 = *(undefined8 *)piVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          piVar3 = piVar3 + (ulong)uVar9 * 6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar6 = *(undefined8 *)(piVar8 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined8 *)(piVar3 + 2) = *(undefined8 *)(piVar8 + 2);
          *(undefined8 *)(piVar3 + 4) = uVar6;
          *(undefined8 *)piVar3 = uVar1;
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        uVar2 = FUN__text__004f3680(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
        if (((uVar2 & 1) != 0) && (uVar9 < *(uint *)((long)param_2 + 0xc))) { // [自动静态注释] 条件判断/分支
          uVar9 = *(uint *)(param_2 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          piVar3 = (int *)*param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          goto LAB__text__004f3524; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      piVar8 = piVar8 + 6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (piVar8 != (int *)(*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x18)); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003372A0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004372a0; name: FUN_.text__004372a0
 */


void FUN__text__004372a0(long *param_1,long *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ulong uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((int)param_1[1] != 0) { // [自动静态注释] 条件判断/分支
    plVar7 = (long *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      plVar2 = (long *)*param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar4 = *(uint *)(param_2 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar5 = plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (uVar4 == 0) { // [自动静态注释] 条件判断/分支
LAB__text__00437324: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        if (plVar5 == plVar2 + (ulong)uVar4 * 2) goto LAB__text__00437330; // [自动静态注释] 条件判断/分支
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        lVar6 = (ulong)uVar4 << 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        do { // [自动静态注释] 循环/迭代
          if (*plVar5 == *plVar7) goto LAB__text__00437324; // [自动静态注释] 条件判断/分支
          plVar5 = plVar5 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          lVar6 = lVar6 + -0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } while (lVar6 != 0); // [自动静态注释] 循环/迭代
LAB__text__00437330: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *(undefined1 *)(plVar7 + 1) = *(undefined1 *)((long)param_2 + 0x11);
        uVar4 = *(uint *)(param_2 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (*(uint *)((long)param_2 + 0xc) <= uVar4) { // [自动静态注释] 条件判断/分支
          uVar1 = FUN__text__00438430(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
          if (((uVar1 & 1) == 0) || (*(uint *)((long)param_2 + 0xc) <= uVar4)) // [自动静态注释] 条件判断/分支
          goto LAB__text__004373a4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          uVar4 = *(uint *)(param_2 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        *(uint *)(param_2 + 1) = uVar4 + 1;
        if (*param_2 != 0) { // [自动静态注释] 条件判断/分支
          plVar5 = (long *)(*param_2 + (ulong)uVar4 * 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *plVar5 = 0;
          *(undefined1 *)(plVar5 + 1) = 0;
          lVar6 = *plVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(char *)(plVar5 + 1) = (char)plVar7[1];
          *plVar5 = lVar6;
          *(byte *)(param_2 + 2) = *(byte *)(param_2 + 2) & 0xfe | 3 < *(byte *)(param_2 + 2);
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
LAB__text__004373a4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      lVar3 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar4 = *(uint *)(param_1 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar6 = lVar3 + (ulong)uVar4 * 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar5 = (long *)(lVar6 + -0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (plVar7 < plVar5) { // [自动静态注释] 条件判断/分支
        lVar3 = *plVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined1 *)(plVar7 + 1) = *(undefined1 *)(lVar6 + -8);
        *plVar7 = lVar3;
        uVar4 = *(uint *)(param_1 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar3 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      *(uint *)(param_1 + 1) = uVar4 - 1;
    } while (plVar7 != (long *)(lVar3 + (ulong)(uVar4 - 1) * 0x10)); // [自动静态注释] 循环/迭代
    *(byte *)(param_2 + 2) = *(byte *)(param_2 + 2) & 0xfe | 3 < *(byte *)(param_2 + 2);
    *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfe | 3 < *(byte *)(param_1 + 2);
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00338210
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00438210; name: FUN_.text__00438210
 */


void FUN__text__00438210(long *param_1,long *param_2,long *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((int)param_1[1] != 0) { // [自动静态注释] 条件判断/分支
    plVar6 = (long *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      while( true ) { // [自动静态注释] 循环/迭代
        plVar1 = (long *)(*(code *)**(undefined8 **)*plVar6)(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if ((((((*param_3 == 0) || (*plVar1 == *param_3)) && // [自动静态注释] 条件判断/分支
              (((int)param_3[1] == 0 || ((int)plVar1[1] == (int)param_3[1])))) && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
             (((int)param_3[2] == 0 || ((int)plVar1[2] == (int)param_3[2])))) && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            (((char)param_3[3] == -1 || ((char)plVar1[3] == (char)param_3[3])))) && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
           ((((char)param_3[4] == -1 || ((char)plVar1[4] == (char)param_3[4])) && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            ((param_3[5] == 0 || (plVar1[5] == param_3[5])))))) break; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        plVar6 = plVar6 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (plVar6 == (long *)(*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x10)) { // [自动静态注释] 条件判断/分支
          return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      plVar3 = (long *)*param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar7 = *(uint *)(param_2 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar1 = plVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (uVar7 == 0) { // [自动静态注释] 条件判断/分支
LAB__text__00438324: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        if (plVar1 == plVar3 + (ulong)uVar7 * 2) goto LAB__text__00438330; // [自动静态注释] 条件判断/分支
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        lVar5 = (ulong)uVar7 << 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        do { // [自动静态注释] 循环/迭代
          if (*plVar1 == *plVar6) goto LAB__text__00438324; // [自动静态注释] 条件判断/分支
          plVar1 = plVar1 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          lVar5 = lVar5 + -0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } while (lVar5 != 0); // [自动静态注释] 循环/迭代
LAB__text__00438330: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *(undefined1 *)(plVar6 + 1) = *(undefined1 *)((long)param_2 + 0x11);
        uVar7 = *(uint *)(param_2 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (*(uint *)((long)param_2 + 0xc) <= uVar7) { // [自动静态注释] 条件判断/分支
          uVar2 = FUN__text__00438430(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
          if (((uVar2 & 1) == 0) || (*(uint *)((long)param_2 + 0xc) <= uVar7)) // [自动静态注释] 条件判断/分支
          goto LAB__text__004383a4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          uVar7 = *(uint *)(param_2 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        *(uint *)(param_2 + 1) = uVar7 + 1;
        if (*param_2 != 0) { // [自动静态注释] 条件判断/分支
          plVar1 = (long *)(*param_2 + (ulong)uVar7 * 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *plVar1 = 0;
          *(undefined1 *)(plVar1 + 1) = 0;
          lVar5 = *plVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(char *)(plVar1 + 1) = (char)plVar6[1];
          *plVar1 = lVar5;
          *(byte *)(param_2 + 2) = *(byte *)(param_2 + 2) & 0xfe | 3 < *(byte *)(param_2 + 2);
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
LAB__text__004383a4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar7 = *(uint *)(param_1 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar5 = *param_1 + (ulong)uVar7 * 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar1 = (long *)(lVar5 + -0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (plVar6 < plVar1) { // [自动静态注释] 条件判断/分支
        lVar4 = *plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined1 *)(plVar6 + 1) = *(undefined1 *)(lVar5 + -8);
        *plVar6 = lVar4;
        uVar7 = *(uint *)(param_1 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      *(uint *)(param_1 + 1) = uVar7 - 1;
      *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfe | 3 < *(byte *)(param_1 + 2);
      *(byte *)(param_2 + 2) = *(byte *)(param_2 + 2) & 0xfe | 3 < *(byte *)(param_2 + 2);
    } while (plVar6 != (long *)(*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x10)); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



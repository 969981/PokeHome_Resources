/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005D7F10
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006d7f10; name: FUN_.text__006d7f10
 */


undefined8 FUN__text__006d7f10(long param_1,long param_2,long param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar2 = *(uint *)(param_1 + 0x1b4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((int)uVar2 <= *(int *)(param_1 + 0x1b0)) { // [自动静态注释] 条件判断/分支
    FUN__text__006d84b0(0x7141c8); // [自动静态注释] 调用尚未恢复正式名称的函数
    return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  lVar3 = *(long *)(param_1 + 0x1d0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar3 == 0) { // [自动静态注释] 条件判断/分支
    iVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(int *)(param_1 + 0x1c0) + 1U != uVar2) { // [自动静态注释] 条件判断/分支
      iVar1 = *(int *)(param_1 + 0x1c0) + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    lVar3 = *(long *)(param_1 + 0x1a8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(int *)(param_1 + 0x1c0) = iVar1;
    if (*(long *)(lVar3 + (long)iVar1 * 0x38 + 8) == 0) { // [自动静态注释] 条件判断/分支
      lVar3 = lVar3 + (long)iVar1 * 0x38; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long *)(param_1 + 0x1d0) = lVar3;
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if (0 < (int)uVar2) { // [自动静态注释] 条件判断/分支
        uVar5 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        do { // [自动静态注释] 循环/迭代
          if (*(long *)(lVar3 + 8) == 0) { // [自动静态注释] 条件判断/分支
            *(long *)(param_1 + 0x1d0) = lVar3;
            *(int *)(param_1 + 0x1c0) = (int)uVar5;
            goto LAB__text__006d7fc8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          } // [自动静态注释] 作用域/控制流边界
          uVar5 = uVar5 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          lVar3 = lVar3 + 0x38; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } while (uVar2 != uVar5); // [自动静态注释] 循环/迭代
      } // [自动静态注释] 作用域/控制流边界
      lVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
LAB__text__006d7fc8: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  plVar6 = *(long **)(param_1 + 0x188); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar7 = *(long *)(param_1 + 0x170); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    if (plVar6 == (long *)(param_1 + 0x180)) { // [自动静态注释] 条件判断/分支
      uVar5 = param_3 + -1 + lVar7 & -param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((long)((*(long *)(param_1 + 0x170) + *(long *)(param_1 + 0x178)) - uVar5) < param_2) { // [自动静态注释] 条件判断/分支
        FUN__text__006d84a0(0,0x1000); // [自动静态注释] 调用尚未恢复正式名称的函数
        FUN__text__006d84b0(0x711669,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
        FUN__text__006d84b0(0x7178eb,*(undefined8 *)(param_1 + 0x1b8), // [自动静态注释] 调用尚未恢复正式名称的函数
                            *(undefined8 *)(param_1 + 0x178));
        return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      plVar6 = (long *)(lVar3 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar7 = *plVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(ulong *)(lVar3 + 8) = uVar5;
      *(long *)(lVar3 + 0x10) = param_2;
      *plVar6 = *(long *)(param_1 + 0x180);
      *(long **)(lVar7 + 8) = (long *)(param_1 + 0x180);
      *(long **)(*(long *)(param_1 + 0x180) + 8) = plVar6;
      *(long *)(param_1 + 0x180) = lVar7;
LAB__text__006d80bc: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *(undefined8 *)(param_1 + 0x1d0) = 0;
      *(int *)(param_1 + 0x1b0) = *(int *)(param_1 + 0x1b0) + 1;
      *(long *)(param_1 + 0x1b8) = *(long *)(param_1 + 0x1b8) + *(long *)(lVar3 + 0x10);
      return *(undefined8 *)(lVar3 + 8); // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    uVar5 = param_3 + -1 + lVar7 & -param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (param_2 <= (long)(plVar6[-2] - uVar5)) { // [自动静态注释] 条件判断/分支
      plVar4 = (long *)(lVar3 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar7 = *plVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(ulong *)(lVar3 + 8) = uVar5;
      *(long *)(lVar3 + 0x10) = param_2;
      *plVar4 = *plVar6;
      *(long **)(lVar7 + 8) = plVar6;
      *(long **)(*plVar6 + 8) = plVar4;
      *plVar6 = lVar7;
      goto LAB__text__006d80bc; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    lVar7 = plVar6[-2] + plVar6[-1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar6 = (long *)plVar6[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while( true ); // [自动静态注释] 循环/迭代
} // [自动静态注释] 作用域/控制流边界



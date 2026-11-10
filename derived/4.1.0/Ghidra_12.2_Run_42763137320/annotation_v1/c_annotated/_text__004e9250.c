/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003E9250
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e9250; name: FUN_.text__004e9250
 */


/* WARNING: Type propagation algorithm not settling */

void FUN__text__004e9250(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar6 = DAT_00aeba20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (DAT_00aeba20 != (long *)0x0 && DAT_00aeba20 + 1 != param_1) { // [自动静态注释] 条件判断/分支
    do { // [自动静态注释] 循环/迭代
      plVar6 = (long *)*plVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (plVar6 != (long *)0x0 && plVar6 + 1 != param_1); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  bVar3 = *(byte *)(plVar6 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar1 = bVar3 & 0xfd; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(byte *)(plVar6 + 2) = bVar1;
  if ((bVar3 & 1) == 0) { // [自动静态注释] 条件判断/分支
    lVar4 = plVar6[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(byte *)(plVar6 + 2) = bVar1 | 1;
    FUN__text__0040e7c0((int)lVar4,*(undefined4 *)((long)plVar6 + 0xc),0,1); // [自动静态注释] 调用尚未恢复正式名称的函数
    for (plVar6 = (long *)*plVar6; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) { // [自动静态注释] 循环/迭代
      if (*(int *)(plVar6 + 1) == (int)lVar4) { // [自动静态注释] 条件判断/分支
        *(byte *)(plVar6 + 2) = *(byte *)(plVar6 + 2) | 1;
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  if (DAT_00aeba20 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    plVar6 = (long *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar7 = DAT_00aeba20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      while (plVar5 = plVar7, plVar7 = (long *)*plVar5, (*(byte *)(plVar5 + 2) >> 1 & 1) == 0) { // [自动静态注释] 循环/迭代
        plVar2 = (long *)&DAT_00aeba20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (DAT_00aeba20 != plVar5) { // [自动静态注释] 条件判断/分支
          plVar2 = plVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        *plVar2 = (long)plVar7;
        if (DAT_00aeba28 == plVar5) { // [自动静态注释] 条件判断/分支
          DAT_00aeba28 = plVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (plVar5 < DAT_00aeba38 || DAT_00aeba38 + (ulong)DAT_00aeba40 * 3 <= plVar5) // [自动静态注释] 条件判断/分支
          goto LAB__text__004e9350; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        else if (plVar5 < DAT_00aeba38 || DAT_00aeba38 + (ulong)DAT_00aeba40 * 3 <= plVar5) { // [自动静态注释] 条件判断/分支
LAB__text__004e9350: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
          DAT_00aeba44 = DAT_00aeba44 + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          plVar5 = plVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          break; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        *plVar5 = (long)DAT_00aeba30;
        DAT_00aeba44 = DAT_00aeba44 + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        DAT_00aeba30 = plVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (plVar7 == (long *)0x0) { // [自动静态注释] 条件判断/分支
          return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      plVar6 = plVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (plVar7 != (long *)0x0); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



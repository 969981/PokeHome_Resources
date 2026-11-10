/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003E95E0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e95e0; name: FUN_.text__004e95e0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN__text__004e95e0(undefined8 param_1,long *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__0040e7c0(param_1,*(undefined4 *)(*param_2 + 0xc),0,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(byte *)(*param_2 + 0x10) = *(byte *)(*param_2 + 0x10) | 1;
  *(byte *)(*param_2 + 0x10) = *(byte *)(*param_2 + 0x10) & 0xfd;
  plVar3 = (long *)*param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (plVar3 != (long *)0x0) { // [自动静态注释] 循环/迭代
    if ((int)plVar3[1] == (int)param_1) { // [自动静态注释] 条件判断/分支
      *(byte *)(plVar3 + 2) = *(byte *)(plVar3 + 2) | 1;
      plVar3 = (long *)*param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    plVar3 = (long *)*plVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *param_2 = (long)plVar3;
  } // [自动静态注释] 作用域/控制流边界
  if (DAT_00aeba20 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    puVar4 = (undefined8 *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar5 = DAT_00aeba20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      while (puVar2 = puVar5, puVar5 = (undefined8 *)*puVar2, (*(byte *)(puVar2 + 2) >> 1 & 1) == 0) // [自动静态注释] 循环/迭代
      { // [自动静态注释] 作用域/控制流边界
        puVar1 = &DAT_00aeba20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (DAT_00aeba20 != puVar2) { // [自动静态注释] 条件判断/分支
          puVar1 = puVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        *puVar1 = puVar5;
        if (DAT_00aeba28 == puVar2) { // [自动静态注释] 条件判断/分支
          DAT_00aeba28 = puVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (puVar2 < DAT_00aeba38 || DAT_00aeba38 + (ulong)DAT_00aeba40 * 3 <= puVar2) // [自动静态注释] 条件判断/分支
          goto LAB__text__004e96cc; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        else if (puVar2 < DAT_00aeba38 || DAT_00aeba38 + (ulong)DAT_00aeba40 * 3 <= puVar2) { // [自动静态注释] 条件判断/分支
LAB__text__004e96cc: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
          DAT_00aeba44 = DAT_00aeba44 + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar2 = puVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          break; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        *puVar2 = DAT_00aeba30;
        DAT_00aeba44 = DAT_00aeba44 + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        DAT_00aeba30 = puVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (puVar5 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
          return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      puVar4 = puVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (puVar5 != (undefined8 *)0x0); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



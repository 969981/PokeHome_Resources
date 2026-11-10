/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005A4900
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006a4900; name: FUN_.text__006a4900
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN__text__006a4900(long param_1,undefined1 *param_2,long *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *__s1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_2 != (undefined1 *)0x0) { // [自动静态注释] 条件判断/分支
    *param_2 = 0;
  } // [自动静态注释] 作用域/控制流边界
  __s1 = (char *)param_3[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(int *)(param_1 + 0x48) == 0) { // [自动静态注释] 条件判断/分支
LAB__text__006a4968: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar5 = (*(code *)*_DAT_008a6960)(0x70,0x10,*_DAT_008a6970); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar5 != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__006a0114(lVar5,__s1); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    lVar2 = (**(code **)(*param_3 + 0x40))(param_3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar3 = *(long **)(param_1 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar4 = (long *)(*plVar3 + (long)(int)plVar3[1] * 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    *plVar4 = lVar5;
    plVar4[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar4[2] = (long)param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar4[3] = lVar2 + 0xb0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar4 = plVar4 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar2 = *plVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar3 = (long *)(param_1 + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *plVar4 = *plVar3;
    *(long **)(lVar2 + 8) = plVar3;
    *(long **)(*plVar3 + 8) = plVar4;
    *plVar3 = lVar2;
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
    *(char *)(lVar5 + 0x18) = (char)param_3[3];
    if (param_2 != (undefined1 *)0x0) { // [自动静态注释] 条件判断/分支
      *param_2 = 1;
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    plVar3 = (long *)(param_1 + 0x40); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      lVar2 = *plVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (lVar2 == param_1 + 0x38) goto LAB__text__006a4968; // [自动静态注释] 条件判断/分支
      lVar5 = *(long *)(lVar2 + -0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar3 = (long *)(lVar2 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      iVar1 = strcmp(__s1,*(char **)(lVar5 + 0x10)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (iVar1 != 0); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return lVar5; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



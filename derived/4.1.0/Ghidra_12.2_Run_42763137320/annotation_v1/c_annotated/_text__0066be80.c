/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0056BE80
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0066be80; name: FUN_.text__0066be80
 */


long * FUN__text__0066be80(long param_1,int param_2,long *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_30; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_3 == (long *)0x0) { // [自动静态注释] 条件判断/分支
    return (long *)0x0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  plVar3 = &local_38; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_38 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_30 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2 = &local_38; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  for (; param_1 < param_3[4]; param_3 = (long *)*param_3) { // [自动静态注释] 循环/迭代
LAB__text__0066beac: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    plVar1 = (long *)*param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (plVar1 == (long *)0x0) goto LAB__text__0066bf60; // [自动静态注释] 条件判断/分支
    if ((param_1 < plVar1[4]) || ((param_1 <= plVar1[4] && (param_2 < (int)plVar1[5])))) { // [自动静态注释] 条件判断/分支
      *param_3 = plVar1[1];
      plVar1[1] = (long)param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_3 = plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*plVar1 == 0) goto LAB__text__0066bf64; // [自动静态注释] 条件判断/分支
    } // [自动静态注释] 作用域/控制流边界
    *plVar3 = (long)param_3;
    plVar1 = plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar3 = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__0066bf58: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    plVar2 = plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (param_3[4] < param_1) { // [自动静态注释] 条件判断/分支
LAB__text__0066befc: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    plVar1 = (long *)param_3[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (plVar1 != (long *)0x0) { // [自动静态注释] 条件判断/分支
      if ((param_1 < plVar1[4]) || ((param_1 <= plVar1[4] && (param_2 <= (int)plVar1[5])))) { // [自动静态注释] 条件判断/分支
        plVar1 = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__0066bf4c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        plVar2[1] = (long)plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        param_3 = plVar1 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        goto LAB__text__0066bf58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      param_3[1] = *plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *plVar1 = (long)param_3;
      if (plVar1[1] != 0) goto LAB__text__0066bf4c; // [自动静态注释] 条件判断/分支
      goto LAB__text__0066bf64; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (param_2 < (int)param_3[5]) goto LAB__text__0066beac; // [自动静态注释] 条件判断/分支
    if ((int)param_3[5] < param_2) goto LAB__text__0066befc; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
LAB__text__0066bf60: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  plVar1 = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__0066bf64: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  plVar2[1] = *plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *plVar3 = plVar1[1];
  *plVar1 = local_30;
  plVar1[1] = local_38; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return plVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



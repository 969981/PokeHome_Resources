/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00397678
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00497678; name: FUN_.text__00497678
 */


void FUN__text__00497678(undefined4 *param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (((param_2 != 0) && (*(long *)(param_1 + 2) != 0)) && // [自动静态注释] 条件判断/分支
     (iVar1 = FUN__text__004961d0(), iVar1 != 0)) { // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar2 = *(undefined8 *)(param_1 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_1 + 2) = 0;
    FUN__text__0049a1f0(*(undefined8 *)(param_2 + 0x40),param_2,param_1,uVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  plVar3 = *(long **)(param_1 + 10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = 0;
  if (plVar3 == (long *)0x0) goto LAB__text__004976f8; // [自动静态注释] 条件判断/分支
  if (*plVar3 == 0) { // [自动静态注释] 条件判断/分支
LAB__text__004976e8: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__00400fc0(2,plVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(undefined4 *)(plVar3 + 1) = 0;
    FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
    *plVar3 = 0;
    *(undefined4 *)((long)plVar3 + 0xc) = 0;
    plVar3 = *(long **)(param_1 + 10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (plVar3 != (long *)0x0) goto LAB__text__004976e8; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)(param_1 + 10) = 0;
LAB__text__004976f8: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (*(long *)(param_1 + 4) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(long *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  param_1[8] = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



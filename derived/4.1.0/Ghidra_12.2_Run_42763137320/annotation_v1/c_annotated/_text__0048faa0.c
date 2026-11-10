/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0038FAA0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0048faa0; name: FUN_.text__0048faa0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0048faa0(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int *piVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *param_1 = _DAT_008a4bf8 + 0x10;
  FUN__text__0048fbc0(param_1,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (param_1[4] != 0) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(param_1 + 5) = 0;
    FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
    param_1[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)((long)param_1 + 0x2c) = 0;
  } // [自动静态注释] 作用域/控制流边界
  if (param_1[6] != 0) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(param_1 + 7) = 0;
    FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
    param_1[6] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)((long)param_1 + 0x3c) = 0;
  } // [自动静态注释] 作用域/控制流边界
  if (param_1[0x1a] != 0) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(param_1 + 0x1b) = 0;
    FUN__text__00400fc0(9); // [自动静态注释] 调用尚未恢复正式名称的函数
    param_1[0x1a] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)((long)param_1 + 0xdc) = 0;
  } // [自动静态注释] 作用域/控制流边界
  if (param_1[8] != 0) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(param_1 + 9) = 0;
    FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
    param_1[8] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)((long)param_1 + 0x4c) = 0;
  } // [自动静态注释] 作用域/控制流边界
  *param_1 = 0x889dc8;
  if (param_1[2] == 0) { // [自动静态注释] 条件判断/分支
    lVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(long *)(param_1[2] + 0x18) = param_1[3];
    lVar4 = param_1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  piVar3 = _DAT_008a40b8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  piVar5 = (int *)param_1[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2 = *(long **)(_DAT_008a40b8 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  piVar1 = _DAT_008a40b8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long **)(_DAT_008a40b8 + 4) != param_1) { // [自动静态注释] 条件判断/分支
    piVar1 = piVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(long *)(piVar1 + 4) = lVar4;
  if (plVar2 == param_1) { // [自动静态注释] 条件判断/分支
    *(int **)(piVar3 + 2) = piVar5;
    *piVar3 = *piVar3 + -1;
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  *piVar3 = *piVar3 + -1;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



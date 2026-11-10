/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002FEE80
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003fee80; name: FUN_.text__003fee80
 */


undefined8 FUN__text__003fee80(int *param_1,int *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int *piVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  piVar1 = (int *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  piVar3 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    piVar2 = piVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    piVar3 = *(int **)(piVar3 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    piVar1 = piVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while (piVar3 != (int *)0x0 && piVar3 != param_2); // [自动静态注释] 循环/迭代
  if (piVar3 == (int *)0x0) { // [自动静态注释] 条件判断/分支
    return 2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  piVar1 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(int **)(param_1 + 4) != piVar3) { // [自动静态注释] 条件判断/分支
    piVar1 = piVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)(piVar1 + 4) = *(undefined8 *)(piVar3 + 4);
  if (*(int **)(param_1 + 2) == piVar3) { // [自动静态注释] 条件判断/分支
    *(int **)(param_1 + 2) = piVar2;
    *param_1 = *param_1 + -1;
    return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  *param_1 = *param_1 + -1;
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



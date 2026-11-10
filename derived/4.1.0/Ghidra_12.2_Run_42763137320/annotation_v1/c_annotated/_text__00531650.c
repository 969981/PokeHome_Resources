/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00431650
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00531650; name: FUN_.text__00531650
 */


float FUN__text__00531650(double *param_1,double *param_2,double *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ulong uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar1 = (ulong)*(uint *)(param_1 + 0x26); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(uint *)(param_1 + 0x26) == 0) { // [自动静态注释] 条件判断/分支
    return 0.0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  dVar2 = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar3 = param_3[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar5 = param_3[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar7 = *param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    uVar1 = uVar1 - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar8 = param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar6 = param_1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar4 = param_1[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar2 = SQRT((dVar8 - dVar7) * (dVar8 - dVar7) + (dVar6 - dVar5) * (dVar6 - dVar5) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                 (dVar4 - dVar3) * (dVar4 - dVar3)) + dVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    dVar3 = dVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar5 = dVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar7 = dVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1 = param_1 + 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while (uVar1 != 0); // [自动静态注释] 循环/迭代
  return (float)(SQRT((*param_2 - dVar8) * (*param_2 - dVar8) + // [自动静态注释] 返回表达式；具体返回语义取决于调用者
                      (param_2[1] - dVar6) * (param_2[1] - dVar6) + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                      (param_2[2] - dVar4) * (param_2[2] - dVar4)) + dVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
} // [自动静态注释] 作用域/控制流边界



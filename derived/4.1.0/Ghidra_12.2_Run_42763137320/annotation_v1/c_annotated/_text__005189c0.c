/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004189C0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005189c0; name: FUN_.text__005189c0
 */


float FUN__text__005189c0(double *param_1,double param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  float fVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_1[7] == param_2) { // [自动静态注释] 条件判断/分支
    return *(float *)(param_1 + 3); // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  fVar4 = *(float *)((long)param_2 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar5 = *(float *)((long)param_2 + 0x1c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar2 = (float)(param_1[1] - *(double *)((long)param_2 + 0x28)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar1 = (float)(*param_1 - *(double *)((long)param_2 + 0x20)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar3 = (float)(param_1[2] - *(double *)((long)param_2 + 0x30)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar6 = fVar4 * fVar1 - *(float *)((long)param_2 + 0x14) * fVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar2 = fVar5 * fVar2 - fVar4 * fVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar3 = *(float *)((long)param_2 + 0x14) * fVar3 - fVar5 * fVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return ((fVar1 - fVar4 * (fVar6 + fVar6)) + *(float *)((long)param_2 + 0x10) * (fVar2 + fVar2) + // [自动静态注释] 返回表达式；具体返回语义取决于调用者
         fVar5 * (fVar3 + fVar3)) / *(float *)((long)param_2 + 0x38); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
} // [自动静态注释] 作用域/控制流边界



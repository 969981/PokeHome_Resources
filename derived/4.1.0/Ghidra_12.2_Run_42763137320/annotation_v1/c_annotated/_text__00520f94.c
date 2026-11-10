/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00420F94
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00520f94; name: FUN_.text__00520f94
 */


undefined1  [16] FUN__text__00520f94(long param_1,double *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined1 auVar1 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  dVar3 = *param_2 - *(double *)(param_1 + 0x598); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar4 = param_2[1] - *(double *)(param_1 + 0x5a0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar5 = param_2[2] - *(double *)(param_1 + 0x5a8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar6 = dVar3 * (double)*(float *)(param_1 + 0x5b0) + (double)*(float *)(param_1 + 0x5b4) * dVar4 // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          + (double)*(float *)(param_1 + 0x5b8) * dVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  dVar2 = (double)-*(float *)(param_1 + 0x5d4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((dVar2 <= dVar6) && (dVar2 = (double)*(float *)(param_1 + 0x5d4), dVar6 <= dVar2)) { // [自动静态注释] 条件判断/分支
    dVar2 = dVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  dVar4 = dVar3 * (double)*(float *)(param_1 + 0x5bc) + (double)*(float *)(param_1 + 0x5c0) * dVar4 // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          + (double)*(float *)(param_1 + 0x5c4) * dVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  dVar3 = (double)-*(float *)(param_1 + 0x5d8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((dVar3 <= dVar4) && (dVar3 = (double)*(float *)(param_1 + 0x5d8), dVar4 <= dVar3)) { // [自动静态注释] 条件判断/分支
    dVar3 = dVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  auVar1._0_8_ = *(double *)(param_1 + 0x598) + (double)*(float *)(param_1 + 0x5b0) * dVar2 + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                 (double)*(float *)(param_1 + 0x5bc) * dVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  auVar1._8_8_ = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return auVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



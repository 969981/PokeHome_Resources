/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0037DA60
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047da60; name: FUN_.text__0047da60
 */


float FUN__text__0047da60(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  double *pdVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double *pdVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double *pdVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(long *)(param_1 + 0x98) == 0) { // [自动静态注释] 条件判断/分支
    return 0.0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  lVar4 = *(long *)(*(long *)(param_1 + 0x98) + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pdVar1 = (double *)(param_1 + 0x78); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pdVar2 = (double *)(param_1 + 0x80); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pdVar3 = (double *)(param_1 + 0x88); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(short *)(lVar4 + 0x38) != 0) { // [自动静态注释] 条件判断/分支
    lVar4 = *(long *)(lVar4 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    pdVar1 = (double *)(lVar4 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    pdVar2 = (double *)(lVar4 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    pdVar3 = (double *)(lVar4 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  dVar7 = *pdVar1 - *(double *)(param_1 + 0x78); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar6 = *pdVar2 - *(double *)(param_1 + 0x80); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar5 = *pdVar3 - *(double *)(param_1 + 0x88); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return (float)SQRT(dVar7 * dVar7 + dVar6 * dVar6 + dVar5 * dVar5); // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



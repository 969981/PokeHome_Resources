/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0041D9B8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0051d9b8; name: FUN_.text__0051d9b8
 */


undefined1  [16] FUN__text__0051d9b8(long param_1,float *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auVar3 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar1 = *(long *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar9 = *(float *)(lVar1 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar8 = *(float *)(lVar1 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar4 = *(float *)(lVar1 + 0x3c) * param_2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar2 = *(float *)(lVar1 + 0x38) * *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar5 = *(float *)(lVar1 + 0x40) * param_2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar6 = *(float *)(lVar1 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar7 = *(float *)(lVar1 + 0x1c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar4 = (fVar6 * fVar5 - fVar7 * fVar4) * fVar9 + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          fVar8 * (fVar8 * fVar2 + fVar4 * fVar6 + fVar5 * fVar7); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  auVar3._0_8_ = *(double *)(lVar1 + 0x20) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                 (double)(fVar4 + fVar4 + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                         fVar2 * (fVar9 * fVar9 - (fVar8 * fVar8 + fVar6 * fVar6 + fVar7 * fVar7))); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  auVar3._8_8_ = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return auVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



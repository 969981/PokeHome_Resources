/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00420320
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00520320; name: FUN_.text__00520320
 */


undefined1  [16] FUN__text__00520320(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

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
  float fVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  fVar2 = *(float *)(param_1 + 0x50) * 0.5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar9 = *(float *)(param_1 + 0xa8) * 0.5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar10 = *(float *)(param_1 + 0x100) * 0.5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar4 = *(float *)(param_1 + 0x158) * 0.5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar1 = *(long *)(param_1 + 0x160); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar5 = (*(float *)(param_1 + 8) + fVar2 * *(float *)(param_1 + 0x14) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
           fVar9 * *(float *)(param_1 + 0x6c) + *(float *)(param_1 + 0x60) + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
           fVar10 * *(float *)(param_1 + 0xc4) + *(float *)(param_1 + 0xb8) + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
           fVar4 * *(float *)(param_1 + 0x11c) + *(float *)(param_1 + 0x110)) * // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          *(float *)(lVar1 + 0x3c) * 0.25;
  fVar6 = (*(float *)(param_1 + 4) + fVar2 * *(float *)(param_1 + 0x10) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
           fVar9 * *(float *)(param_1 + 0x68) + *(float *)(param_1 + 0x5c) + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
           fVar10 * *(float *)(param_1 + 0xc0) + *(float *)(param_1 + 0xb4) + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
           fVar4 * *(float *)(param_1 + 0x118) + *(float *)(param_1 + 0x10c)) * // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          *(float *)(lVar1 + 0x38) * 0.25;
  fVar8 = *(float *)(lVar1 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar7 = *(float *)(lVar1 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar2 = (*(float *)(param_1 + 0xc) + fVar2 * *(float *)(param_1 + 0x18) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
           fVar9 * *(float *)(param_1 + 0x70) + *(float *)(param_1 + 100) + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
           fVar10 * *(float *)(param_1 + 200) + *(float *)(param_1 + 0xbc) + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
           fVar4 * *(float *)(param_1 + 0x120) + *(float *)(param_1 + 0x114)) * // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          *(float *)(lVar1 + 0x40) * 0.25;
  fVar4 = *(float *)(lVar1 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar9 = *(float *)(lVar1 + 0x1c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar2 = (fVar4 * fVar2 - fVar9 * fVar5) * fVar8 + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          fVar7 * (fVar7 * fVar6 + fVar5 * fVar4 + fVar2 * fVar9); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  auVar3._0_8_ = *(double *)(lVar1 + 0x20) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                 (double)(fVar2 + fVar2 + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                         fVar6 * (fVar8 * fVar8 - (fVar7 * fVar7 + fVar4 * fVar4 + fVar9 * fVar9))); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  auVar3._8_8_ = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return auVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00449184
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00549184; name: FUN_.text__00549184
 */


undefined8 FUN__text__00549184(long param_1,undefined4 *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined1 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(undefined4 *)(param_1 + 0x18) = *param_2;
  fVar3 = (float)param_2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(float *)(param_1 + 8) = fVar3;
  fVar4 = (float)param_2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(float *)(param_1 + 0xc) = fVar4;
  fVar2 = exp2f((float)param_2[3] * 0.1660964); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(float *)(param_1 + 0x10) = fVar2;
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 4);
  uVar1 = *(undefined1 *)((long)param_2 + 0x11); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)(param_1 + 0x15) = 1;
  *(undefined1 *)(param_1 + 0x1d) = 1;
  *(undefined1 *)(param_1 + 0x1c) = uVar1;
  *(float *)(param_1 + 8) = fVar3 * 0.01;
  *(float *)(param_1 + 0xc) = fVar4 * 0.01;
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004574A0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005574a0; name: FUN_.text__005574a0
 */


undefined8 FUN__text__005574a0(long param_1,undefined4 *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  float fVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined4 *)(param_1 + 0xc) = param_2[1];
  *(undefined4 *)(param_1 + 0x10) = param_2[2];
  *(undefined4 *)(param_1 + 0x14) = param_2[3];
  *(undefined4 *)(param_1 + 0x18) = param_2[4];
  fVar1 = exp2f((float)param_2[5] * 0.1660964); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(float *)(param_1 + 0x1c) = fVar1;
  fVar2 = expf((float)param_2[6] * -0.06); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar1 = fVar2 + -0.002478838; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (fVar2 + -0.002478838 <= 0.0001) { // [自动静态注释] 条件判断/分支
    fVar1 = 0.0001; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(float *)(param_1 + 0x20) = fVar1;
  *(int *)(param_1 + 0x28) = (int)*(short *)(param_2 + 7);
  *(bool *)(param_1 + 0x24) = *(short *)((long)param_2 + 0x1e) == 1;
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



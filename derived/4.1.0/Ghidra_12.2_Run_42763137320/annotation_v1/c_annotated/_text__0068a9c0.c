/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0058A9C0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0068a9c0; name: FUN_.text__0068a9c0
 */


float FUN__text__0068a9c0(long param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  float fVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(char *)(param_1 + 0x38) == '\0') { // [自动静态注释] 条件判断/分支
    fVar2 = (float)NEON_ucvtf((uint)*(ushort *)(param_2 + 0xc)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar2 = *(float *)(param_1 + 0xc) * fVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar1 = *(float *)(param_1 + 0xc) * (float)(int)*(short *)(param_2 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    fVar2 = *(float *)(param_1 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar1 = (float)NEON_ucvtf((uint)*(ushort *)(param_2 + 0xc)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar1 = (fVar2 - *(float *)(param_1 + 0xc) * fVar1) * 0.5 + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *(float *)(param_1 + 0xc) * (float)(int)*(short *)(param_2 + 8);
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__0068aa54(SUB42(fVar1 + *(float *)(param_1 + 0x14),0),param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(float *)(param_1 + 0x14) = fVar2 + *(float *)(param_1 + 0x14);
  return fVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



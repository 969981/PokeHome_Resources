/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0041727C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0051727c; name: FUN_.text__0051727c
 */


float FUN__text__0051727c(float param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  float fVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(long *)(param_2 + 0x40) == *(long *)(param_2 + 0x48)) { // [自动静态注释] 条件判断/分支
    fVar1 = *(float *)(param_2 + 0x24) * *(float *)(param_2 + 0x14) - // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *(float *)(param_2 + 0x20) * *(float *)(param_2 + 0x18);
    fVar2 = *(float *)(param_2 + 0x1c) * *(float *)(param_2 + 0x18) - // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *(float *)(param_2 + 0x10) * *(float *)(param_2 + 0x24);
    fVar3 = *(float *)(param_2 + 0x10) * *(float *)(param_2 + 0x20) - // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *(float *)(param_2 + 0x1c) * *(float *)(param_2 + 0x14);
    fVar2 = fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    fVar1 = *(float *)(param_2 + 0x28) + *(float *)(param_2 + 0x1c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar2 = *(float *)(param_2 + 0x2c) + *(float *)(param_2 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar3 = *(float *)(param_2 + 0x30) + *(float *)(param_2 + 0x24); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar2 = fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (SQRT(fVar2) == 0.0) { // [自动静态注释] 条件判断/分支
    fVar1 = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    fVar1 = fVar1 * (1.0 / SQRT(fVar2)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  fVar2 = ABS(*(float *)(param_2 + 8)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (ABS(*(float *)(param_2 + 8)) <= ABS(*(float *)(param_2 + 0xc))) { // [自动静态注释] 条件判断/分支
    fVar2 = ABS(*(float *)(param_2 + 0xc)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  fVar3 = ABS(*(float *)(param_2 + 4)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (ABS(*(float *)(param_2 + 4)) <= fVar2) { // [自动静态注释] 条件判断/分支
    fVar3 = fVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  fVar2 = 0.0002; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (2.0 <= fVar3) { // [自动静态注释] 条件判断/分支
    fVar2 = fVar3 * 0.0001; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return param_1 + fVar1 * fVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



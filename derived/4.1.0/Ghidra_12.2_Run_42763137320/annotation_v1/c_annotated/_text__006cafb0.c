/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005CAFB0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006cafb0; name: FUN_.text__006cafb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN__text__006cafb0(float param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  float fVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  fVar1 = *(float *)(param_2 + 0xc) * 3.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar2 = fVar1 + *(float *)(param_2 + 4) * -3.0 + 1.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar3 = (*(float *)(param_2 + 0xc) * -6.0 + 0.0 + *(float *)(param_2 + 4) * 3.0) / fVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar1 = fVar1 / fVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar5 = fVar3 / -3.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar4 = (fVar1 * -3.0 + fVar3 * fVar3) / 9.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar3 = (fVar1 * fVar3 * -9.0 + fVar3 * fVar3 * (fVar3 + fVar3) + ((0.0 - param_1) / fVar2) * 27.0 // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          ) / 54.0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  fVar2 = fVar4 * fVar4 * fVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar1 = fVar3 * fVar3 - fVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (0.0 < fVar1) { // [自动静态注释] 条件判断/分支
    local_50 = (float)((uint)-fVar3 ^ ((uint)-fVar3 ^ 0x3f800000) & 0x7fffffff); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar2 = SQRT(fVar1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (NAN(fVar2)) { // [自动静态注释] 条件判断/分支
      fVar2 = sqrtf(fVar1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    fVar1 = powf(ABS(fVar3) + fVar2,0.33333334); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    return fVar5 + (fVar1 + fVar4 / fVar1) * local_50; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  fVar1 = SQRT(fVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (NAN(fVar1)) { // [自动静态注释] 条件判断/分支
    fVar1 = sqrtf(fVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  fVar1 = acosf(fVar3 * (1.0 / fVar1)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar2 = SQRT(fVar4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (NAN(fVar2)) { // [自动静态注释] 条件判断/分支
    fVar2 = sqrtf(fVar4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  fVar2 = fVar2 * -2.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar3 = cosf(fVar1 / 3.0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar3 = fVar5 + fVar3 * fVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((fVar3 < 0.0) || (1.0 < fVar3)) { // [自动静态注释] 条件判断/分支
    fVar4 = *_DAT_008a5840; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar3 = cosf((fVar1 + fVar4 * 2.0) / 3.0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar3 = fVar5 + fVar3 * fVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((fVar3 < 0.0) || (1.0 < fVar3)) { // [自动静态注释] 条件判断/分支
      fVar1 = cosf((fVar1 + fVar4 * 4.0) / 3.0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar3 = fVar5 + fVar1 * fVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (fVar3 < 0.0) { // [自动静态注释] 条件判断/分支
        return param_1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      if (1.0 < fVar3) { // [自动静态注释] 条件判断/分支
        return param_1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return fVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



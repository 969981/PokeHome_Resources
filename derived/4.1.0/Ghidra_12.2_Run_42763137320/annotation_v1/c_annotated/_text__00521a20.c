/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00421A20
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00521a20; name: FUN_.text__00521a20
 */


float FUN__text__00521a20(undefined1 param_1 [16],double param_2,double param_3,long param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                         uint param_5) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  fVar7 = 1.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_5 != 0) { // [自动静态注释] 条件判断/分支
    fVar7 = -1.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (*(long *)(param_4 + (ulong)param_5 * 0x170 + 0x288) == 0) { // [自动静态注释] 条件判断/分支
    return *(float *)(param_4 + 0x30) * fVar7; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  lVar1 = param_4 + (ulong)param_5 * 0x170 + 0x128; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar3 = (double)FUN__text__0052049c(lVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  dVar6 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar8 = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar4 = (double)FUN__text__005205e8(lVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  fVar2 = fVar7 * (float)(dVar8 * param_2 - dVar6 * param_3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar5 = fVar7 * (float)(dVar4 * param_3 - dVar8 * dVar3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar7 = fVar7 * (float)(dVar6 * dVar3 - dVar4 * param_2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar7 = SQRT(fVar2 * fVar2 + fVar5 * fVar5 + fVar7 * fVar7); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (fVar7 == 0.0) { // [自动静态注释] 条件判断/分支
    return 0.0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  return fVar2 * (1.0 / fVar7); // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



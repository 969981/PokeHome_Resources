/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00421B44
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00521b44; name: FUN_.text__00521b44
 */


bool FUN__text__00521b44(double param_1,double param_2,double param_3,long param_4,uint param_5) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  float fVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  param_4 = param_4 + (ulong)param_5 * 0x170; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(param_4 + 0x288) == 0) { // [自动静态注释] 条件判断/分支
    return true; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  param_4 = param_4 + 0x128; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar6 = 1.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_5 != 0) { // [自动静态注释] 条件判断/分支
    fVar6 = -1.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  dVar8 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar10 = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar2 = (double)FUN__text__0052049c(param_4); // [自动静态注释] 调用尚未恢复正式名称的函数
  dVar9 = dVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar4 = dVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar3 = (double)FUN__text__005205e8(param_4); // [自动静态注释] 调用尚未恢复正式名称的函数
  fVar1 = fVar6 * (float)(dVar4 * dVar8 - dVar9 * dVar10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar5 = fVar6 * (float)(dVar3 * dVar10 - dVar4 * dVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar6 = fVar6 * (float)(dVar9 * dVar2 - dVar3 * dVar8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar7 = SQRT(fVar1 * fVar1 + fVar5 * fVar5 + fVar6 * fVar6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (fVar7 == 0.0) { // [自动静态注释] 条件判断/分支
    dVar8 = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar9 = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar10 = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    fVar7 = 1.0 / fVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar5 = fVar5 * fVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar6 = fVar6 * fVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar8 = (double)(fVar1 * fVar7); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar9 = (double)fVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar10 = (double)fVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  dVar3 = (double)(ulong)(uint)fVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar2 = (double)(ulong)(uint)fVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar4 = (double)FUN__text__00520320(param_4); // [自动静态注释] 调用尚未恢复正式名称的函数
  return 0.0 <= (param_1 - dVar4) * dVar8 + dVar9 * (param_2 - dVar2) + dVar10 * (param_3 - dVar3); // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



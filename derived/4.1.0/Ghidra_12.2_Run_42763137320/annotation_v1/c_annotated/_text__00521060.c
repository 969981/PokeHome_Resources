/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00421060
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00521060; name: FUN_.text__00521060
 */


bool FUN__text__00521060(undefined1 param_1 [16],double param_2,double param_3,long param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        uint param_5,double *param_6,double *param_7) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar2 = *(long *)(param_4 + (ulong)param_5 * 0x170 + 0x288); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
    lVar1 = param_4 + (ulong)param_5 * 0x170 + 0x128; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar3 = (double)FUN__text__0052049c(lVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
    dVar6 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar8 = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar4 = (double)FUN__text__005205e8(lVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
    dVar7 = dVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar9 = dVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar5 = (double)FUN__text__00520320(lVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
    dVar11 = (*param_6 - dVar5) * dVar3 + param_2 * (param_6[1] - dVar7) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
             param_3 * (param_6[2] - dVar9); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    dVar10 = (*param_6 - dVar5) * dVar4 + dVar6 * (param_6[1] - dVar7) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
             dVar8 * (param_6[2] - dVar9); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *param_7 = dVar5 + dVar3 * dVar11 + dVar4 * dVar10;
    param_7[1] = dVar7 + param_2 * dVar11 + dVar6 * dVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_7[2] = dVar9 + param_3 * dVar11 + dVar8 * dVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return lVar2 != 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



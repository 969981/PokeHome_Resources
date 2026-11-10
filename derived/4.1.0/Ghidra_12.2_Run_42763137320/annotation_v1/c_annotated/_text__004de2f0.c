/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003DE2F0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004de2f0; name: FUN_.text__004de2f0
 */


void FUN__text__004de2f0(uint param_1,uint param_2,uint param_3,ushort param_4,uint *param_5, // [自动静态注释] 调用尚未恢复正式名称的函数
                        ushort *param_6) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *param_6 = param_4;
  if (((param_3 < param_2 || param_3 - param_2 == 0) || (param_1 <= param_3)) || (param_4 == 1)) { // [自动静态注释] 条件判断/分支
    *param_5 = param_1;
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar1 = (param_3 - param_2) + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar1 != 0) { // [自动静态注释] 条件判断/分支
    uVar3 = (param_1 - param_2) / uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if ((param_4 != 0) && (param_4 <= uVar3)) { // [自动静态注释] 条件判断/分支
    *param_5 = param_1 - (param_4 - 1) * uVar1;
    *param_6 = 1;
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_4 != 0) { // [自动静态注释] 条件判断/分支
    uVar2 = param_4 - (short)uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *param_6 = uVar2;
  *param_5 = ((param_1 - param_2) - uVar3 * uVar1) + param_2;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



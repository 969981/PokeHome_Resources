/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002D13E8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d13e8; name: FUN_.text__003d13e8
 */


void FUN__text__003d13e8(long *param_1,long param_2,long param_3,undefined4 param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  param_1[2] = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[3] = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 4) = param_4;
  param_1[6] = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x58] = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar1 = FUN__text__006b4514(param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[0xb2] = *(long *)(*(long *)(lVar1 + 0x18) + (long)(int)param_1[4] * 0x10 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    /* WARNING: Could not recover jumptable at 0x003d1438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



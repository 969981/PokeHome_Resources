/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004A0E08
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a0e08; name: FUN_.text__005a0e08
 */


void FUN__text__005a0e08(undefined8 *param_1,undefined8 *param_2,undefined4 param_3, // [自动静态注释] 调用尚未恢复正式名称的函数
                        undefined4 param_4) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *param_1 = 0;
  param_1[1] = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[2] = param_2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[3] = param_2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar1 = param_2[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[4] = lVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar1 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(param_1 + 7) = param_3;
  *(undefined4 *)((long)param_1 + 0x3c) = param_4;
  param_1[5] = 0xffffffffffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[6] = 0xffffffffffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



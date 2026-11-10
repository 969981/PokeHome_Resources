/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002F2D5C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f2d5c; name: FUN_.text__003f2d5c
 */


bool FUN__text__003f2d5c(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16], // [自动静态注释] 调用尚未恢复正式名称的函数
                        long param_4,undefined8 param_5) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_34; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float local_2c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dStack_20; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double local_18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_34 = param_3._0_8_; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_40 = param_2._0_8_; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_28 = (double)param_1._0_4_; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dStack_20 = (double)param_1._4_4_; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_38 = -param_2._8_4_; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_2c = -param_3._8_4_; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_18 = (double)-param_1._8_4_; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar1 = (**(code **)(**(long **)(param_4 + 0x60) + 0x70)) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    (*(long **)(param_4 + 0x60),param_5,&local_40); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return iVar1 == 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



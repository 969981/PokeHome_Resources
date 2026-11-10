/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004213F4
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005213f4; name: FUN_.text__005213f4
 */


undefined1  [16] // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
FUN__text__005213f4(double param_1,double param_2,double param_3,undefined8 param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  double dVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auVar2 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dStack_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  dVar4 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar3 = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_48 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dStack_40 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_38 = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar1 = (double)FUN__text__00520f94(param_4,&local_48); // [自动静态注释] 调用尚未恢复正式名称的函数
  dVar1 = param_1 - dVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar4 = SQRT(dVar1 * dVar1 + (param_2 - dVar4) * (param_2 - dVar4) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
               (param_3 - dVar3) * (param_3 - dVar3)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (dVar4 == 0.0) { // [自动静态注释] 条件判断/分支
    dVar4 = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    dVar4 = dVar1 * 0.009999999776482582 * (1.0 / dVar4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  auVar2._0_8_ = dVar4 + param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  auVar2._8_8_ = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return auVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



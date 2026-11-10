/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00328760
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00428760; name: FUN_.text__00428760
 */


undefined4 FUN__text__00428760(long *param_1,uint *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long local_50 [2]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort local_3e; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_3c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_34; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_2c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_24; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_50[0] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_50[1] = 0x2b00000000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_34 = 0x3f800000ffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_3e = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_2c = 0x1ffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_3c = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_40 = (undefined2)*param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (**(code **)(*param_1 + 0x78))(param_1,local_50); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (local_50[0] == 0) { // [自动静态注释] 条件判断/分支
    *param_2 = 0;
    return local_24; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  *param_2 = (uint)local_3e;
  (**(code **)(*param_1 + 0x18))(param_1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return local_24; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



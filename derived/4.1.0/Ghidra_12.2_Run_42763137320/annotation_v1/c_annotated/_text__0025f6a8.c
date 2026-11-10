/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0015F6A8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0025f6a8; name: FUN_.text__0025f6a8
 */


void FUN__text__0025f6a8(long param_1,undefined8 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar1 = (long *)(param_1 + 0x88); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *plVar1 = 0;
  *(undefined8 *)(param_1 + 0x6c) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x74) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x7c) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x95) = 0;
  local_8 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0014ce28(&local_28,param_2,&local_8); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*plVar1 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(*plVar1 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *plVar1 = local_28;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



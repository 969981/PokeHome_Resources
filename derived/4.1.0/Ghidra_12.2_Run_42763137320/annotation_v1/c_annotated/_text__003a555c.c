/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002A555C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003a555c; name: FUN_.text__003a555c
 */


void FUN__text__003a555c(long param_1,undefined8 param_2,undefined4 param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined1 auVar1 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_30; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(undefined4 *)(param_1 + 0x290) = param_3;
  *(undefined1 *)(param_1 + 0x481) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 4;
  FUN__text__003a55f4(); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003a5970(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_30 = *(undefined8 *)(param_1 + 0x88); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_28 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (**(code **)(**(long **)(param_1 + 0x98) + 0xe0))(*(long **)(param_1 + 0x98),&local_30,&uStack_28) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  local_30 = *(undefined8 *)(param_1 + 0x88); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  auVar1 = (**(code **)(**(long **)(param_1 + 0x98) + 0x30))(*(long **)(param_1 + 0x98),&local_30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0x280) = 1;
  *(undefined1 (*) [16])(param_1 + 0x1e0) = auVar1;
  FUN__text__003a1648(param_1,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



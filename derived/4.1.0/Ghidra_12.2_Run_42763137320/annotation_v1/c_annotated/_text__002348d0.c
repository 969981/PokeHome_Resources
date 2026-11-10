/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001348D0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002348d0; name: FUN_.text__002348d0
 */


void FUN__text__002348d0(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  code *pcVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(long *)(param_1 + 0x7f0) != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(*(long *)(param_1 + 0x7f0) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(undefined8 *)(param_1 + 0x7f0) = 0;
  } // [自动静态注释] 作用域/控制流边界
  pcVar1 = *(code **)(param_1 + 0x778); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (pcVar1 != (code *)0x0) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(param_1 + 0x788) = 0;
    *(undefined8 *)(param_1 + 0x780) = 0;
    *(undefined8 *)(param_1 + 0x778) = 0;
    *(undefined8 *)(param_1 + 0x770) = 0;
    (*pcVar1)(param_1 + 0x790); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  pcVar1 = *(code **)(param_1 + 0x6e8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (pcVar1 != (code *)0x0) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(param_1 + 0x6f8) = 0;
    *(undefined8 *)(param_1 + 0x6f0) = 0;
    *(undefined8 *)(param_1 + 0x6e8) = 0;
    *(undefined8 *)(param_1 + 0x6e0) = 0;
    (*pcVar1)(param_1 + 0x700); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  pcVar1 = *(code **)(param_1 + 0x668); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (pcVar1 != (code *)0x0) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(param_1 + 0x678) = 0;
    *(undefined8 *)(param_1 + 0x670) = 0;
    *(undefined8 *)(param_1 + 0x668) = 0;
    *(undefined8 *)(param_1 + 0x660) = 0;
    (*pcVar1)(param_1 + 0x680); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00128620(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



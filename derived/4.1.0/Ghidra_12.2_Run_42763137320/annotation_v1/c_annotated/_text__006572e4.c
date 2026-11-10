/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005572E4
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006572e4; name: FUN_.text__006572e4
 */


undefined8 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
FUN__text__006572e4(long param_1,undefined8 param_2,long param_3,undefined8 param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                   undefined8 param_5,undefined8 param_6) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  if (param_1 == 0) { // [自动静态注释] 条件判断/分支
    return 0x2b; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if (*(code **)(param_1 + 0x38) != (code *)0x0) { // [自动静态注释] 条件判断/分支
    (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(long *)(param_1 + 0x40) = param_1;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  if (param_3 != 0) { // [自动静态注释] 条件判断/分支
    *(long *)(param_1 + 0x28) = param_3;
    *(undefined8 *)(param_1 + 0x30) = param_4;
    *(undefined8 *)(param_1 + 0x78) = param_2;
    *(undefined4 *)(param_1 + 0x18) = 3;
    *(undefined8 *)(param_1 + 0x38) = param_5;
    *(undefined8 *)(param_1 + 0x40) = param_6;
  } // [自动静态注释] 作用域/控制流边界
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



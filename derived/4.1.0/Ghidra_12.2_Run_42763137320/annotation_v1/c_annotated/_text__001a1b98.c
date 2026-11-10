/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000A1B98
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001a1b98; name: FUN_.text__001a1b98
 */


uint FUN__text__001a1b98(long param_1,uint param_2,undefined8 param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar1 = FUN__text__001bf320(*(undefined8 *)(param_1 + 0x68)); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar2 = FUN__text__001bf320(*(undefined8 *)(param_1 + 0x88),(uVar1 | param_2) & 1,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar3 = FUN__text__001d1630(*(undefined8 *)(param_1 + 0xa8),(uVar1 | uVar2 | param_2) & 1,param_3) // [自动静态注释] 调用尚未恢复正式名称的函数
  ; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar3 = uVar1 | uVar2 | uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = FUN__text__001d1630(*(undefined8 *)(param_1 + 200),(uVar3 | param_2) & 1,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  return (uVar3 | uVar1) & 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00583EA0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00683ea0; name: FUN_.text__00683ea0
 */


void FUN__text__00683ea0(long *param_1,undefined4 param_2,undefined4 param_3,long param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        long param_5) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((long)param_1 + 0xe) = 0;
  *param_1 = param_5 + 8;
  *(undefined4 *)(param_1 + 2) = param_2;
  *(undefined4 *)((long)param_1 + 0x14) = param_3;
  *(undefined2 *)((long)param_1 + 0xc) = 7;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[3] = param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[4] = param_5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



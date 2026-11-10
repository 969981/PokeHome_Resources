/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00436C78
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00536c78; name: FUN_.text__00536c78
 */


void FUN__text__00536c78(undefined4 param_1,undefined4 param_2,undefined8 *param_3, // [自动静态注释] 调用尚未恢复正式名称的函数
                        undefined4 param_4,uint param_5,uint param_6) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(param_3 + 3) = param_1;
  if (3 < param_5) { // [自动静态注释] 条件判断/分支
    param_5 = 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)((long)param_3 + 0x1c) = param_4;
  *(undefined4 *)(param_3 + 4) = 0;
  if (7 < param_6) { // [自动静态注释] 条件判断/分支
    param_6 = 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(undefined1 *)((long)param_3 + 0x24) = 0;
  *param_3 = 0;
  param_3[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(uint *)(param_3 + 2) = param_5;
  *(uint *)((long)param_3 + 0x14) = param_6;
  *(undefined4 *)(param_3 + 5) = param_2;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



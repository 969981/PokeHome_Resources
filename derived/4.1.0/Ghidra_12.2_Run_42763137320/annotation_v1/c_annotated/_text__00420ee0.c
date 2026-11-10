/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00320EE0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00420ee0; name: FUN_.text__00420ee0
 */


void FUN__text__00420ee0(long param_1,long param_2,long param_3,long param_4,undefined4 param_5, // [自动静态注释] 调用尚未恢复正式名称的函数
                        uint param_6) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  for (; 7 < param_6; param_6 = param_6 - 8) { // [自动静态注释] 循环/迭代
    FUN__text__004213f0(param_1,param_2,param_3,param_4,param_5); // [自动静态注释] 调用尚未恢复正式名称的函数
    param_1 = param_1 + 0x40; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_2 = param_2 + 0x40; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_3 = param_3 + 0x40; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_4 = param_4 + 0x40; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (param_6 - 1 < 7) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x00420f60 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__00420f6c + (ulong)*(byte *)((ulong)(param_6 - 1) + 0x73b14d) * 4))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



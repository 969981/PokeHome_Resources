/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00313D68
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00413d68; name: FUN_.text__00413d68
 */


void FUN__text__00413d68(undefined4 *param_1,undefined8 *param_2,undefined4 param_3,long param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  *param_1 = param_3;
  *(undefined8 *)(param_1 + 2) = *param_2;
  if (param_4 == -1) { // [自动静态注释] 条件判断/分支
    FUN__text__00412dc0(param_2,1,0); // [自动静态注释] 调用尚未恢复正式名称的函数
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00413460(param_2,param_4); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00412dc0(param_2,1,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



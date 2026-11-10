/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002C4B88
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c4b88; name: FUN_.text__003c4b88
 */


void FUN__text__003c4b88(undefined4 param_1,long param_2,undefined4 param_3,uint param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        uint param_5) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  ulong uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar1 = FUN__text__003e9e24(*(undefined8 *)(param_2 + 0xc0)); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((uVar1 & 1) == 0) { // [自动静态注释] 条件判断/分支
    FUN__text__003e9c38(*(undefined8 *)(param_2 + 0xc0),param_3,param_5 & 1); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__003e9e8c(*(undefined8 *)(param_2 + 0xc0),param_3,param_4 & 1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003e9cec(param_1,*(undefined8 *)(param_2 + 0xc0),param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



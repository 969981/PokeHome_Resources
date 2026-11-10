/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00504A24
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00604a24; name: FUN_.text__00604a24
 */


uint FUN__text__00604a24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4 // [自动静态注释] 调用尚未恢复正式名称的函数
                        ) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_134 [28]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_118 [232]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__0063fbb0(auStack_118,auStack_134,param_2,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar1 = FUN__text__0060aa70(param_1,auStack_118,auStack_134,param_4); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((uVar1 & 1) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__006305fc(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  return uVar1 & 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001D5C08
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002d5c08; name: FUN_.text__002d5c08
 */


void FUN__text__002d5c08(undefined8 param_1,uint param_2,undefined4 param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar1 = FUN__text__002f0ef0(); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar1 = FUN__text__002ceab8(uVar1,param_2 & 0xffff); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((int)uVar1 == 7) { // [自动静态注释] 条件判断/分支
    FUN__text__002d5c70(uVar1,param_2,0); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (DAT_008e5318 != 0) { // [自动静态注释] 条件判断/分支
      uVar1 = FUN__text__002d1cf0(DAT_008e5318,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__002d5d20(uVar1,param_2,param_3,0,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



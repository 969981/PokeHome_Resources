/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0039B860
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0049b860; name: FUN_.text__0049b860
 */


void FUN__text__0049b860(long param_1,undefined4 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined1 auVar1 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((*(long *)(param_1 + 0x70) != 0) && (*(short *)(*(long *)(param_1 + 0x70) + 0xc4) == 1)) { // [自动静态注释] 条件判断/分支
    FUN__text__00464fec(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (*(ulong *)(param_1 + 0x128) != 0) { // [自动静态注释] 条件判断/分支
      auVar1._8_8_ = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      auVar1._0_8_ = *(ulong *)(param_1 + 0x128); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        auVar1 = FUN__text__00499940(param_1,auVar1._0_8_,auVar1._8_8_); // [自动静态注释] 调用尚未恢复正式名称的函数
      } while (auVar1._0_8_ != 0); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00469848(param_1,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



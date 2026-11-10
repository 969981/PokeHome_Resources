/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00532954
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00632954; name: FUN_.text__00632954
 */


ulong FUN__text__00632954(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  char cVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar3 = FUN__text__0060f008(*(undefined8 *)(param_1 + 0x2f0)); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((uVar3 & 1) != 0) { // [自动静态注释] 条件判断/分支
    uVar3 = FUN__text__0060fec0(); // [自动静态注释] 调用尚未恢复正式名称的函数
    return uVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar3 = FUN__text__0060f008(*(undefined8 *)(param_1 + 0x2f0)); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (((uVar3 & 1) != 0) && // [自动静态注释] 条件判断/分支
     (uVar3 = FUN__text__0060f008(*(undefined8 *)(param_1 + 0x2f0)), (uVar3 & 1) != 0)) { // [自动静态注释] 调用尚未恢复正式名称的函数
    cVar1 = FUN__text__0061ae24(*(undefined8 *)(param_1 + 0x2f0)); // [自动静态注释] 调用尚未恢复正式名称的函数
    if ((byte)(cVar1 - 1U) < 2) { // [自动静态注释] 条件判断/分支
      uVar2 = FUN__text__0063230c(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
      return (ulong)(uVar2 & 0xffff); // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  uVar2 = FUN__text__00631d90(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return (ulong)(uVar2 & 0xffff); // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



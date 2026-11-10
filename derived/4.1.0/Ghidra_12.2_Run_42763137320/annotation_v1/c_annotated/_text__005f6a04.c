/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004F6A04
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f6a04; name: FUN_.text__005f6a04
 */


void FUN__text__005f6a04(long param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_2 == 0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar1 = FUN__text__005f58f4(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + -1;
  lVar2 = FUN__text__005f599c(); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) - lVar2;
  FUN__text__005f64cc(param_1,uVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



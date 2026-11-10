/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004F8C90
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f8c90; name: FUN_.text__005f8c90
 */


void FUN__text__005f8c90(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  char cVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  (**(code **)(*param_1 + 0x38))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__005f7f54(); // [自动静态注释] 调用尚未恢复正式名称的函数
  cVar1 = (char)param_1[0x2e]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (cVar1 == '\0') { // [自动静态注释] 循环/迭代
    FUN__text__005df1b0(DAT_008e1898); // [自动静态注释] 调用尚未恢复正式名称的函数
    (**(code **)(*param_1 + 0x20))(param_1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    (**(code **)(*param_1 + 0x18))(param_1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    cVar1 = (char)param_1[0x2e]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Could not recover jumptable at 0x005f8d04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))(param_1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



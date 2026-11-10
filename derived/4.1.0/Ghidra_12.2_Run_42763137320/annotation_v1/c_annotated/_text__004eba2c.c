/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003EBA2C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004eba2c; name: FUN_.text__004eba2c
 */


void FUN__text__004eba2c(undefined8 param_1,int param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ulong uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar1 = CONCAT44(param_2,param_2 + -0x1000000); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((uint)(uVar1 >> 0x18) < 8) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not recover jumptable at 0x004eba74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__004eba78 + (ulong)*(byte *)((uVar1 >> 0x18 & 0xffffffff) + 0x73e31d) * 4) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    )(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005043E4
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006043e4; name: FUN_.text__006043e4
 */


/* WARNING: Removing unreachable block (ram,0x0060441c) */
/* WARNING: Removing unreachable block (ram,0x00604428) */

undefined8 FUN__text__006043e4(byte param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_2 == 0) { // [自动静态注释] 条件判断/分支
    return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Could not recover jumptable at 0x00604410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(&UNK__text__00604414 + (ulong)*(byte *)((ulong)param_1 + 0x75a314) * 4))(0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return uVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



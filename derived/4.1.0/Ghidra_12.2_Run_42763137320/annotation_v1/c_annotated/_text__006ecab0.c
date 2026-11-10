/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005ECAB0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006ecab0; name: FUN_.text__006ecab0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006ecab0(long param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  undefined4 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar4 = *(undefined8 *)(param_1 + 0xb0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = FUN__text__006f2350(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar2 = FUN__text__006f23a4(param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar3 = FUN__text__006f23c4(*param_4,param_4[1]); // [自动静态注释] 调用尚未恢复正式名称的函数
                    /* WARNING: Could not recover jumptable at 0x006ecb44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*_DAT_008a6dd0)(uVar4,uVar1,uVar2,param_5,uVar3,param_6,param_8,param_7); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



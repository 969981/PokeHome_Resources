/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003E129C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e129c; name: FUN_.text__004e129c
 */


void FUN__text__004e129c(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4 // [自动静态注释] 调用尚未恢复正式名称的函数
                        ,long param_5,undefined8 param_6,undefined8 param_7) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar1 = *(uint *)(param_5 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_18 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_14 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0041f110(1.0 / (float)*(ushort *)(param_5 + 0x10),param_4,param_5, // [自动静态注释] 调用尚未恢复正式名称的函数
                      uVar1 & 0xffff7f00 | uVar1 + ((int)(uVar1 << 0x10) >> 0x1f) & 0xff,&local_18, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                      param_6,param_7); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



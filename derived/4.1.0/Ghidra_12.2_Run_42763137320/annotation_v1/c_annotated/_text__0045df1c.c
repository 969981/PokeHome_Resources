/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0035DF1C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0045df1c; name: FUN_.text__0045df1c
 */


void FUN__text__0045df1c(undefined8 param_1,long param_2,undefined8 param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ulong uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar1 = FUN__text__0045df80(); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((uVar1 & 1) == 0) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(param_2 + 0x90) = 0x7000020;
    *(undefined8 *)(param_2 + 0x98) = 0;
    FUN__text__0045e0f0(param_1,param_2,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
    fVar2 = *(float *)(param_2 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(float *)(param_2 + 0x2c) = *(float *)(param_2 + 0x2c) + fVar2;
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



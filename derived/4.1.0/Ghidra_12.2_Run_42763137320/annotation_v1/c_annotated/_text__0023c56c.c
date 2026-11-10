/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0013C56C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0023c56c; name: FUN_.text__0023c56c
 */


void FUN__text__0023c56c(long param_1,undefined8 *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  code *pcVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__00128ca0(param_1,1,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  pcVar1 = *(code **)(param_1 + 0x6e8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (pcVar1 != (code *)0x0) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(param_1 + 0x6f0) = 0;
    *(undefined8 *)(param_1 + 0x6f8) = 0;
    *(undefined8 *)(param_1 + 0x6e0) = 0;
    *(undefined8 *)(param_1 + 0x6e8) = 0;
    (*pcVar1)(param_1 + 0x700); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  if ((code *)param_2[2] != (code *)0x0) { // [自动静态注释] 条件判断/分支
    (*(code *)param_2[2])(param_2 + 4,param_1 + 0x700); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar2 = param_2[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_1 + 0x6e8) = param_2[1];
    *(undefined8 *)(param_1 + 0x6f8) = uVar2;
    uVar2 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_1 + 0x6f0) = param_2[2];
    *(undefined8 *)(param_1 + 0x6e0) = uVar2;
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



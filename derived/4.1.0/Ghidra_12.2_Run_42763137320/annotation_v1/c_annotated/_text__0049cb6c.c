/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0039CB6C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0049cb6c; name: FUN_.text__0049cb6c
 */


void FUN__text__0049cb6c(undefined8 *param_1,undefined8 *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *param_1 = *param_2;
  param_1[1] = param_2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2 = (long *)param_2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[2] = plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  param_1[5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[6] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[7] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (((DAT_00ae9a68 != 0 && plVar2 != (long *)0x0) && (*plVar2 != 0)) && // [自动静态注释] 条件判断/分支
     (iVar1 = FUN__text__0047c040(), iVar1 == 1)) { // [自动静态注释] 调用尚未恢复正式名称的函数
    param_1[7] = *(undefined8 *)param_1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



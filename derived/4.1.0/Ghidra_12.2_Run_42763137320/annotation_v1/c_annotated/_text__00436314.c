/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00336314
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00436314; name: FUN_.text__00436314
 */


void FUN__text__00436314(undefined4 param_1,long param_2,undefined8 param_3,ulong param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  bool bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_5c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_30; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_24 [4]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((param_4 & 1) == 0) { // [自动静态注释] 条件判断/分支
    bVar1 = false; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(undefined8 *)(param_2 + 0x10) = 0;
    bVar1 = *(char *)(param_2 + 0x28) != '\0'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  local_58 = *(undefined8 *)(param_2 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_50 = *(undefined4 *)(param_2 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_24[0] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_30 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)(param_2 + 0x29) = 1;
  local_40 = 0xff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_38 = 0xff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_48 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_5c = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__004363b0(*(undefined8 *)(param_2 + 8),&local_58,&local_5c,local_24,0,0,bVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (bVar1 == false) { // [自动静态注释] 条件判断/分支
    *(undefined1 *)(param_2 + 0x29) = 0;
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



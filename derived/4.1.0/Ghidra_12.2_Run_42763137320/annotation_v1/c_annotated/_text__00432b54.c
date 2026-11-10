/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00332B54
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00432b54; name: FUN_.text__00432b54
 */


undefined4 FUN__text__00432b54(undefined8 param_1,undefined4 *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong local_30; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 *local_20; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uStack_11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_28 = param_2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_30 = (ulong)CONCAT14(*(undefined1 *)((long)param_2 + 0xd),*param_2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_20 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar1 = FUN__text__00433370(param_1,&local_30,&uStack_11); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar2 = 0x34; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar1 != 0) { // [自动静态注释] 条件判断/分支
    uVar2 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



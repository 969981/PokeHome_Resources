/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001EA7B8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002ea7b8; name: FUN_.text__002ea7b8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002ea7b8(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_30; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__002eb310(); // [自动静态注释] 调用尚未恢复正式名称的函数
  plVar2 = param_1 + 0xd; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *plVar2 = 0;
  lVar1 = _DAT_008a2850; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_30 = param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)((long)param_1 + 0x6f) = 0;
  *param_1 = lVar1 + 0x10;
  param_1[0xc] = lVar1 + 0x140; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[9] = lVar1 + 0xd8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[10] = lVar1 + 0x118; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0020bb18(&local_28,local_30,&local_30); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*plVar2 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(*plVar2 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *plVar2 = local_28;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



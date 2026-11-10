/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004C5480
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005c5480; name: FUN_.text__005c5480
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005c5480(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *pcVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar1 = _DAT_008a58b0 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = _DAT_008a58b0 + 0x50;
  param_1[-9] = lVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((code *)param_1[0x4d] != (code *)0x0) { // [自动静态注释] 条件判断/分支
    local_28 = param_1 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (*(code *)param_1[0x4d])(param_1 + 0x51,&local_28); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  pcVar2 = (code *)param_1[0x4e]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (pcVar2 != (code *)0x0) { // [自动静态注释] 条件判断/分支
    param_1[0x4f] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[0x50] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[0x4d] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[0x4e] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (*pcVar2)(param_1 + 0x51); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005c5508(param_1 + 2); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__005b5108(param_1 + -9); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



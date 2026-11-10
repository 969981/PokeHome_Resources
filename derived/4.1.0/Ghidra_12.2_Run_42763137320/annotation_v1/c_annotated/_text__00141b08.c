/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00041B08
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00141b08; name: FUN_.text__00141b08
 */


void FUN__text__00141b08(long param_1,int param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int local_24; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(code **)(param_1 + 0x650) != (code *)0x0) { // [自动静态注释] 条件判断/分支
    local_28 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (**(code **)(param_1 + 0x650))(param_1 + 0x670,&local_28); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  if (*(code **)(param_1 + 2000) != (code *)0x0) { // [自动静态注释] 条件判断/分支
    local_24 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar1 = (**(code **)(param_1 + 2000))(param_1 + 0x7f0,&local_24); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__0012c378(param_1 + 0x110,(long)param_2 * 0x20 + 0x7244b8 + (long)iVar1 * 8); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00001DD0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00101dd0; name: FUN_.text__00101dd0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00101dd0(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar1 = _DAT_0089f3b0 + 0xe8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = _DAT_0089f3b0 + 0x10;
  param_1[1] = lVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (((char)param_1[0x15] == '\0') && (uVar2 = FUN__text__005f6a58(param_1 + 5), (uVar2 & 1) == 0)) // [自动静态注释] 条件判断/分支
  { // [自动静态注释] 作用域/控制流边界
    (**(code **)(*param_1 + 0xb8))(param_1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005f6850(param_1 + 5); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__005f6c00(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__005f5500(); // [自动静态注释] 调用尚未恢复正式名称的函数
  plVar3 = (long *)FUN__text__005f52b0(); // [自动静态注释] 调用尚未恢复正式名称的函数
                    /* WARNING: Could not recover jumptable at 0x00101e4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x18))(plVar3,param_1,0,8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



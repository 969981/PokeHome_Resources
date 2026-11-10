/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00329C68
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00429c68; name: FUN_.text__00429c68
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00429c68(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar1 = _DAT_008a4800 + 0x58; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = _DAT_008a4800 + 0x10;
  param_1[3] = lVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__004323e0(param_1 + 10); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (param_1[0xc] != 0) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(param_1 + 0xd) = 0;
    FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
    param_1[0xc] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)((long)param_1 + 0x6c) = 0;
  } // [自动静态注释] 作用域/控制流边界
  if (param_1[8] != 0) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(param_1 + 9) = 0;
    FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
    param_1[8] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)((long)param_1 + 0x4c) = 0;
  } // [自动静态注释] 作用域/控制流边界
  plVar2 = (long *)param_1[7]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar2 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*plVar2 + 0x28))(plVar2,_DAT_008a47e8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0xe)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__00432310(param_1 + 10); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__0042d040(param_1 + 3); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__0042ce74(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



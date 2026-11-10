/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004E8EA0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e8ea0; name: FUN_.text__005e8ea0
 */


undefined8 FUN__text__005e8ea0(void) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (((DAT_00c13340 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_00c13340), iVar1 != 0)) { // [自动静态注释] 条件判断/分支
    FUN__text__005e8f90(&DAT_00c13338,&DAT__text__005e8c84); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__001001d0(0x5e8fbc,&DAT_00c13338,&__DT_FINI_ARRAY); // [自动静态注释] 调用尚未恢复正式名称的函数
    __cxa_guard_release(&DAT_00c13340); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar2 = FUN__text__005e8fc4(&DAT_00c13338); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (lVar2 == 0) { // [自动静态注释] 条件判断/分支
    FUN__text__005e8e18(); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar3 = FUN__text__005e8fcc(); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__005e8c58(uVar3,0); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__005e903c(&DAT_00c13338,uVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  uVar3 = FUN__text__005e8fc4(&DAT_00c13338); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar2 = FUN__text__005e9044(); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (lVar2 == 0) { // [自动静态注释] 条件判断/分支
    FUN__text__005e904c(uVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  return uVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



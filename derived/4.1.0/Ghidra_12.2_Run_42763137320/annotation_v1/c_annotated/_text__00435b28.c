/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00335B28
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00435b28; name: FUN_.text__00435b28
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN__text__00435b28(undefined8 param_1,undefined8 param_2,ulong param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint local_14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((param_3 & 0xff00000000) == 0x300000000) { // [自动静态注释] 条件判断/分支
    uVar2 = FUN__text__004317a0(*_DAT_008a4658,param_3 & 0xffffffff); // [自动静态注释] 调用尚未恢复正式名称的函数
    return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  iVar1 = FUN__text__00434be0(param_1,param_3 & 0xffffffff | 0x200000000,param_2,&local_14,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (iVar1 != 1) { // [自动静态注释] 条件判断/分支
    local_14 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return (ulong)local_14; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



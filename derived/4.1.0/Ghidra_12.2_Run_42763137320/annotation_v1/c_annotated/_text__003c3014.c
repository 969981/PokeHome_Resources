/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002C3014
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c3014; name: FUN_.text__003c3014
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003c3014(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4 // [自动静态注释] 调用尚未恢复正式名称的函数
                        ,undefined4 param_5) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  undefined4 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined5 local_148; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined3 uStack_143; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined5 uStack_140; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar1 = FUN__text__005fd4f8(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar2 = FUN__text__005fd80c(*_DAT_008a0488,uVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  memset(&local_148,0,0x104); // [自动静态注释] 内存复制、清零或移动
  if ((int)uVar2 < 0) { // [自动静态注释] 条件判断/分支
    local_148 = _DAT_0070aff3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_143 = _DAT_0070aff8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_140 = uRam000000000070affb; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    snprintf((char *)&local_148,0x104,(char *)0x716ba7,(ulong)uVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__003d0ed4(param_1,&local_148,param_3,param_4,param_5); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



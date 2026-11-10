/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00566684
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00666684; name: FUN_.text__00666684
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00666684(undefined8 *param_1,ulong param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((long)param_2 < 1) { // [自动静态注释] 条件判断/分支
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = _DAT_0070fd6e;
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if (param_2 < 360000) { // [自动静态注释] 条件判断/分支
    lVar2 = param_2 + (long)(int)((param_2 & 0xffffffff) / 0xe10) * -0xe10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar1 = (int)lVar2 / 0x3c; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__006599c0(param_1,9,0x7181d4,(param_2 & 0xffffffff) / 0xe10,(long)iVar1, // [自动静态注释] 调用尚未恢复正式名称的函数
                        lVar2 + (long)iVar1 * -0x3c); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if (param_2 < 86400000) { // [自动静态注释] 条件判断/分支
    FUN__text__006599c0(param_1,9,0x70bcdc,param_2 / 0x15180,(param_2 % 0x15180) / 0xe10); // [自动静态注释] 调用尚未恢复正式名称的函数
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__006599c0(param_1,9,0x71a4fd); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



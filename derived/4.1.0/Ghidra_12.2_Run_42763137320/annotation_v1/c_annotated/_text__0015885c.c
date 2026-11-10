/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0005885C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0015885c; name: FUN_.text__0015885c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN__text__0015885c(long param_1,undefined2 *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ushort uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(int *)(param_1 + 0xc08) == 4) { // [自动静态注释] 条件判断/分支
    uVar2 = FUN__text__001586b4(param_1,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if (*(int *)(param_1 + 0xc08) == 3) { // [自动静态注释] 条件判断/分支
    uVar2 = FUN__text__00158250(*_DAT_0089f538,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar2 = FUN__text__00157130(*param_2,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar1 = param_2[uVar2 & 1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar1 < 0x100) { // [自动静态注释] 条件判断/分支
    return (ulong)((*(uint *)(((ulong)(uVar1 >> 3) & 0x1ffc) + 0x724eb0) & // [自动静态注释] 返回表达式；具体返回语义取决于调用者
                   1 << (ulong)(uVar1 & 0x1f)) != 0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



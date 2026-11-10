/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005785AC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006785ac; name: FUN_.text__006785ac
 */


byte FUN__text__006785ac(long param_1,int param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int local_14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_14 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_1 != 0) { // [自动静态注释] 条件判断/分支
    lVar3 = *(long *)(param_1 + (long)param_2 * 0x18 + 0x298); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar3 != 0) { // [自动静态注释] 条件判断/分支
      uVar2 = nnsslConnectionPending(lVar3,&local_14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar1 = nnResultIsSuccess(uVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar1 = bVar1 & 0 < local_14; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return bVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



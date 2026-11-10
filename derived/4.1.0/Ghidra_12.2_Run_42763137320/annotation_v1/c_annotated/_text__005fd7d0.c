/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004FD7D0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005fd7d0; name: FUN_.text__005fd7d0
 */


undefined2 FUN__text__005fd7d0(long param_1,int param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_2 != 0) { // [自动静态注释] 条件判断/分支
    lVar1 = *(long *)(param_1 + 0x160); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((param_2 - 1U & 0xff) < (uint)*(byte *)(lVar1 + 0x15)) { // [自动静态注释] 条件判断/分支
      return *(undefined2 *) // [自动静态注释] 返回表达式；具体返回语义取决于调用者
              (lVar1 + (ulong)*(ushort *)(lVar1 + 2) * 2 + (ulong)*(byte *)(lVar1 + 8) * 2 + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
               (ulong)(byte)(param_2 - 1U) * 2 + 0x364); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



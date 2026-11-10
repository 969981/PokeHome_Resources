/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：HOME_SideData_CursorHasNext
 * 用途/行为：检查 SideData TLV 迭代游标和记录长度边界；不检查 Tag ID
 * 证据等级：VERIFIED_NATIVE_STATIC；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0060e994; name: FUN_.text__0060e994
 */


bool FUN__text__0060e994(long param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  return (param_2 - *(long *)(param_1 + 8)) - 0x10U < // [自动静态注释] 返回表达式；具体返回语义取决于调用者
         (ulong)*(ushort *)(*(long *)(param_1 + 8) + 0xd6) + 200; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
} // [自动静态注释] 作用域/控制流边界



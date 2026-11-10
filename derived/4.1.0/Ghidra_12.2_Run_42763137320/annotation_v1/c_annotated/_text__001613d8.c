/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000613D8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001613d8; name: FUN_.text__001613d8
 */


undefined4 FUN__text__001613d8(uint param_1,int param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined4 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_2 == 0xb) { // [自动静态注释] 条件判断/分支
    uVar1 = FUN__text__0016a510(); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__0016ad94(uVar1,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  if (param_1 < 4) { // [自动静态注释] 条件判断/分支
    return *(undefined4 *) // [自动静态注释] 返回表达式；具体返回语义取决于调用者
            ((-(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_1 << 2) + 0x7249d0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return 0x42280000; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



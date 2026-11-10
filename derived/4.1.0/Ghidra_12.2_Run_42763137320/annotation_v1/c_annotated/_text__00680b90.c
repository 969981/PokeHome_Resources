/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00580B90
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00680b90; name: FUN_.text__00680b90
 */


int FUN__text__00680b90(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  iVar1 = FUN__text__00680b30(); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (iVar1 == 0) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(param_1 + 200) = 0x1000;
    *(undefined8 *)(param_1 + 0xd0) = 0xffffffff;
    *(undefined8 *)(param_1 + 0xe0) = 0x100000000;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    FUN__text__006831ac(param_1 + 0x48); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__006831ac(param_1 + 0x70); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined2 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined1 *)(param_1 + 0xea) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
  } // [自动静态注释] 作用域/控制流边界
  return iVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



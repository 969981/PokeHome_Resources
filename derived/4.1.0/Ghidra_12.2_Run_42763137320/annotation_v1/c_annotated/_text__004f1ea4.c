/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003F1EA4
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f1ea4; name: FUN_.text__004f1ea4
 */


undefined8 FUN__text__004f1ea4(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ulong uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar1 = FUN__text__004f132c(*(undefined8 *)(param_1 + 0x398),param_1,&local_4,&local_8); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((uVar1 & 1) == 0) { // [自动静态注释] 条件判断/分支
    return 2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(param_1 + 0x330) = local_4;
  *(undefined4 *)(param_1 + 0x30c) = local_8;
  *(uint *)(param_1 + 0x313) = *(uint *)(param_1 + 0x313) & 0xfe3fffff | 0x400000;
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



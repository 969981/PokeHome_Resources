/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003DA354
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004da354; name: FUN_.text__004da354
 */


void FUN__text__004da354(long param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ushort uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar1 = *(ushort *)(param_2 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)(param_1 + 0xf1) = 0;
  *(uint *)(param_1 + 0x54) = (uint)uVar1;
  (**(code **)(**(long **)(param_1 + 8) + 0x40))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__0041aeb4(param_1 + 0x10, // [自动静态注释] 调用尚未恢复正式名称的函数
                      (*(uint *)(*(long *)(param_1 + 0xe8) + 0x313) & 0x70000000) == 0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (*(short *)(param_1 + 0x92) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__004da3f0(param_1,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if (*(char *)(param_1 + 0xf0) != '\0') { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(param_2 + 0x2c) = 0x11;
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



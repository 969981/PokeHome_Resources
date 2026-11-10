/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005CB91C
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006cb91c; name: FUN_.text__006cb91c
 */


void FUN__text__006cb91c(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *__s; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar1 = *(uint *)(*(long *)(param_1 + 0x20) + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  __s = *(void **)(*(long *)(param_1 + 0x18) + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(void **)(*(long *)(param_1 + 0x18) + 0x10) = (void *)((long)__s + (long)(int)uVar1 * 0x18);
  if (0 < (int)uVar1 && __s != (void *)0x0) { // [自动静态注释] 条件判断/分支
    memset(__s,0,(ulong)uVar1 * 0x18); // [自动静态注释] 内存复制、清零或移动
  } // [自动静态注释] 作用域/控制流边界
  *(void **)(param_1 + 0x28) = __s;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



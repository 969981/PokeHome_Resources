/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005575F0
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006575f0; name: FUN_.text__006575f0
 */


size_t FUN__text__006575f0(void *param_1,undefined8 param_2,ulong param_3,long param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  size_t __n; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar1 = *(long *)(param_4 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  __n = *(long *)(param_4 + 0x78) - lVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_3 <= __n) { // [自动静态注释] 条件判断/分支
    __n = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (__n != 0) { // [自动静态注释] 条件判断/分支
    memcpy(param_1,(void *)(*(long *)(param_4 + 0x20) + lVar1),__n); // [自动静态注释] 内存复制、清零或移动
    lVar1 = *(long *)(param_4 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(size_t *)(param_4 + 0x98) = lVar1 + __n;
  return __n; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



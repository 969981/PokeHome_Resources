/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002118A0
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003118a0; name: FUN_.text__003118a0
 */


void FUN__text__003118a0(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  void *__src; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  __src = (void *)(param_1 + 0x54); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  memcpy((void *)(param_1 + 0x3f7f4),__src,260000); // [自动静态注释] 内存复制、清零或移动
  lVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    FUN__text__005fc188(*(undefined8 *)(param_1 + 0x7efa0 + lVar1 * 8),__src,0); // [自动静态注释] 调用尚未恢复正式名称的函数
    lVar1 = lVar1 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    __src = (void *)((long)__src + 0x104); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while (lVar1 != 1000); // [自动静态注释] 循环/迭代
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



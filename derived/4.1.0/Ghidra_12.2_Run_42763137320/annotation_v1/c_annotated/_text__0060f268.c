/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0050F268
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0060f268; name: FUN_.text__0060f268
 */


void FUN__text__0060f268(long param_1,void *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  char cVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *__src; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  cVar1 = *(char *)(param_1 + 0x11); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((cVar1 != '\0') && (*(undefined1 *)(param_1 + 0x11) = 0, *(char *)(param_1 + 0x10) == '\0')) { // [自动静态注释] 条件判断/分支
    lVar2 = FUN__text__0060e7c4(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__0060e7c4(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__006305fc(); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    *(undefined1 *)(param_1 + 0x10) = 1;
  } // [自动静态注释] 作用域/控制流边界
  if (param_2 != (void *)0x0) { // [自动静态注释] 条件判断/分支
    __src = (void *)FUN__text__0060e7c4(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    memcpy(param_2,__src,0x296); // [自动静态注释] 内存复制、清零或移动
  } // [自动静态注释] 作用域/控制流边界
  if (cVar1 != '\0') { // [自动静态注释] 条件判断/分支
    if (*(char *)(param_1 + 0x10) != '\0') { // [自动静态注释] 条件判断/分支
      FUN__text__0060e7c4(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__006306b4(); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined1 *)(param_1 + 0x10) = 0;
    } // [自动静态注释] 作用域/控制流边界
    *(undefined1 *)(param_1 + 0x11) = 1;
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



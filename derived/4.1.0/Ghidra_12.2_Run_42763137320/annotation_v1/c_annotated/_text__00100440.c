/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：realloc
 * 用途/行为：Ghidra 保留符号名称 realloc；调用者与业务副作用需独立复核
 * 证据等级：SYMBOL_EVIDENCE；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00100440; name: realloc
 */


void * realloc(void *__ptr,size_t __size) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *pvVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar1 = FUN__text__005f52b0(); // [自动静态注释] 调用尚未恢复正式名称的函数
  plVar2 = (long *)(*(code *)**(undefined8 **)(lVar1 + 8))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar3 = (long *)FUN__text__001020a4(); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (plVar3 != plVar2) { // [自动静态注释] 条件判断/分支
    do { // [自动静态注释] 循环/迭代
      plVar2 = (long *)*plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (plVar2 != plVar3 && plVar2 != (long *)0x0); // [自动静态注释] 循环/迭代
    if (plVar2 == (long *)0x0) { // [自动静态注释] 条件判断/分支
      lVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005f5500(); // [自动静态注释] 调用尚未恢复正式名称的函数
  pvVar4 = (void *)FUN__text__001004c0(lVar1,__ptr,__size); // [自动静态注释] 调用尚未恢复正式名称的函数
  return pvVar4; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



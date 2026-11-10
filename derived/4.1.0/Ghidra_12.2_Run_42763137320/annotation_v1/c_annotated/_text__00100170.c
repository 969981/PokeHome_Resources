/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：_fini
 * 用途/行为：Ghidra 保留符号名称 _fini；调用者与业务副作用需独立复核
 * 证据等级：SYMBOL_EVIDENCE；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00100170; name: _fini
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _fini(void) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__00100260(&__DT_FINI_ARRAY,0,DAT_008e1210); // [自动静态注释] 调用尚未恢复正式名称的函数
  puVar1 = _DAT_0089f268; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (_DAT_0089f268 < _DAT_0089f270) { // [自动静态注释] 条件判断/分支
    puVar2 = _DAT_0089f270; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      puVar2 = puVar2 + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      (*(code *)*puVar2)(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } while (puVar1 < puVar2); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



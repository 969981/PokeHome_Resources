/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003CFA40
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004cfa40; name: FUN_.text__004cfa40
 */


void FUN__text__004cfa40(long param_1,byte param_2,byte param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar1 = *(long *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar1 != 0) { // [自动静态注释] 条件判断/分支
    *(byte *)(lVar1 + 0x20) = *(byte *)(lVar1 + 0x20) & (param_3 ^ 0xff) | param_3 & param_2;
  } // [自动静态注释] 作用域/控制流边界
  plVar2 = *(long **)(param_1 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((plVar2 != (long *)0x0) && ((int)plVar2[1] != 0)) { // [自动静态注释] 条件判断/分支
    lVar1 = *plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      plVar2 = (long *)(lVar1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar1 = lVar1 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(byte *)(*plVar2 + 0x20) = *(byte *)(*plVar2 + 0x20) & ~param_3 | param_3 & param_2;
    } while (lVar1 != **(long **)(param_1 + 0x10) + // [自动静态注释] 循环/迭代
                      (ulong)*(uint *)(*(long **)(param_1 + 0x10) + 1) * 0x10); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



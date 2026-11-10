/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002C7B80
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c7b80; name: FUN_.text__003c7b80
 */


void FUN__text__003c7b80(long param_1,long *param_2,undefined4 *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar1 = *(long **)(param_1 + 0x220); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(param_1 + 0x228) != 0) { // [自动静态注释] 条件判断/分支
    lVar2 = *plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    while (lVar2 != *param_2) { // [自动静态注释] 循环/迭代
      plVar1 = plVar1 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar2 = *plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  lVar2 = plVar1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_3 = *(undefined4 *)(lVar2 + 0x50);
  param_3[1] = *(undefined4 *)(lVar2 + 0x54); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



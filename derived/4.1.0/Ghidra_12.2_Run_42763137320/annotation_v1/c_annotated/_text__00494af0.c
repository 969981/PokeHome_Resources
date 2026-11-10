/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00394AF0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00494af0; name: FUN_.text__00494af0
 */


long * FUN__text__00494af0(long param_1,long param_2,undefined4 param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar1 = (long *)FUN__text__004b8b20(0x503,param_1 + 0x18); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (plVar1 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(plVar1 + 0x1d) = *(undefined4 *)(param_1 + 0x20);
    FUN__text__004b91b0(plVar1,param_2 + 0x38); // [自动静态注释] 调用尚未恢复正式名称的函数
    (**(code **)(*plVar1 + 0x28))(plVar1,param_3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__004b9200(plVar1,*(undefined8 *)(param_2 + 8)); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__004ba7b0(plVar1,*(byte *)(param_2 + 0x310) >> 2 & 1); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__004b936c(plVar1,*(undefined4 *)(param_2 + 0x90)); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__004b9354(plVar1,*(byte *)(param_2 + 0x310) >> 1 & 1); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__004b91ec(plVar1,*(undefined4 *)(param_2 + 0x80)); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (*(long **)(param_2 + 0x18) != (long *)0x0) { // [自动静态注释] 条件判断/分支
      plVar1[0x1f] = **(long **)(param_2 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return plVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



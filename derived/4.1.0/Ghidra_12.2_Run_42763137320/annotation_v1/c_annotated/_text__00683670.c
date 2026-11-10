/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00583670
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00683670; name: FUN_.text__00683670
 */


undefined8 FUN__text__00683670(long param_1,undefined1 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar2 = *(undefined1 **)(*(long *)(param_1 + 8) + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(undefined1 **)(*(long *)(param_1 + 8) + 0x10) == puVar2) { // [自动静态注释] 条件判断/分支
    uVar1 = FUN__text__00683578(); // [自动静态注释] 调用尚未恢复正式名称的函数
    if ((int)uVar1 != 0) { // [自动静态注释] 条件判断/分支
      return uVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    puVar2 = *(undefined1 **)(*(long *)(param_1 + 8) + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *puVar2 = param_2;
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



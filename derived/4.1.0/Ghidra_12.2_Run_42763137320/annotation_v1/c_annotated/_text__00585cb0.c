/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00485CB0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00585cb0; name: FUN_.text__00585cb0
 */


undefined8 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
FUN__text__00585cb0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,short param_5) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined2 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(char *)(param_1 + 0xda) != '\0') { // [自动静态注释] 条件判断/分支
    if (*(long *)(param_1 + 0xb8) != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__00400fc0(5); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined1 *)(param_1 + 0xda) = 0;
      *(long *)(param_1 + 0xb8) = 0;
      *(undefined8 *)(param_1 + 0xc0) = 0;
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  *(short *)(param_1 + 0xd8) = param_5;
  puVar1 = (undefined2 *)(param_1 + 0x8e); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_5 != 1) { // [自动静态注释] 条件判断/分支
    puVar1 = (undefined2 *)(param_1 + 0x82); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00585d70(param_1 + 0x18,*(undefined4 *)(param_3 + 4),*puVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined4 *)(param_1 + 0x10) = 3;
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



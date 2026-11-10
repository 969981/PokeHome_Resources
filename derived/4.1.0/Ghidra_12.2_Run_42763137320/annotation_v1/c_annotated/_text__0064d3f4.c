/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0054D3F4
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0064d3f4; name: FUN_.text__0064d3f4
 */


void FUN__text__0064d3f4(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_1 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x30,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar1[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *puVar1 = 0;
    puVar1[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(puVar1 + 5) = 0;
    DAT_00c5f5c0 = puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar1[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar1[3] = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__0064d450(puVar1,8); // [自动静态注释] 调用尚未恢复正式名称的函数
    DAT_00c5f5c8 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



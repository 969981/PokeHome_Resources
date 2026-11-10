/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0015ED10
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0025ed10; name: FUN_.text__0025ed10
 */


void FUN__text__0025ed10(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  code *pcVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *local_b0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *local_a8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 *local_a0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 *puStack_98; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_90 [12]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_30; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_90[0] = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_b0 = FUN__text__0025f4a4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_a8 = FUN__text__0025f4e0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_a0 = &LAB__text__0025f4e4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puStack_98 = &LAB__text__0025f4f0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_30 = local_90[0] + 0x648; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_28 = 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__001364d0(0x7167dd,*(undefined8 *)(local_90[0] + 0x60),&local_b0); // [自动静态注释] 调用尚未恢复正式名称的函数
  pcVar1 = local_a8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (local_a8 != (code *)0x0) { // [自动静态注释] 条件判断/分支
    local_a0 = (undefined1 *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puStack_98 = (undefined1 *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_b0 = (code *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_a8 = (code *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (*pcVar1)(local_90); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



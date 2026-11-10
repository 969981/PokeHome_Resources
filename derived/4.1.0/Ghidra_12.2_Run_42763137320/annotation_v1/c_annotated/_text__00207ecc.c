/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00107ECC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00207ecc; name: FUN_.text__00207ecc
 */


void FUN__text__00207ecc(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  code *pcVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *local_b0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *local_a8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 *local_a0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 *local_98; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long alStack_90 [12]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__0012bcbc(param_1 + 0x110,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_b0 = FUN__text__002087c4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_a8 = FUN__text__002087ec; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_a0 = &LAB__text__002087f0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_98 = &LAB__text__002087fc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  alStack_90[0] = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0012c3b0(param_1 + 0x110,0x71028b,&local_b0); // [自动静态注释] 调用尚未恢复正式名称的函数
  pcVar1 = local_a8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (local_a8 != (code *)0x0) { // [自动静态注释] 条件判断/分支
    local_a0 = (undefined1 *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_98 = (undefined1 *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_b0 = (code *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_a8 = (code *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (*pcVar1)(alStack_90); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(undefined1 *)(param_1 + 0xa640) = 1;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



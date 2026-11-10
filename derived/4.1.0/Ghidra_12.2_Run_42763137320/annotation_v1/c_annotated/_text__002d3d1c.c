/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001D3D1C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002d3d1c; name: FUN_.text__002d3d1c
 */


uint FUN__text__002d3d1c(undefined8 param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  code *pcVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_c0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *local_b8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_b0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_a8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_a0 [96]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_40 [24]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__005e927c(auStack_40,0x87b430); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_b0 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_a8 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_c0 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_b8 = (code *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = FUN__text__002ce1c4(param_1,auStack_40,&local_c0); // [自动静态注释] 调用尚未恢复正式名称的函数
  pcVar1 = local_b8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (local_b8 != (code *)0x0) { // [自动静态注释] 条件判断/分支
    local_b0 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_a8 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_c0 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_b8 = (code *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (*pcVar1)(auStack_a0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  if (local_28 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return uVar2 & 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004B25B4
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005b25b4; name: FUN_.text__005b25b4
 */


void FUN__text__005b25b4(long param_1,undefined8 param_2,undefined1 param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_90; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_88; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_80; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_78; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  nn::os::InitializeLightEvent(param_1,0,1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined1 *)(param_1 + 2) = 0x4f;
  *(undefined1 *)(param_1 + 3) = 0;
  local_60 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_38 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  uStack_68 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_40 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(undefined8 *)(param_1 + 0x30) = 0;
  local_90 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_88 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_80 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_78 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = param_2;
  *(undefined8 *)(param_1 + 0x58) = 0;
  local_58 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_50 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_70 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_48 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__005b3880(&local_90); // [自动静态注释] 调用尚未恢复正式名称的函数
  puVar1 = (undefined8 *)(param_1 + 0xa0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *puVar1 = 0;
  *(undefined8 **)(param_1 + 0xa8) = puVar1;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(long *)(param_1 + 0x70) = param_1 + 0x70;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined1 *)(param_1 + 0xc0) = param_3;
  *(undefined8 *)(param_1 + 200) = 0;
  *(long *)(param_1 + 0x78) = param_1 + 0x70;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(long *)(param_1 + 0x88) = param_1 + 0x88;
  *(long *)(param_1 + 0x90) = param_1 + 0x88;
  *(undefined8 **)(param_1 + 0xb0) = puVar1;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



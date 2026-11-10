/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0043A044
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0053a044; name: FUN_.text__0053a044
 */


undefined1  [16] // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
FUN__text__0053a044(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3, // [自动静态注释] 调用尚未恢复正式名称的函数
                   undefined8 *param_4,long param_5,long param_6,long param_7,long param_8) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  undefined8 local_98; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_90; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_88; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_80; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_78; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lStack_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 local_4c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_48 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *param_4 = *(undefined8 *)(param_8 + 0xb0);
  FUN__text__00521214(param_7,&local_28,auStack_48); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_80 = FUN__text__00521904(param_7,local_28 != param_8); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_98 = *(undefined8 *)(param_5 + 0xe8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_90 = *(undefined8 *)(param_5 + 0xf0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_68 = param_6 + 0x80; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lStack_60 = param_6 + 0x48; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_58 = param_6 + 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_4c = 0x100; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_50 = SQRT(*(float *)(param_7 + 0x40) * *(float *)(param_7 + 0x40) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  *(float *)(param_7 + 0x3c) * *(float *)(param_7 + 0x3c)) +
             *(float *)(param_6 + 0x128);
  local_88 = *(undefined8 *)(param_5 + 0xf8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_78 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_70 = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__00539e90(param_4,&local_98,param_5 + 0x58,&local_80); // [自动静态注释] 调用尚未恢复正式名称的函数
  return ZEXT816(0); // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



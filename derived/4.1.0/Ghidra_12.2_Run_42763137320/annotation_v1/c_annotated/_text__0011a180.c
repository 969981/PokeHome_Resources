/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0001A180
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0011a180; name: FUN_.text__0011a180
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0011a180(undefined8 param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar1 = (long *)std::__libcpp_verbose_abort((char *)0x717233,param_1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar1[0x10] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar1[0x11] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar1[0xe] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar1[0xf] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar1[0xc] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar1[0xd] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar1[10] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar1[0xb] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar1[8] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar1[9] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar1[6] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar1[7] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar1[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar1[5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar1[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar1[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *plVar1 = 0;
  plVar1[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *plVar1 = _DAT_0089fef8 + 0x10;
  *(undefined1 *)(plVar1 + 0x17) = 0;
  *(undefined1 *)(plVar1 + 0x1d) = 0;
  nn::hid::SetSupportedNpadStyleSet(7); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  nn::hid::SetSupportedNpadIdType((uint *)0x72178c,2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  nn::hid::SetNpadJoyHoldType(0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  nn::hid::SetNpadHandheldActivationMode(0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  nn::hid::BindNpadStyleSetUpdateEvent(0x72178c,plVar1 + 0x12,0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  nn::hid::BindNpadStyleSetUpdateEvent(0x721790,plVar1 + 0x18,0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



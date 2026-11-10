/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004EAD58
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005ead58; name: FUN_.text__005ead58
 */


undefined8 FUN__text__005ead58(void) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 local_4070; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_4068; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_4060; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_4058; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_4050; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  TimeZoneRule aTStack_4048 [16388]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iStack_44; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  CalendarAdditionalInfo aCStack_40 [24]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  CalendarTime aCStack_28 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  PosixTime aPStack_8 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  nn::time::StandardUserSystemClock::GetCurrentTime(aPStack_8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  nn::time::ToCalendarTime(aCStack_28,aCStack_40,aPStack_8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  local_4050 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_4060 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_4058 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_4070 = 0x544d47; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_4068 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  nn::time::LoadTimeZoneRule(aTStack_4048,(LocationName *)&local_4070); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  nn::time::ToPosixTime(&iStack_44,(PosixTime *)&local_4070,2,aCStack_28,aTStack_4048); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return local_4070; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0058E524
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0068e524; name: FUN_.text__0068e524
 */


char * FUN__text__0068e524(undefined8 param_1,undefined1 *param_2,char *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  char local_24 [4]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *local_8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_24[0] = '\0'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_24[1] = '\0'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_24[2] = '\0'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_24[3] = '\0'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_8 = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  nn::util::PickOutCharacterFromUtf8String(local_24,&local_8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *param_2 = 1;
  return local_8; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



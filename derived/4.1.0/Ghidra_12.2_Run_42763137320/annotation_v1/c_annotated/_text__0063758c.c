/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0053758C
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0063758c; name: FUN_.text__0063758c
 */


uint FUN__text__0063758c(undefined8 param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_2e4 [2]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 local_2e2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 local_2e0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 local_2de; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 local_2dc; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 local_2da; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 local_2d8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_2d6 [662]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  memset(auStack_2d6,0,0x296); // [自动静态注释] 内存复制、清零或移动
  FUN__text__00631194(param_1,auStack_2d6); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00604e94(auStack_2d6,2); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar1 = FUN__text__00632ee0(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_2e4[0] = FUN__text__00632408(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_2e2 = FUN__text__006363fc(param_1,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_2e0 = FUN__text__006363fc(param_1,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_2de = FUN__text__006363fc(param_1,2); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_2dc = FUN__text__006363fc(param_1,5); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_2da = FUN__text__006363fc(param_1,3); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_2d8 = FUN__text__006363fc(param_1,4); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__006331e0(param_1,uVar1 & 1); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar1 = FUN__text__0060478c(param_2,param_2 + 0x148,auStack_2d6,local_2e4); // [自动静态注释] 调用尚未恢复正式名称的函数
  return uVar1 & 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



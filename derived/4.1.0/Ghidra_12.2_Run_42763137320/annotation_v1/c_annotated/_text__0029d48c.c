/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0019D48C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0029d48c; name: FUN_.text__0029d48c
 */


void FUN__text__0029d48c(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar3 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(lVar3 + 0x870) = 0xcbf29ce484222645;
  lVar1 = lVar3 + 0x110; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0012bca0(lVar1,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined1 *)(lVar3 + 0x868) = 1;
  local_28 = 0x431e769ffc1ad350; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = FUN__text__0012ce7c(lVar1,&local_28); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003a14e8(uVar2,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_28 = 0x431e779ffc1ad503; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = FUN__text__0012ce7c(lVar1,&local_28); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003a14e8(uVar2,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



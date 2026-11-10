/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0019B7E0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0029b7e0; name: FUN_.text__0029b7e0
 */


void FUN__text__0029b7e0(long param_1,ulong param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar1 = param_1 + 0x110; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x950) + 0xe0) + (param_2 & 0xffffffff) * 8) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  ; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined8 *)(param_1 + 0x870) = 0xa11502d25cbfe4f4;
  *(char *)(param_1 + 0x879) = (char)uVar2;
  FUN__text__0012bca0(lVar1,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined1 *)(param_1 + 0x868) = 1;
  local_28 = 0x431e769ffc1ad350; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = FUN__text__0012ce7c(lVar1,&local_28); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003a14e8(uVar3,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_28 = 0x431e779ffc1ad503; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = FUN__text__0012ce7c(lVar1,&local_28); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003a14e8(uVar3,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



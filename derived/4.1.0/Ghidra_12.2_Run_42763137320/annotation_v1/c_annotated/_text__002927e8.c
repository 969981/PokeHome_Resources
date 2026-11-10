/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001927E8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002927e8; name: FUN_.text__002927e8
 */


void FUN__text__002927e8(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(undefined1 *)(param_1 + 0x868) = 0;
  lVar1 = param_1 + 0x110; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x731718); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_18 = 0x431e779ffc1ad503; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = FUN__text__0012ce7c(lVar1,&local_18); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003a14e8(uVar3,(*(byte *)(lVar2 + 0x58) & 1) == 0); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_18 = 0xc35056d0249a792; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar4 = (long *)FUN__text__0012cdb0(lVar1,&local_18); // [自动静态注释] 调用尚未恢复正式名称的函数
  (**(code **)(*plVar4 + 0x50))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar3 = FUN__text__0012cb14(lVar1,0x731060); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003a14e8(uVar3,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00128ec0(param_1,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00128ca0(param_1,1,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00121DC8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00221dc8; name: FUN_.text__00221dc8
 */


void FUN__text__00221dc8(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x729430); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
  local_28 = 0x431e769ffc1ad350; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = FUN__text__0012cf48(param_1 + 0x110,&local_28); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003a14e8(uVar2,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar2 = FUN__text__0012cbe0(param_1 + 0x110,0x70ee35); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003a14e8(uVar2,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x7293b0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) | 1;
  lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x729438); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



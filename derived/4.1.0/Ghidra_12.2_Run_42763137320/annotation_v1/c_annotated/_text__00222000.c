/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00122000
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00222000; name: FUN_.text__00222000
 */


void FUN__text__00222000(long param_1,ulong param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(undefined2 *)(param_1 + 0x6c8) = 0;
  *(undefined1 *)(param_1 + 0x6ca) = 0;
  FUN__text__00128ca0(param_1,1,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar1 = param_1 + 0x110; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((param_2 & 1) != 0) { // [自动静态注释] 条件判断/分支
    uVar2 = FUN__text__0012cbe0(lVar1,0x70ee35); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__003a1630(); // [自动静态注释] 调用尚未恢复正式名称的函数
    local_18 = FUN__text__003a85a0(uVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__003a8304(uVar2,&local_18,1,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__0012bca0(lVar1,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00128ec0(param_1,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_18 = 0x431e769ffc1ad350; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = FUN__text__0012ce7c(lVar1,&local_18); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003a14e8(uVar2,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



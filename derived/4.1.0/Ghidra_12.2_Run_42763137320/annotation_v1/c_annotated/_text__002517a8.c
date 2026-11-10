/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001517A8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002517a8; name: FUN_.text__002517a8
 */


undefined8 FUN__text__002517a8(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar4 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar1 = lVar4 + 0x110; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0012c300(lVar1,0x70ac84); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_28 = 0x431e769ffc1ad350; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = FUN__text__0012ce7c(lVar1,&local_28); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*(int *)(lVar4 + 0x67c) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__003a14e8(uVar2,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  local_28 = 0x918e9ae3c487032f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar3 = (long *)FUN__text__0012cdb0(lVar1,&local_28); // [自动静态注释] 调用尚未恢复正式名称的函数
  (**(code **)(*plVar3 + 0x50))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__00128ec0(lVar4,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00128ca0(lVar4,1,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



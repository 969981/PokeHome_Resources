/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00137184
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00237184; name: FUN_.text__00237184
 */


void FUN__text__00237184(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__00128ca0(param_1,0,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar2 = *(long *)(param_1 + 0x2d0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
    plVar3 = (long *)(lVar2 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (**(code **)(*plVar3 + 0x10))(plVar3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    (**(code **)(*plVar3 + 0x18))(plVar3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__003c7c60(lVar2,0x72a948,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_18 = 0xa393a9f060c3e94b; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = FUN__text__0012ce7c(param_1 + 0x110,&local_18); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003a14e8(uVar1,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_18 = 0xa393a9f060c3e94b; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = FUN__text__0012ce7c(param_1 + 0x110,&local_18); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003a14e8(uVar1,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined1 *)(*(long *)(param_1 + 0x7a0) + 0x15a) = 0;
  *(undefined1 *)(*(long *)(param_1 + 0x7a8) + 0x15a) = 0;
  *(undefined1 *)(*(long *)(param_1 + 0x7b0) + 0x15a) = 0;
  *(undefined8 *)(param_1 + 0x778) = 0;
  *(undefined8 *)(param_1 + 0x770) = 0;
  *(undefined8 *)(param_1 + 0x768) = 0;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



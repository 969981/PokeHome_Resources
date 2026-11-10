/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0013336C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0023336c; name: FUN_.text__0023336c
 */


void FUN__text__0023336c(long param_1,ulong param_2,ulong param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__00128ca0(param_1,0,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((param_3 & 1) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__0012cbe0(param_1 + 0x110,0x7296fd); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__003a8618(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  if ((param_2 & 1) == 0) { // [自动静态注释] 条件判断/分支
    iVar1 = *(int *)(*(long *)(param_1 + 0x650) + 0x74); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(undefined4 *)(*(long *)(param_1 + 0x640) + 0x10) = 0;
    iVar1 = *(int *)(*(long *)(param_1 + 0x650) + 0x74); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (iVar1 != 0) { // [自动静态注释] 条件判断/分支
    uVar2 = *(undefined4 *)(*(long *)(param_1 + 0x640) + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = FUN__text__0012cbe0(param_1 + 0x110,0x7296fd); // [自动静态注释] 调用尚未恢复正式名称的函数
    local_18 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_14 = uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__003a8304(uVar3,&local_18,1,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__003a14e8(*(undefined8 *)(param_1 + 0x768),0); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



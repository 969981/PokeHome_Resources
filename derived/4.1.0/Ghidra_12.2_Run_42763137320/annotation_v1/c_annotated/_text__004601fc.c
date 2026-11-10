/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003601FC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004601fc; name: FUN_.text__004601fc
 */


void FUN__text__004601fc(long param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__0046a2e0(param_1,1,*(undefined8 *)(param_2 + 0x10)); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00469b30(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  plVar3 = *(long **)(param_1 + 0x80); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar3 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*plVar3 + 0x120))(plVar3,param_2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  if ((*(long *)(param_1 + 0x70) != 0) && (*(short *)(*(long *)(param_1 + 0x70) + 0xc0) != 0)) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if ((*(int *)(param_1 + 0x110) == 0) || (*(int *)(param_1 + 0x144) == 0)) { // [自动静态注释] 条件判断/分支
    *(byte *)(param_1 + 0x19c) = *(byte *)(param_1 + 0x19c) & 0xf8;
    FUN__text__0045fe00(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  iVar2 = FUN__text__0045fff0(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  bVar1 = *(byte *)(param_1 + 0x19c) & 0xf8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (iVar2 == 1) { // [自动静态注释] 条件判断/分支
    bVar1 = bVar1 | 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(byte *)(param_1 + 0x19c) = bVar1;
  FUN__text__0045fe00(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



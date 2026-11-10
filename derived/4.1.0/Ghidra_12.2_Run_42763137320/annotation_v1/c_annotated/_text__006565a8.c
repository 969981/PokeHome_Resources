/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005565A8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006565a8; name: FUN_.text__006565a8
 */


undefined8 FUN__text__006565a8(long *param_1,ulong param_2,long param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *pcVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar6 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar1 = 0x108; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((param_2 & 1) == 0) { // [自动静态注释] 条件判断/分支
    lVar1 = 200; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  iVar3 = thunk_FUN__text__0066c2d8(0x72064c,param_3,6); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (iVar3 == 0) { // [自动静态注释] 条件判断/分支
    return 0x3d; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  pcVar5 = (char *)(param_3 + 6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  cVar2 = *pcVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while ((cVar2 != '\0' && (iVar3 = FUN__text__0065680c(), iVar3 != 0))) { // [自动静态注释] 循环/迭代
    pcVar5 = pcVar5 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    cVar2 = *pcVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  uVar4 = FUN__text__006758ac(pcVar5,lVar6 + lVar1 + 0x1100); // [自动静态注释] 调用尚未恢复正式名称的函数
  return uVar4; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



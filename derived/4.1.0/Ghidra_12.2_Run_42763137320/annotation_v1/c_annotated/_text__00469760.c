/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00369760
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00469760; name: FUN_.text__00469760
 */


uint FUN__text__00469760(long param_1,uint param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar1 = FUN__text__00464cf0(); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar4 = *(long *)(param_1 + 0x70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar4 == 0) { // [自动静态注释] 条件判断/分支
    if ((param_2 & 1) == 0) goto LAB__text__004697cc; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(short *)(lVar4 + 0xc4) = *(short *)(lVar4 + 0xc4) + 1;
    if ((param_2 & 1) == 0) goto LAB__text__004697cc; // [自动静态注释] 条件判断/分支
    *(short *)(lVar4 + 0xc6) = *(short *)(lVar4 + 0xc6) + 1;
  } // [自动静态注释] 作用域/控制流边界
  plVar3 = *(long **)(param_1 + 0x80); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar3 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    param_2 = param_2 & 0xfffffffe; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = (**(code **)(*plVar3 + 0x128))(plVar3,1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = uVar1 & uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
LAB__text__004697cc: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  plVar3 = *(long **)(param_1 + 0x78); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar3 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    uVar2 = (**(code **)(*plVar3 + 0x128))(plVar3,param_2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = uVar1 & uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return uVar1 & 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



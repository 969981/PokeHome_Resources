/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005A4AA4
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006a4aa4; name: FUN_.text__006a4aa4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN__text__006a4aa4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar2 = (*(code *)*_DAT_008a6960)(0x1d0,0x10,*_DAT_008a6970); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__006d3efc(lVar2,param_4,param_2,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  lVar3 = *(long *)(param_1 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar1 = *(int *)(lVar3 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar5 = *(long *)(lVar3 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(int *)(lVar3 + 0x18) = iVar1 + 1;
  *(long *)(lVar5 + (long)iVar1 * 0x18) = lVar2;
  plVar6 = (long *)(param_1 + 0x50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar4 = (long *)(lVar5 + (long)iVar1 * 0x18 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar3 = *plVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *plVar4 = *plVar6;
  *(long **)(lVar3 + 8) = plVar6;
  *(long **)(*plVar6 + 8) = plVar4;
  *plVar6 = lVar3;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return lVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



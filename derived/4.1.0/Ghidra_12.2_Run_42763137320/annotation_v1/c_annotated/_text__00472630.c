/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00372630
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00472630; name: FUN_.text__00472630
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00472630(undefined8 param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar1 = _DAT_008a45c0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  for (lVar3 = *(long *)(_DAT_008a4d08 + 0x10); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x240)) { // [自动静态注释] 循环/迭代
    uVar2 = FUN__text__00476ea4(lVar3,param_1,1); // [自动静态注释] 调用尚未恢复正式名称的函数
    if ((uVar2 & 1) != 0) { // [自动静态注释] 条件判断/分支
      local_38 = 0x400000000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__00474488(lVar3,&local_38,1); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__004b4b80(*puVar1,*(undefined8 *)(lVar3 + 0x1e8),0,0); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00415730(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



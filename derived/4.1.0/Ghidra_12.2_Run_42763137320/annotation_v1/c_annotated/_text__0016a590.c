/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0006A590
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0016a590; name: FUN_.text__0016a590
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0016a590(byte param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar2 = _DAT_0089f560; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(byte *)(*_DAT_0089f560 + 0x50) = param_1;
  if (param_1 - 1 < 0xb) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x0016a5cc */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__0016a5d8 + (ulong)*(byte *)((ulong)(param_1 - 1) + 0x7252c4) * 4))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__0015b020(2); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00167a0c(DAT_008e1530); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00169c44(DAT_008e1570); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00166670(DAT_008e1530,*(undefined8 *)(DAT_008e1518 + 8)); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (DAT_008e1650 == 0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar1 = *(byte *)(*plVar2 + 0x50) - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar1 < 0xb) { // [自动静态注释] 条件判断/分支
    FUN__text__00157e4c(DAT_008e1650,*(undefined4 *)((long)(char)uVar1 * 4 + 0x725374)); // [自动静态注释] 调用尚未恢复正式名称的函数
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00157e4c(DAT_008e1650,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



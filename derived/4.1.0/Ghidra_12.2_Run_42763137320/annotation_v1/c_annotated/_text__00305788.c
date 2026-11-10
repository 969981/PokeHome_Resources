/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00205788
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00305788; name: FUN_.text__00305788
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN__text__00305788(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_50 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort local_38 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  iVar2 = FUN__text__00305840(param_1 + 0x50); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar1 = DAT_008e1640; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (iVar2 == 0) { // [自动静态注释] 条件判断/分支
    local_38[0] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_50 = FUN__text__0011b95c(DAT_008e15f0); // [自动静态注释] 调用尚未恢复正式名称的函数
    local_40 = 0x10015f008c54000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    std::string::assign((char *)local_38); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar3 = FUN__text__00308dec(uVar1,local_50); // [自动静态注释] 调用尚未恢复正式名称的函数
    if ((local_38[0] & 1) != 0) { // [自动静态注释] 条件判断/分支
      operator_delete(local_28); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      return uVar3 & 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return uVar3 & 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



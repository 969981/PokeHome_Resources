/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00212CB0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00312cb0; name: FUN_.text__00312cb0
 */


int FUN__text__00312cb0(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  iVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = 0x10000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    uVar2 = uVar5 >> 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = (uint)uVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = uVar4 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar5 = (ulong)uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar3 = (*(byte *)(param_1 + 0xdc + (uVar2 & 0x1fff)) >> (ulong)(uVar4 & 7) & 1) + iVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while (uVar1 != 0x10329); // [自动静态注释] 循环/迭代
  return iVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



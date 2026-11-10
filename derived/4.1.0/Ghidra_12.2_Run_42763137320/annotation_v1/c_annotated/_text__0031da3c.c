/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0021DA3C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0031da3c; name: FUN_.text__0031da3c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN__text__0031da3c(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auVar4 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auVar6 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar1 = (uint *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar2 < *puVar1) { // [自动静态注释] 条件判断/分支
    auVar4._8_8_ = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    auVar4._0_8_ = *(long *)(puVar1 + 2) + uVar2 * 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    return auVar4 << 0x40; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  iVar3 = (int)uVar2 - *puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar5 = LZCOUNT(iVar3 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  auVar6._0_8_ = 0x1c - lVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  auVar6._8_8_ = *(long *)(*(long *)(puVar1 + 4) + (0x1b - lVar5) * 8 + 8) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                 (ulong)(uint)(iVar3 - *(int *)(_DAT_008a2a58 + auVar6._0_8_ * 4)) * 0x20; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return auVar6; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



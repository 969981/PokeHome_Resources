/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0017A5C0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0027a5c0; name: FUN_.text__0027a5c0
 */


int FUN__text__0027a5c0(long param_1,int param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar2 = *(uint *)(param_1 + (ulong)*(uint *)(param_1 + (long)param_2 * 0x18 + 0x698d8) * 0x10 + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                   0x7b238); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (uVar2 == 0) { // [自动静态注释] 条件判断/分支
    return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    uVar5 = (uint)uVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = uVar6 & 0x3f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = uVar5 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar6 = (ulong)uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar4 = iVar4 + ((uint)(*(ulong *)(param_1 + (long)param_2 * 0x18 + 0x698e0 + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                                      (ulong)(uVar5 >> 6 & 0x3ff) * 8) >> uVar3) & 1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } while (uVar2 != uVar1); // [自动静态注释] 循环/迭代
  return iVar4; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



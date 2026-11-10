/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003913E0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004913e0; name: FUN_.text__004913e0
 */


undefined4 FUN__text__004913e0(long param_1,ulong param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar2 = *(uint *)(param_1 + 0xd8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar2 != 0) { // [自动静态注释] 条件判断/分支
    iVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      uVar1 = iVar3 + (uVar2 >> 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar4 = *(ulong *)(*(long *)(param_1 + 0xd0) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                        (-(ulong)(uVar1 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar1 << 4)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if (uVar4 == param_2) { // [自动静态注释] 条件判断/分支
        return *(undefined4 *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar1 * 0x10 + 8); // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      if (uVar4 < param_2) { // [自动静态注释] 条件判断/分支
        iVar3 = uVar1 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      uVar1 = uVar2 - (uVar4 < param_2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar2 = uVar1 >> 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (1 < uVar1); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



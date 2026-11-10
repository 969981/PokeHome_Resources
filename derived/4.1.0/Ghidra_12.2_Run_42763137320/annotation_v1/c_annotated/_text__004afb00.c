/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003AFB00
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004afb00; name: FUN_.text__004afb00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004afb00(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ulong uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 0x18)) { // [自动静态注释] 条件判断/分支
    do { // [自动静态注释] 循环/迭代
      puVar3 = *(ushort **)(param_1 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar2 = (ushort *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (puVar3 != *(ushort **)(param_1 + 0x18)) { // [自动静态注释] 条件判断/分支
        puVar2 = puVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      if (puVar2[1] - 1 < 0x3f) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x004afb6c */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK__text__004afb78 + (ulong)*(byte *)((ulong)(puVar2[1] - 1) + 0x73d970) * 4)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                  (); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      uVar1 = *(long *)(param_1 + 0x10) + ((ulong)(*puVar2 + 3) & 0x1fffc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*(ulong *)(param_1 + 0x28) <= uVar1) { // [自动静态注释] 条件判断/分支
        uVar1 = *(ulong *)(param_1 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      *(ulong *)(param_1 + 0x10) = uVar1;
    } while (*(ulong *)(param_1 + 0x10) != *(ulong *)(param_1 + 0x18)); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



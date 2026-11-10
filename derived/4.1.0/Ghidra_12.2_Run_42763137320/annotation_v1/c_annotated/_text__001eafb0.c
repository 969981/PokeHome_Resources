/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000EAFB0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001eafb0; name: FUN_.text__001eafb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001eafb0(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined4 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar2 = _DAT_008a0678; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = _DAT_008a0678[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  **(undefined4 **)(param_1 + 0x180) = *_DAT_008a0678;
  *(undefined4 *)(*(long *)(param_1 + 0x180) + 4) = uVar3;
  uVar3 = puVar2[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = puVar2[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(*(long *)(param_1 + 0x180) + 8) = puVar2[2];
  *(undefined4 *)(*(long *)(param_1 + 0x180) + 0xc) = uVar3;
  *(undefined4 *)(*(long *)(param_1 + 0x180) + 0x10) = uVar1;
  uVar3 = FUN__text__0019c574(*(undefined4 *)(param_1 + 0xf4)); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined4 *)(*(long *)(param_1 + 0x180) + 0x23288) = uVar3;
  *(undefined4 *)(*(long *)(param_1 + 0x180) + 0x23280) = 5;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



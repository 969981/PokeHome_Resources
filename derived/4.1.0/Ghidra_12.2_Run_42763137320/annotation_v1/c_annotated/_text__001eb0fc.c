/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000EB0FC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001eb0fc; name: FUN_.text__001eb0fc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001eb0fc(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined4 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar3 = _DAT_008a0688; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = _DAT_008a0688[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  **(undefined4 **)(param_1 + 0x180) = *_DAT_008a0688;
  *(undefined4 *)(*(long *)(param_1 + 0x180) + 4) = uVar4;
  uVar4 = puVar3[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(*(long *)(param_1 + 0x180) + 8) = puVar3[2];
  *(undefined4 *)(*(long *)(param_1 + 0x180) + 0xc) = uVar4;
  uVar1 = puVar3[5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(*(long *)(param_1 + 0x180) + 0x10) = puVar3[4];
  uVar4 = puVar3[6]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = puVar3[7]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(*(long *)(param_1 + 0x180) + 0x14) = uVar1;
  *(undefined4 *)(*(long *)(param_1 + 0x180) + 0x18) = uVar4;
  *(undefined4 *)(*(long *)(param_1 + 0x180) + 0x1c) = uVar2;
  uVar4 = FUN__text__0019c5a0(*(undefined4 *)(param_1 + 0xfc)); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined4 *)(*(long *)(param_1 + 0x180) + 0x23288) = uVar4;
  *(undefined4 *)(*(long *)(param_1 + 0x180) + 0x23280) = 8;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



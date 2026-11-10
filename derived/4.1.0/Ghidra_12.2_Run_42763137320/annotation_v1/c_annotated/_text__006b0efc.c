/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005B0EFC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b0efc; name: FUN_.text__006b0efc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006b0efc(long param_1,long param_2,undefined8 param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte *pbVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar3 = _DAT_008a6a20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = *(uint *)(param_1 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((uVar2 >> 9 & 1) == 0) { // [自动静态注释] 条件判断/分支
    FUN__text__006d6610(param_2,param_3,*(undefined8 *)(param_1 + 0x40)); // [自动静态注释] 调用尚未恢复正式名称的函数
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  pbVar1 = (byte *)(*(long *)(param_1 + 0x18) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                   ((ulong)uVar2 & 3) * 0x10 + ((ulong)uVar2 & 0x30) + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                   ((ulong)(uVar2 >> 2) & 3) * 0x14); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  (*(code *)*_DAT_008a6a20) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            (*(long *)(param_1 + 0x40) + 8,*(undefined4 *)((ulong)*pbVar1 * 4 + 0x724f30)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  (*DAT_00c60c98)(*(undefined4 *)(pbVar1 + 4),*(undefined8 *)(param_2 + 0xb0)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__006d6610(param_2,param_3,*(undefined8 *)(param_1 + 0x40)); // [自动静态注释] 调用尚未恢复正式名称的函数
                    /* WARNING: Could not recover jumptable at 0x006b0fd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(*(long *)(param_1 + 0x40) + 8,8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005ECD4C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006ecd4c; name: FUN_.text__006ecd4c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006ecd4c(long param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  (*(code *)*_DAT_008a6e68)(*(undefined8 *)(param_1 + 0xb0)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  (*(code *)*_DAT_008a6e70) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            (*(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x20), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
             *(undefined4 *)(param_2 + 0x24),*(undefined8 *)(param_1 + 0xb0));
  (*(code *)*_DAT_008a6e78)(*(undefined8 *)(param_1 + 0xb0),param_2 + 4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bVar1 = *(byte *)(param_2 + 0x2d); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((bVar1 & 1) != 0) { // [自动静态注释] 条件判断/分支
    (*(code *)*_DAT_008a6e80)(*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_2 + 0x1c)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    bVar1 = *(byte *)(param_2 + 0x2d); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  (*DAT_00c60cb0)(*(undefined8 *)(param_1 + 0xb0),(bVar1 >> 1 ^ 0xff) & 1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  (*(code *)*_DAT_008a6e90) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            (*(undefined8 *)(param_1 + 0xb0),(*(byte *)(param_2 + 0x2d) >> 2 ^ 0xff) & 1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if ((*(byte *)(param_1 + 1) >> 1 & 1) == 0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Could not recover jumptable at 0x006ece44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*_DAT_008a6e98)(*(undefined8 *)(param_1 + 0xb0),*(byte *)(param_2 + 0x2d) >> 3 & 1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



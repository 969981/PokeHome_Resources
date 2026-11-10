/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005F5CE8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006f5ce8; name: FUN_.text__006f5ce8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006f5ce8(undefined1 *param_1,undefined8 param_2,undefined1 *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined4 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(*(long *)(param_3 + 0x18) + 8);
  *(undefined1 **)(param_1 + 0x10) = param_1 + 0x18;
  (*DAT_00c60498)(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  (*(code *)*_DAT_008a6950)(*(undefined8 *)(param_1 + 0x10),*(undefined2 *)(param_3 + 2),1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  (*(code *)*_DAT_008a7488) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            (*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_3 + 8), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
             *(undefined4 *)(param_3 + 0xc));
  uVar2 = *(undefined8 *)(param_1 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = FUN__text__006f22c0(*param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  (*(code *)*_DAT_008a74a8)(uVar2,uVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *param_1 = 1;
  param_1[1] = param_1[1] & 0xfe; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



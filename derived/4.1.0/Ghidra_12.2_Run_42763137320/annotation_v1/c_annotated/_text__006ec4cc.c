/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005EC4CC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006ec4cc; name: FUN_.text__006ec4cc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006ec4cc(undefined1 *param_1,undefined8 *param_2,undefined4 *param_3, // [自动静态注释] 调用尚未恢复正式名称的函数
                        undefined8 *param_4,undefined8 param_5) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  ulong uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_80; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_78; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_50 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_48 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_60 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_58 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_70 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_68 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_80 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_78 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (*(code *)*_DAT_008a6cb8)(&local_80); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  (*(code *)*_DAT_008a6cc0)(&local_80,*param_2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  (*(code *)*_DAT_008a6cc8)(&local_80,*param_4,param_5,*param_3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined1 **)(param_1 + 8) = param_1 + 0x10;
  (*(code *)*_DAT_008a6cd0)(param_1 + 0x10,&local_80); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar1 = (*(code *)*_DAT_008a6cb0)(*param_4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[1] = (byte)(uVar1 >> 1) & 2 | param_1[1] & 0xfc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = 1;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



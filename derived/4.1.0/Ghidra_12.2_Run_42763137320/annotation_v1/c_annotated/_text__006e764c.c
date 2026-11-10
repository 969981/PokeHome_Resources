/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005E764C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006e764c; name: FUN_.text__006e764c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006e764c(long *param_1,long param_2,undefined4 param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(undefined4 *)(param_1 + 4) = param_3;
  param_1[5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar1 = _DAT_008a6bb8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[2] = 0x3f8000003f800000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[3] = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = _DAT_008a6bc0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = lVar1 + 0x10;
  param_1[1] = 0x3f8000003f800000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_2 + 0xeb8) = 0;
  *(undefined8 *)(param_2 + 0xec0) = uVar2;
  *(undefined8 *)(param_2 + 0xec8) = 0;
  *(undefined8 *)(param_2 + 0xed0) = 0;
  *(undefined **)(param_2 + 0xed8) = &DAT__text__006e7844;
  *(code **)(param_2 + 0xee0) = FUN__text__006e78a0;
  *(undefined8 *)(param_2 + 0xef0) = 0;
  *(undefined8 *)(param_2 + 0xef8) = 0;
  *(undefined8 *)(param_2 + 0xf00) = 0;
  *(undefined1 **)(param_2 + 0xee8) = &LAB__text__006e78f4;
  *(undefined1 **)(param_2 + 0xf08) = &LAB__text__006db950;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



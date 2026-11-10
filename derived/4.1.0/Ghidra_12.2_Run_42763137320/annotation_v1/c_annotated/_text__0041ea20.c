/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0031EA20
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0041ea20; name: FUN_.text__0041ea20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0041ea20(uint param_1,uint param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  short sVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *_DAT_008a4b68 = param_1;
  *_DAT_008a4b70 = param_2;
  uVar1 = (param_1 << 7) / 48000 + 7 & 0x3fff8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  sVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar1 != 0) { // [自动静态注释] 条件判断/分支
    sVar2 = (short)(((param_2 & 0xffff) - 1) / uVar1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  fVar4 = ((float)(param_2 & 0xffff) * 1000.0) / (float)param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *_DAT_008a4b78 = (int)fVar4;
  piVar3 = _DAT_008a4b80; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *_DAT_008a4b88 = uVar1;
  *piVar3 = (int)(fVar4 * 0.25);
  *_DAT_008a4b90 = sVar2 + 1;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



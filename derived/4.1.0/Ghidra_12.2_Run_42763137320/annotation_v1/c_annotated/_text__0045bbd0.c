/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0035BBD0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0045bbd0; name: FUN_.text__0045bbd0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0045bbd0(long *param_1,long *param_2,long param_3,long param_4,undefined4 param_5, // [自动静态注释] 调用尚未恢复正式名称的函数
                        byte param_6) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  param_1[0x28] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x29] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[2] = 0x3f8000003f800000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar1 = _DAT_008a4948; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x2a] = (long)param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x2b] = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x2c] = param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x2d] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x2f] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)((long)param_1 + 0x194) = param_5;
  *param_1 = lVar1 + 0x10;
  param_1[1] = 0x3f8000003f800000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0x32) = 0xc5800000;
  bVar2 = 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((param_6 & 1) == 0) { // [自动静态注释] 条件判断/分支
    bVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  param_1[0x30] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x31] = -0x3a7fffffc0800000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(byte *)(param_1 + 0x33) = bVar2 | param_6 | *(byte *)(param_1 + 0x33) & 0xf8;
  if (*(long *)(param_3 + 0x68) == 0) { // [自动静态注释] 条件判断/分支
    lVar1 = (**(code **)(*param_2 + 0x10))(param_2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar1 = FUN__text__0045cdec(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  param_1[0x2e] = lVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0045bc90(param_1,0,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__004d4648(param_3,param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



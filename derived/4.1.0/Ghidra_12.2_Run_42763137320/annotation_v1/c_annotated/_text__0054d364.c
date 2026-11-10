/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0044D364
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0054d364; name: FUN_.text__0054d364
 */


undefined8 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
FUN__text__0054d364(uint param_1,uint param_2,uint param_3,float param_4,uint *param_5,long *param_6 // [自动静态注释] 调用尚未恢复正式名称的函数
                   ,uint param_7) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_7 < 9) { // [自动静态注释] 条件判断/分支
    param_7 = 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  param_5[0xb] = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_5[0xc] = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_5[7] = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_5[8] = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_5[9] = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_5[10] = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = param_7 + 3 & 0xfffffffc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = 0x3000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (0xfffe6fff < (int)((float)uVar1 * param_4) * 8 - 0x18000U) { // [自动静态注释] 条件判断/分支
    uVar2 = (int)((float)uVar1 * param_4) & 0xfffffffc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (uVar1 <= uVar2) { // [自动静态注释] 条件判断/分支
    uVar2 = uVar2 - 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *param_5 = uVar1;
  param_5[1] = uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = uVar1 * 2 + 0x400; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_5[2] = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar3 = (**(code **)(*param_6 + 0x10))(param_6,(ulong)uVar1 << 2,0x711e2b,0x2f); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(param_5 + 4) = lVar3;
  if (lVar3 == 0) { // [自动静态注释] 条件判断/分支
    return 0x34; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  param_5[6] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



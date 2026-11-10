/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00539DD0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00639dd0; name: FUN_.text__00639dd0
 */


undefined4 FUN__text__00639dd0(ulong *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte local_24 [4]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar4 = (undefined4 *)FUN__text__00638c10(local_24); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (param_1 == (ulong *)0x0) { // [自动静态注释] 条件判断/分支
    uVar3 = FUN__text__006029bc(); // [自动静态注释] 调用尚未恢复正式名称的函数
    return puVar4[uVar3 & 0xff]; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if (local_24[0] == 1) { // [自动静态注释] 条件判断/分支
    return *puVar4; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if (local_24[0] == 0) { // [自动静态注释] 条件判断/分支
    uVar6 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar7 = param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar5 = uVar7 ^ uVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *param_1 = (uVar6 >> 0x28 | uVar6 << 0x18) ^ uVar5 << 0x10 ^ uVar5;
    param_1[1] = uVar5 >> 0x1b | uVar5 << 0x25; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    return puVar4[(int)uVar7 + (int)uVar6 & 0xff]; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar3 = (uint)local_24[0]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar6 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar7 = param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = -0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((uVar3 << (ulong)((uint)LZCOUNT(uVar3) & 0x1f) & 0x7fffffff) == 0) { // [自动静态注释] 条件判断/分支
    lVar2 = -0x1f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  do { // [自动静态注释] 循环/迭代
    uVar5 = uVar6 ^ uVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = (int)uVar6 + (int)uVar7 & (uint)(0xffffffffffffffff >> (lVar2 + LZCOUNT(uVar3) & 0x3fU)) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    ; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar7 = uVar5 >> 0x1b | uVar5 << 0x25; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar6 = (uVar6 >> 0x28 | uVar6 << 0x18) ^ uVar5 << 0x10 ^ uVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while (uVar3 <= uVar1); // [自动静态注释] 循环/迭代
  *param_1 = uVar6;
  param_1[1] = uVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return puVar4[uVar1 & 0xff]; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



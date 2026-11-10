/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00303C30
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00403c30; name: FUN_.text__00403c30
 */


long FUN__text__00403c30(int param_1,ulong param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ulong uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_2 == 0) { // [自动静态注释] 条件判断/分支
    return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar3 = *(ulong *)(&DAT_00ae8a50 + (long)param_1 * 0x638) & param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (0x7d < *(uint *)(uVar3 + 0xc)) { // [自动静态注释] 条件判断/分支
    if (*(uint *)(uVar3 + 0xc) == 0x7e) { // [自动静态注释] 条件判断/分支
      return (uVar3 - param_2) + // [自动静态注释] 返回表达式；具体返回语义取决于调用者
             (&DAT_00ae8a40)[(long)param_1 * 199] * (ulong)*(uint *)(uVar3 + 0x2c); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    return (uVar3 - param_2) + // [自动静态注释] 返回表达式；具体返回语义取决于调用者
           *(long *)(&DAT_00ae8a28 + (long)param_1 * 0x638) * (ulong)*(uint *)(uVar3 + 0x2c);
  } // [自动静态注释] 作用域/控制流边界
  uVar1 = (ulong)*(uint *)(uVar3 + 0x24); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = (param_2 - uVar3) - 0x80; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar1 != 0) { // [自动静态注释] 条件判断/分支
    uVar3 = uVar2 / uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return uVar1 + (uVar3 * uVar1 - uVar2); // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



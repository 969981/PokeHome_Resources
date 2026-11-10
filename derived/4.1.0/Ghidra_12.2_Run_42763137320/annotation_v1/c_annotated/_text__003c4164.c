/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002C4164
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c4164; name: FUN_.text__003c4164
 */


ulong FUN__text__003c4164(long param_1,ushort param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort local_24 [2]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(code **)(param_1 + 0x220) == (code *)0x0) { // [自动静态注释] 条件判断/分支
    uVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (param_2 < 8) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x003c41c4 */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)((ulong)*(byte *)((ulong)param_2 + 0x73a7bd) * 4 + 0x3c4190))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    local_24[0] = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = (**(code **)(param_1 + 0x220))(param_1 + 0x240,local_24); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return (ulong)(uVar1 & 1); // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



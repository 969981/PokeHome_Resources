/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0047BF1C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0057bf1c; name: FUN_.text__0057bf1c
 */


void FUN__text__0057bf1c(undefined8 param_1,undefined4 param_2,undefined4 *param_3,uint param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined4 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_4 < 9) { // [自动静态注释] 条件判断/分支
    uVar1 = NEON_fminnm((float)param_1 * 0.45,param_2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    /* WARNING: Could not emulate address calculation at 0x0057bf70 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__0057bf88 + (ulong)*(ushort *)((ulong)param_4 * 2 + 0x73eaf8) * 4)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              (param_1,uVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)(param_3 + 4) = 0;
  param_3[6] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_3 + 8) = 0;
  param_3[0xc] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_3[0x18] = 0x7fc00000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_3[0x1c] = 0x7fc00000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_3[0x10] = 0xffc00000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_3[0x14] = 0xffc00000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_3 = 0xffc00000;
  param_3[1] = 0xffc00000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_3[2] = 0xffc00000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_3[3] = 0xffc00000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_3[0x15] = 0x7fc00000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_3[0x1d] = 0xffc00000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_3[0x19] = 0xffc00000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_3[0x17] = 0x7fc00000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_3[0x1a] = 0x7fc00000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_3[0x1b] = 0xffc00000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_3[0x16] = 0x7fc00000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_3[0x1e] = 0xffc00000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_3[7] = 0xffc00000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_3[10] = 0xffc00000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_3[0xd] = 0xffc00000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_3[0x11] = 0xffc00000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_3[0xb] = 0xffc00000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_3[0xe] = 0xffc00000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_3[0x12] = 0x7fc00000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_3[0xf] = 0xffc00000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_3[0x13] = 0x7fc00000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_3[0x1f] = 0xffc00000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



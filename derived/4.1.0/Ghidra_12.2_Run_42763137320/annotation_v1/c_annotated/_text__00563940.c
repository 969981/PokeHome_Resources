/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00463940
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00563940; name: FUN_.text__00563940
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00563940(long *param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(undefined2 *)(param_1 + 1) = 0;
  lVar1 = _DAT_008a3c00; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[2] = 0x447a00003f800000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[3] = 0x3f8000003f800000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)((long)param_1 + 0x24) = 0x3f8000003f800000;
  *(undefined4 *)((long)param_1 + 0x2c) = 0x42480000;
  *(undefined2 *)(param_1 + 6) = 0;
  *param_1 = lVar1 + 0x10;
  *(undefined8 *)((long)param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  uVar2 = *(undefined8 *)(param_2 + 0x1c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = *(undefined8 *)(param_2 + 0x24); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = *(undefined8 *)(param_2 + 0x2a); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)((long)param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)((long)param_1 + 0x2a) = uVar4;
  *(undefined8 *)((long)param_1 + 0x24) = uVar3;
  *(undefined8 *)((long)param_1 + 0x1c) = uVar2;
  *(undefined2 *)(param_1 + 1) = 0xffff;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



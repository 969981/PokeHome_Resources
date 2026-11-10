/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0047E9DC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0057e9dc; name: FUN_.text__0057e9dc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0057e9dc(long *param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined1 *)((long)param_1 + 10) = 0;
  lVar1 = _DAT_008a3b70; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)((long)param_1 + 0xc) = 0x3e8000003f000000;
  *(undefined8 *)((long)param_1 + 0x14) = 0x3f0000003e800000;
  *(undefined8 *)((long)param_1 + 0x1c) = 0x3e8000003e800000;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  param_1[6] = 0x447a00003f800000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 7) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0x3f8000003f800000;
  *(undefined4 *)((long)param_1 + 0x44) = 0;
  *(undefined2 *)(param_1 + 9) = 0;
  *param_1 = lVar1 + 0x10;
  uVar2 = *(undefined8 *)(param_2 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = *(undefined8 *)(param_2 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = *(undefined8 *)(param_2 + 0x1c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)((long)param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)((long)param_1 + 0x1c) = uVar4;
  *(undefined8 *)((long)param_1 + 0x14) = uVar3;
  *(undefined8 *)((long)param_1 + 0xc) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x34); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = *(undefined8 *)(param_2 + 0x3c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = *(undefined8 *)(param_2 + 0x42); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)((long)param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
  *(undefined8 *)((long)param_1 + 0x42) = uVar4;
  *(undefined8 *)((long)param_1 + 0x3c) = uVar3;
  *(undefined8 *)((long)param_1 + 0x34) = uVar2;
  *(undefined2 *)(param_1 + 1) = 0xffff;
  *(undefined1 *)((long)param_1 + 10) = 0xff;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00461AEC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00561aec; name: FUN_.text__00561aec
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00561aec(long *param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined2 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0x3f800000447a0000;
  lVar2 = _DAT_008a3d98; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)((long)param_1 + 10) = 0;
  param_1[5] = 0x3f80000000000000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[6] = 0x3f800000447a0000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)((long)param_1 + 0xc) = 0x3f80000000000000;
  *(undefined8 *)((long)param_1 + 0x1c) = 0x3f8000003f800000;
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  param_1[7] = 0x3f8000003f800000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0x3f80000000000000;
  *(undefined8 *)((long)param_1 + 0x4c) = 0x4003f800000;
  *(undefined2 *)((long)param_1 + 0x54) = 0;
  *param_1 = lVar2 + 0x10;
  uVar3 = *(undefined8 *)(param_2 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)((long)param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)((long)param_1 + 0xc) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x1c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = *(undefined8 *)(param_2 + 0x24); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = *(undefined8 *)(param_2 + 0x2c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)((long)param_1 + 0x34) = *(undefined8 *)(param_2 + 0x34);
  *(undefined8 *)((long)param_1 + 0x2c) = uVar5;
  *(undefined8 *)((long)param_1 + 0x24) = uVar4;
  *(undefined8 *)((long)param_1 + 0x1c) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x44); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = *(undefined8 *)(param_2 + 0x4c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = *(undefined2 *)(param_2 + 0x54); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)((long)param_1 + 0x3c) = *(undefined8 *)(param_2 + 0x3c);
  *(undefined2 *)((long)param_1 + 0x54) = uVar1;
  *(undefined8 *)((long)param_1 + 0x4c) = uVar4;
  *(undefined8 *)((long)param_1 + 0x44) = uVar3;
  *(undefined2 *)(param_1 + 1) = 0xffff;
  *(undefined1 *)((long)param_1 + 10) = 0xff;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002D5C30
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d5c30; name: FUN_.text__003d5c30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__003d5c30(int *param_1,uint param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*param_1 != -1) { // [自动静态注释] 条件判断/分支
    return 0x72; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  *param_1 = 0;
  *(undefined8 *)((long)param_1 + 0x52) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x4a) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x62) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x5a) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x72) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x6a) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x82) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x7a) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x12) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 10) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x22) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x1a) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x32) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x2a) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x42) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x3a) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x92) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x8a) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0xa2) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x9a) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0xb2) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0xaa) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0xc2) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0xba) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0xd2) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0xca) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0xe2) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0xda) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0xf2) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0xea) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x102) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0xfa) = 0xffffffffffffffff;
  uVar1 = _DAT_00724cd0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)((long)param_1 + 0x53) = uRam0000000000724cd8;
  *(undefined8 *)((long)param_1 + 0x4b) = uVar1;
  uVar1 = _DAT_007239e8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined2 *)((long)param_1 + 99) = 0x1918;
  *(undefined8 *)((long)param_1 + 0x5b) = uVar1;
  *(undefined8 *)((long)param_1 + 0x7b) = _DAT_00723960;
  *(undefined8 *)((long)param_1 + 0x3a) = _DAT_007239a0;
  uVar2 = uRam0000000000724958; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = _DAT_00724950; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined2 *)((long)param_1 + 0x83) = 0x3332;
  *(undefined2 *)((long)param_1 + 0x42) = 0x3d3c;
  *(undefined8 *)((long)param_1 + 0x73) = uVar2;
  *(undefined8 *)((long)param_1 + 0x6b) = uVar1;
  if (param_2 < 8) { // [自动静态注释] 条件判断/分支
    *(undefined1 *)((long)param_1 + 0x47) = 0xfe;
    *(undefined1 *)((long)param_1 + 0x17) = 0xfe;
    *(undefined1 *)(param_1 + 5) = 0xfe;
    uVar3 = 0x212e5f5f2e2d2b2b >> (((ulong)param_2 & 7) << 3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(char *)(param_1 + 2) = (char)uVar3;
    *(undefined1 *)((long)param_1 + (uVar3 & 0xff) + 10) = 0x3e;
    uVar3 = 0x2d5f2d3a2d5f2d2f >> (((ulong)param_2 & 7) << 3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(char *)((long)param_1 + 9) = (char)uVar3;
    *(undefined1 *)((long)param_1 + (uVar3 & 0xff) + 10) = 0x3f;
    return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  return 0x16; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



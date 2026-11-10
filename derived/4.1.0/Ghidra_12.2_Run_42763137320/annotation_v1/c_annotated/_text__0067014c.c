/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0057014C
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0067014c; name: FUN_.text__0067014c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__0067014c(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(undefined8 *)(param_1 + 0x6f0) = 0;
  puVar1 = _DAT_008a3810; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 0x778) = 0;
  puVar3 = _DAT_008a6590; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 0x780) = 0;
  puVar2 = _DAT_008a3818; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 0x788) = 0;
  *(undefined8 *)(param_1 + 0x790) = 0;
  uVar5 = _DAT_008a65c0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = *puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 **)(param_1 + 0x708) = &LAB__text__00670310;
  *(undefined8 *)(param_1 + 0x7d8) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x720) = uVar5;
  *(undefined8 *)(param_1 + 0x6f8) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x688) = uVar4;
  uVar5 = *puVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = *puVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 0x6d8) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xc08) = 0x3c;
  *(undefined8 *)(param_1 + 0xbf8) = 5;
  *(undefined8 *)(param_1 + 0x680) = 0;
  *(undefined4 *)(param_1 + 0xc00) = 0;
  *(undefined1 *)(param_1 + 0x6c2) = 0;
  *(undefined8 *)(param_1 + 0x6c8) = 5;
  *(undefined1 *)(param_1 + 0xa90) = 0;
  *(undefined8 *)(param_1 + 0x668) = uVar4;
  *(undefined8 *)(param_1 + 0x690) = uVar5;
  *(undefined4 *)(param_1 + 0xa38) = 1;
  *(undefined4 *)(param_1 + 0xe90) = 1;
  *(undefined4 *)(param_1 + 0xc40) = 1;
  *(undefined8 *)(param_1 + 0x6b0) = 1;
  *(undefined8 *)(param_1 + 0x6b8) = 1;
  *(undefined2 *)(param_1 + 0x6c0) = 1;
  *(ulong *)(param_1 + 0xf40) = *(ulong *)(param_1 + 0xf40) & 0xfffffffe3fff7ffc | 0xc0008000;
  FUN__text__00656da4(param_1 + 0x820,param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined8 *)(param_1 + 0xc78) = 0xffffffffffffffff;
  *(byte *)(param_1 + 0xac1) = *(byte *)(param_1 + 0xac1) | 0xb;
  memcpy((void *)(param_1 + 0xb20),(void *)(param_1 + 0xa48),0xd8); // [自动静态注释] 内存复制、清零或移动
  *(undefined8 *)(param_1 + 0xe78) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xc68) = 0x1a4;
  *(undefined8 *)(param_1 + 0xc70) = 0x1ed;
  *(undefined8 *)(param_1 + 0xe80) = 0xfffffffff3fffbef;
  FUN__text__00677948(); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined8 *)(param_1 + 0xee0) = 1000;
  *(undefined8 *)(param_1 + 0xea0) = 0;
  *(undefined8 *)(param_1 + 0xc10) = 0x4000;
  *(undefined8 *)(param_1 + 0xc18) = 0x10000;
  *(undefined8 *)(param_1 + 0x7c0) = 200;
  *(undefined8 *)(param_1 + 0xea8) = 0;
  *(undefined8 *)(param_1 + 0xed0) = 0x3c;
  *(undefined8 *)(param_1 + 0xf10) = 60000;
  *(undefined8 *)(param_1 + 0xec8) = 0x3c;
  *(undefined8 *)(param_1 + 0xeb0) = 0;
  *(undefined8 *)(param_1 + 0xed8) = 5;
  *(ulong *)(param_1 + 0xf40) = *(ulong *)(param_1 + 0xf40) & 0xffff07ffffffffff | 0x400c00800000010
  ; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined8 *)(param_1 + 0xa40) = 4;
  FUN__text__006619d0(param_1 + 0x668); // [自动静态注释] 调用尚未恢复正式名称的函数
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



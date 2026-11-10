/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005DB1DC
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006db1dc; name: FUN_.text__006db1dc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006db1dc(long *param_1,long *param_2,long param_3,undefined4 param_4,int param_5) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  void *__s; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  param_1[1] = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar1 = _DAT_008a6b88; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[2] = (long)param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 3) = param_4;
  *(int *)((long)param_1 + 0x1c) = param_5;
  param_1[6] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = lVar1 + 0x10;
  param_1[4] = (long)param_5 * 0x90; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  __s = (void *)(**(code **)(*param_2 + 0x10))(param_2,(long)param_5 * 0x90,0x80); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[6] = (long)__s; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  memset(__s,0,(long)*(int *)((long)param_1 + 0x1c) * 0x90); // [自动静态注释] 内存复制、清零或移动
  lVar1 = param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 **)(lVar1 + 0xf20) = &LAB__text__006db768;
  *(undefined **)(lVar1 + 0xf30) = &DAT__text__006db7b8;
  *(code **)(lVar1 + 0xf38) = FUN__text__006db7dc;
  *(code **)(lVar1 + 0xf18) = FUN__text__006db2d0;
  *(undefined8 *)(lVar1 + 0xf10) = 0;
  *(undefined8 *)(lVar1 + 0xf28) = 0;
  *(code **)(lVar1 + 0xf40) = FUN__text__006db850;
  *(code **)(lVar1 + 0xf48) = FUN__text__006db56c;
  *(undefined1 **)(lVar1 + 0xf50) = &LAB__text__006db610;
  *(undefined1 **)(lVar1 + 0xf58) = &LAB__text__006db700;
  *(undefined1 **)(lVar1 + 0xf60) = &LAB__text__006db950;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



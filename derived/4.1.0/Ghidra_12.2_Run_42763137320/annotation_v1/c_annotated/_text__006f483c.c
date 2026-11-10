/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005F483C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006f483c; name: FUN_.text__006f483c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006f483c(long param_1,undefined8 param_2,undefined1 *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(undefined2 *)(param_1 + 0x1a) = *(undefined2 *)(param_3 + 4);
  (*DAT_00c60908)(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  (*DAT_00c60910)(param_1,param_3[4] & 1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  (*DAT_00c60918)(param_1,(byte)param_3[4] >> 1 & 1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  (*DAT_00c60928)(param_1,(byte)param_3[4] >> 2 & 1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar4 = FUN__text__006f22d0(*param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  (*(code *)*_DAT_008a7888)(param_1,uVar4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar4 = FUN__text__006f22f0(param_3[0x1b]); // [自动静态注释] 调用尚未恢复正式名称的函数
  puVar2 = _DAT_008a7898; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (*(code *)*_DAT_008a7898)(param_1,2,uVar4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar4 = FUN__text__006f22e0(param_3[0x18]); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar5 = FUN__text__006f22e0(param_3[0x19]); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar6 = FUN__text__006f22e0(param_3[0x1a]); // [自动静态注释] 调用尚未恢复正式名称的函数
  puVar3 = _DAT_008a78a0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (*(code *)*_DAT_008a78a0)(param_1,2,uVar4,uVar5,uVar6); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar4 = FUN__text__006f22f0(param_3[0xb]); // [自动静态注释] 调用尚未恢复正式名称的函数
  (*(code *)*puVar2)(param_1,1,uVar4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar4 = FUN__text__006f22e0(param_3[8]); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar5 = FUN__text__006f22e0(param_3[9]); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar6 = FUN__text__006f22e0(param_3[10]); // [自动静态注释] 调用尚未恢复正式名称的函数
  (*(code *)*puVar3)(param_1,1,uVar4,uVar5,uVar6); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(uint *)(param_1 + 0x10) = (uint)(byte)param_3[0x1c];
  *(uint *)(param_1 + 0x14) = (uint)(byte)param_3[0xc];
  *(uint *)(param_1 + 8) = (uint)(byte)param_3[1];
  bVar1 = param_3[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(uint *)(param_1 + 0xc) = (uint)bVar1;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



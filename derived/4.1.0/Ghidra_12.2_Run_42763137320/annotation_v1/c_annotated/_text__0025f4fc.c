/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0015F4FC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0025f4fc; name: FUN_.text__0025f4fc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__0025f4fc(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined4 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar5 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0012c300(lVar5 + 0x110,0x70ac84); // [自动静态注释] 调用尚未恢复正式名称的函数
  puVar4 = _DAT_008a1ce8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(lVar5 + 0x681) = *(undefined4 *)(_DAT_008a1ce8 + 1);
  *(undefined8 *)(lVar5 + 0x685) = *(undefined8 *)(puVar4 + 5);
  *(undefined8 *)(lVar5 + 0x68d) = *(undefined8 *)(puVar4 + 0xd);
  *(undefined8 *)(lVar5 + 0x695) = *(undefined8 *)(puVar4 + 0x15);
  *(undefined4 *)(lVar5 + 0x69d) = *(undefined4 *)(puVar4 + 0x1d);
  *(undefined4 *)(lVar5 + 0x6a1) = *(undefined4 *)(puVar4 + 0x21);
  *(undefined2 *)(lVar5 + 0x6a5) = *(undefined2 *)(puVar4 + 0x25);
  uVar3 = puVar4[0x27]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)(lVar5 + 0x680) = *puVar4;
  uVar1 = *(undefined4 *)(puVar4 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = *(undefined4 *)(puVar4 + 0x2c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)(lVar5 + 0x6a7) = uVar3;
  *(undefined4 *)(lVar5 + 0x6a8) = uVar1;
  *(undefined4 *)(lVar5 + 0x6ac) = uVar2;
  FUN__text__0025b6d0(lVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



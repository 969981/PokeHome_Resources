/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00220B30
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00320b30; name: FUN_.text__00320b30
 */


void FUN__text__00320b30(undefined8 *param_1,undefined1 param_2,uint param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar4 = FUN__text__00304b90(); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar4 = lVar4 + (ulong)param_3 * 0x24; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(&DAT_0093f332 + lVar4) = *param_1;
  uVar1 = param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = param_1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = param_1[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = *(undefined2 *)(param_1 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (&DAT_0093f331)[lVar4] = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(&DAT_0093f33a + lVar4) = uVar1;
  *(undefined2 *)(&DAT_0093f352 + lVar4) = uVar3;
  *(undefined8 *)(&DAT_0093f34a + lVar4) = uVar5;
  *(undefined8 *)(&DAT_0093f342 + lVar4) = uVar2;
  (&DAT_0093f330)[lVar4] = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000D1464
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001d1464; name: FUN_.text__001d1464
 */


void FUN__text__001d1464(long param_1,char *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_18 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*param_2 != '\0') { // [自动静态注释] 条件判断/分支
    local_18 = *(undefined8 *)(param_2 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  lVar1 = *(long *)(param_1 + 8) + 0x110; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar2 = *param_2 != '\0'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = FUN__text__0012cb14(lVar1,param_1 + 0xd0); // [自动静态注释] 调用尚未恢复正式名称的函数
  bVar3 = FUN__text__001cabfc(param_1,bVar2,&local_18,uVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(byte *)(param_1 + 0xfc) = bVar3 & 1;
  uVar4 = FUN__text__0012cb14(lVar1,param_1 + 0x140); // [自动静态注释] 调用尚未恢复正式名称的函数
  bVar3 = FUN__text__001cabfc(param_1,bVar2,&local_18,uVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(byte *)(param_1 + 0x16c) = bVar3 & 1;
  uVar4 = FUN__text__0012cb14(lVar1,param_1 + 0x1b0); // [自动静态注释] 调用尚未恢复正式名称的函数
  bVar3 = FUN__text__001cabfc(param_1,bVar2,&local_18,uVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(byte *)(param_1 + 0x1c4) = bVar3 & 1;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



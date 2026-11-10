/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0058AD64
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0068ad64; name: FUN_.text__0068ad64
 */


long FUN__text__0068ad64(undefined8 param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_50 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_48 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__006ebbe4(&local_50); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_50 = CONCAT44(0x10,(undefined4)local_50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar5 = FUN__text__006ec37c(param_1,&local_50); // [自动静态注释] 调用尚未恢复正式名称的函数
  bVar3 = *(byte *)(param_2 + 0x15); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar4 = *(int *)(param_2 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar1 = 0x40; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(char *)(param_2 + 0x16) != '\0') { // [自动静态注释] 条件判断/分支
    iVar1 = 0x60; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  lVar6 = FUN__text__006ec37c(param_1,&local_50); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar7 = (lVar6 + (long)iVar1 * (long)iVar4) - 1U & -lVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(char *)(param_2 + 0x14) != '\0') { // [自动静态注释] 条件判断/分支
    uVar2 = uVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return uVar7 + ((lVar5 + 0x7fU & -lVar5) << ((ulong)bVar3 & 0x3f)) + uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



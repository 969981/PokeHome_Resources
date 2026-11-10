/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005BB5A0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006bb5a0; name: FUN_.text__006bb5a0
 */


void FUN__text__006bb5a0(long param_1,long param_2,undefined8 param_3,long param_4,long param_5) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lStack_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__0069db40(param_3,param_2,*(undefined8 *)(param_1 + 0xd8)); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__006af484(*(undefined8 *)(param_1 + 0xd8),param_2,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar2 = *(byte *)(param_4 + 10) - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar2 < 3) { // [自动静态注释] 条件判断/分支
    uVar5 = *(undefined4 *)((long)(char)uVar2 * 4 + 0x766464); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar5 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  uVar3 = FUN__text__006d5724(*(undefined8 *)(param_2 + 0xb8),uVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__006d6610(param_3,param_2,uVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
  plVar1 = (long *)(*(long *)(*(long *)(param_2 + 200) + 0x10) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                   (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x10); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  lStack_48 = plVar1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_50 = *plVar1 + (long)*(int *)(param_5 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar4 = FUN__text__006b4514(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar6 = *(long *)(lVar4 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar4 = FUN__text__006b4514(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__006ee1d4(param_3,*(undefined4 *) // [自动静态注释] 调用尚未恢复正式名称的函数
                               (*(long *)(lVar6 + 0x18) + (ulong)*(ushort *)(lVar4 + 0x4a) * 4),0, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                      &local_50,0x230); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  plVar1 = (long *)(*(long *)(*(long *)(param_2 + 200) + 0x10) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                   (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x10); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  lStack_48 = plVar1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_50 = *plVar1 + (long)*(int *)(param_5 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__006ee1d4(param_3,*(undefined4 *)(param_5 + 4),4,&local_50,0x120); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__0069dbb0(param_3,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar3 = FUN__text__006b4514(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__006b0efc(uVar3,param_3,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar3 = FUN__text__006b4514(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__006b0b84(uVar3,param_3,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



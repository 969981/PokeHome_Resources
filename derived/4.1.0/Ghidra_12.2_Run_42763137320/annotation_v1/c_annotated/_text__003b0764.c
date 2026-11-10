/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002B0764
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b0764; name: FUN_.text__003b0764
 */


void FUN__text__003b0764(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(code **)(param_1 + 0x3c0) != (code *)0x0) { // [自动静态注释] 条件判断/分支
    (**(code **)(param_1 + 0x3c0))(param_1 + 0x3e0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  if (*(char *)(param_1 + 0x852) == '\0') { // [自动静态注释] 条件判断/分支
    FUN__text__003a1590(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(undefined1 *)(param_1 + 0x85) = 0;
  FUN__text__003a1648(param_1,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  puVar1 = (undefined8 *)(param_1 + 0x7ac); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar2 = FUN__text__003b7340(*(undefined8 *)(param_1 + 0x800),puVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar3 = FUN__text__003b7414(*(long *)(param_1 + 0x800), // [自动静态注释] 调用尚未恢复正式名称的函数
                              *(undefined4 *)(*(long *)(param_1 + 0x800) + 0x14),
                              (int)(*(float *)(*(long *)(param_1 + 0x748) + 0x1d4) + (float)iVar2)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar4 = (**(code **)(**(long **)(param_1 + 0xb0) + 0x50))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar4 <= uVar3) { // [自动静态注释] 条件判断/分支
    FUN__text__003a14e8(*(undefined8 *)(param_1 + 2000),0); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(param_1 + 0x8ec) = 0;
  *(undefined4 *)(param_1 + 0x8f8) = 0;
  lVar7 = *(long *)(param_1 + 0x800); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 0x8f0) = *puVar1;
  uVar5 = FUN__text__003b7414(lVar7,*(undefined4 *)(lVar7 + 0x14),*(undefined4 *)(lVar7 + 0x10)); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_28 = FUN__text__003b7494(lVar7,uVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
  iVar2 = FUN__text__003b7340(lVar7,&local_28); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar8 = *(undefined8 *)(param_1 + 0x800); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = FUN__text__003b73b4(uVar8,puVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_28 = FUN__text__003b7494(uVar8,uVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
  iVar6 = FUN__text__003b7340(uVar8,&local_28); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003b9248((float)((iVar6 - iVar2) + *(int *)(*(long *)(param_1 + 0x800) + 0x10)), // [自动静态注释] 调用尚未恢复正式名称的函数
                      *(undefined8 *)(param_1 + 0x748),*(undefined4 *)(param_1 + 0x8a4));
  *(undefined1 *)(param_1 + 0xa14) = 1;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



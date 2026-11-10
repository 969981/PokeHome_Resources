/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003DD134
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004dd134; name: FUN_.text__004dd134
 */


undefined8 FUN__text__004dd134(long param_1,long param_2,ulong param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int local_30 [2]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar2 = *(uint *)(param_1 + 0x74); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar5 = 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((param_3 & 1) == 0) { // [自动静态注释] 条件判断/分支
    bVar5 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  uVar1 = *(int *)(param_1 + 0x68) + *(int *)(param_1 + 0x70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar3 = *(int *)(param_1 + 0x68) - uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(uint *)(param_1 + 0x6c) = uVar2 + *(int *)(param_1 + 0x70);
  *(uint *)(param_1 + 0x70) = uVar1;
  *(ulong *)(param_1 + 0x60) = param_2 + (ulong)uVar2;
  bVar5 = *(byte *)(param_1 + 0x82) & 0xf7 | bVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(int *)(param_1 + 0x68) = iVar3;
  *(byte *)(param_1 + 0x82) = bVar5;
  uVar2 = *(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(short *)(param_1 + 0x80) != 1) { // [自动静态注释] 条件判断/分支
    uVar2 = *(uint *)(param_1 + 0x7c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (uVar1 < uVar2) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(param_1 + 0x74) = 0;
    return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  *(uint *)(param_1 + 0x68) = (iVar3 - uVar1) + uVar2;
  if (*(short *)(param_1 + 0x80) == 1) { // [自动静态注释] 条件判断/分支
    *(byte *)(param_1 + 0x82) = bVar5 | 1;
    return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  iVar3 = *(int *)(param_1 + 0x78); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar4 = (**(code **)(**(long **)(param_1 + 0x58) + 0x80)) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    (*(long **)(param_1 + 0x58),iVar3,0,local_30); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (iVar4 != 1) { // [自动静态注释] 条件判断/分支
    return 2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  *(int *)(param_1 + 0x70) = local_30[0];
  *(int *)(param_1 + 0x74) = iVar3 - local_30[0];
  iVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(ushort *)(param_1 + 0x80) != 0) { // [自动静态注释] 条件判断/分支
    iVar3 = *(ushort *)(param_1 + 0x80) - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(byte *)(param_1 + 0x82) = *(byte *)(param_1 + 0x82) | 0x40;
  *(short *)(param_1 + 0x80) = (short)iVar3;
  if (iVar3 == 1) { // [自动静态注释] 条件判断/分支
    (**(code **)(**(long **)(param_1 + 0x58) + 0x28))(*(long **)(param_1 + 0x58),local_30); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    local_28 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (**(code **)(**(long **)(param_1 + 0x58) + 0x30))(*(long **)(param_1 + 0x58),local_30); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003277C8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004277c8; name: FUN_.text__004277c8
 */


undefined8 FUN__text__004277c8(long param_1,undefined8 param_2,uint param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int local_3c [2]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int local_34; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(uint *)(param_1 + 0x2c) <= (uint)param_2) { // [自动静态注释] 条件判断/分支
    return 2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  iVar3 = (**(code **)(**(long **)(param_1 + 0xb8) + 0x50)) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    (*(long **)(param_1 + 0xb8),param_2,local_3c); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (iVar3 != 1) { // [自动静态注释] 条件判断/分支
    return 2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  puVar1 = (undefined8 *)(param_1 + 0x40); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = FUN__text__00426c90(puVar1,local_34 + *(int *)(param_1 + 0xd0),param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((int)uVar4 != 3) { // [自动静态注释] 条件判断/分支
    if ((int)uVar4 != 1) { // [自动静态注释] 条件判断/分支
      return uVar4; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    if ((*(byte *)(param_1 + 0x82) & 0x38) == 0x10) { // [自动静态注释] 条件判断/分支
      *(byte *)(param_1 + 0x82) = *(byte *)(param_1 + 0x82) & 0xdf | 0x18;
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      (**(code **)(*(long *)*puVar1 + 0x90))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
  } // [自动静态注释] 作用域/控制流边界
  puVar2 = (uint *)(*(long *)(param_1 + 0x18) + 0x313); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(byte *)(param_1 + 0x20) = (byte)(*puVar2 >> 0x14) & 2 | *(byte *)(param_1 + 0x20) & 0xfd;
  *(uint *)(*(long *)(param_1 + 0x18) + 0x30c) = (uint)param_2 - local_3c[0];
  *puVar2 = *puVar2 & 0xfe3fffff;
  *(int *)(param_1 + 0x28) = local_3c[0];
  *(short *)(param_1 + 0x38) = (short)param_3;
  uVar5 = (uint)*(byte *)(param_1 + 0xdc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((*(byte *)(param_1 + 0xdc) >> 4 & 1) == 0) { // [自动静态注释] 条件判断/分支
    iVar3 = *(int *)(param_1 + 0x2c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((param_3 & 0xffff) != 1) { // [自动静态注释] 条件判断/分支
      iVar3 = *(int *)(param_1 + 0x34) + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    iVar3 = (**(code **)(**(long **)(param_1 + 0xb8) + 0x58)) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                      (*(long **)(param_1 + 0xb8),puVar1,local_3c,iVar3 - local_3c[0],param_3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (iVar3 != 1) { // [自动静态注释] 条件判断/分支
      return 2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    uVar5 = (uint)*(byte *)(param_1 + 0xdc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((*(ushort *)(param_1 + 0xd4) & 0x11) == 1) { // [自动静态注释] 条件判断/分支
      uVar5 = uVar5 | 0x80; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(char *)(param_1 + 0xdc) = (char)uVar5;
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  if ((uVar5 >> 5 & 1) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__004de4c0(param_1 + 0x90,param_1 + 0x24, // [自动静态注释] 调用尚未恢复正式名称的函数
                        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x2b0));
  } // [自动静态注释] 作用域/控制流边界
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



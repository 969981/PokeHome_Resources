/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005B7D20
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b7d20; name: FUN_.text__006b7d20
 */


void FUN__text__006b7d20(long param_1,long param_2,undefined8 param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar8 = &local_50; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__006c1d00(param_2,param_3,*(undefined8 *)(param_1 + 0x38), // [自动静态注释] 调用尚未恢复正式名称的函数
                      *(undefined4 *)(param_1 + 0x40));
  uVar4 = *(ushort *)(param_1 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar6 = (undefined8 *) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
           FUN__text__006d65d8(*(undefined8 *)(param_2 + 0xb8),uVar4 & 3,uVar4 >> 2 & 3, // [自动静态注释] 调用尚未恢复正式名称的函数
                               uVar4 >> 4 & 7,uVar4 >> 7 & 1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar4 = *(ushort *)(param_1 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_48 = *puVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar6 = (undefined8 *) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
           FUN__text__006d65d8(*(undefined8 *)(param_2 + 0xb8),uVar4 & 3,uVar4 >> 2 & 3, // [自动静态注释] 调用尚未恢复正式名称的函数
                               uVar4 >> 4 & 7,uVar4 >> 7 & 1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  local_50 = *puVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar1 = *(int *)(param_1 + 0x40); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar9 = *(long *)(*(long *)(param_1 + 0x38) + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar3 = *(byte *)(*(long *)(param_1 + 8) + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar5 = FUN__text__006b1998(); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar2 = *(undefined4 *)(lVar9 + (long)(iVar5 * iVar1) * 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((bVar3 & 1) == 0) { // [自动静态注释] 条件判断/分支
    FUN__text__006ee15c(param_3,uVar2,4,*(long *)(param_1 + 0x28) + 8,&local_50); // [自动静态注释] 调用尚未恢复正式名称的函数
    iVar1 = *(int *)(param_1 + 0x40); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar9 = *(long *)(*(long *)(param_1 + 0x38) + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar5 = FUN__text__006b1998(); // [自动静态注释] 调用尚未恢复正式名称的函数
    puVar8 = &local_48; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = *(undefined4 *)(lVar9 + (long)(iVar5 * iVar1) * 4 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar9 = *(long *)(param_1 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__006ee15c(param_3,uVar2,4,*(long *)(param_1 + 0x18) + 8,&local_48); // [自动静态注释] 调用尚未恢复正式名称的函数
    iVar1 = *(int *)(param_1 + 0x40); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar9 = *(long *)(*(long *)(param_1 + 0x38) + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar5 = FUN__text__006b1998(); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar2 = *(undefined4 *)(lVar9 + (long)(iVar5 * iVar1) * 4 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar9 = *(long *)(param_1 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__006ee15c(param_3,uVar2,4,lVar9 + 8,puVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar7 = FUN__text__006d5724(*(undefined8 *)(param_2 + 0xb8),1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__006d6610(param_3,param_2,uVar7); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



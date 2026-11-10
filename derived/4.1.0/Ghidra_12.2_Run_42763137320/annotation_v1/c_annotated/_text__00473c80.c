/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00373C80
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00473c80; name: FUN_.text__00473c80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__00473c80(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar3 = FUN__text__0047822c(param_1 + 0x18); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((int)uVar3 != 1) { // [自动静态注释] 条件判断/分支
    return uVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00478584(param_1 + 0x18); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((*(ushort *)(param_1 + 0x220) >> 6 & 1) != 0) goto LAB__text__00473d44; // [自动静态注释] 条件判断/分支
  uVar6 = *(uint *)(param_1 + 0x378); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = *(uint *)(param_1 + 0x37c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = uVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar6 < uVar2) { // [自动静态注释] 条件判断/分支
LAB__text__00473cf0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar6 = uVar5 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(uint *)(param_1 + 0x378) = uVar6;
    if (*(long *)(param_1 + 0x370) != 0) { // [自动静态注释] 条件判断/分支
      *(undefined8 **)(*(long *)(param_1 + 0x370) + (ulong)uVar5 * 8) = &DAT_00aea7c0;
      puVar7 = (undefined8 *)(ulong)*(uint *)(param_1 + 0x378); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      goto LAB__text__00473d10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    puVar7 = (undefined8 *)(ulong)uVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    iVar1 = uVar2 + (uVar2 >> 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar2 == 0) { // [自动静态注释] 条件判断/分支
      iVar1 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    uVar4 = FUN__text__0046b710(param_1 + 0x368,iVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar5 = *(uint *)(param_1 + 0x378); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar7 = (undefined8 *)(ulong)uVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (((uVar4 & 1) != 0) && (uVar6 < *(uint *)(param_1 + 0x37c))) goto LAB__text__00473cf0; // [自动静态注释] 条件判断/分支
LAB__text__00473d10: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar6 = (uint)puVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (uVar6 != 0) { // [自动静态注释] 条件判断/分支
    puVar8 = *(undefined8 **)(param_1 + 0x370); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      puVar9 = puVar8 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__0046348c(puVar7,*puVar8,param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
      puVar7 = (undefined8 *)(*(long *)(param_1 + 0x370) + (ulong)*(uint *)(param_1 + 0x378) * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar8 = puVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (puVar9 != puVar7); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
LAB__text__00473d44: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (*(int *)(param_1 + 0x280) == 0) { // [自动静态注释] 条件判断/分支
    return 2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar3 = FUN__text__0048de00(*_DAT_008a45d8,*(int *)(param_1 + 0x280),param_1, // [自动静态注释] 调用尚未恢复正式名称的函数
                              *(undefined8 *)(param_1 + 0x20),param_1 + 8);
  if ((int)uVar3 == 1) { // [自动静态注释] 条件判断/分支
    FUN__text__004c5aa0(*(undefined8 *)(param_1 + 0x2a0),param_1 + 0x338); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar3 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return uVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



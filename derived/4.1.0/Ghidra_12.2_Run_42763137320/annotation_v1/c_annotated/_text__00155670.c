/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00055670
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00155670; name: FUN_.text__00155670
 */


ulong FUN__text__00155670(undefined8 *param_1,uint param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int *piVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint *puVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  piVar3 = (int *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (piVar3 == (int *)0x0 || *(uint *)(param_1 + 1) == 0xffffffff) goto LAB__text__0015587c; // [自动静态注释] 条件判断/分支
  puVar5 = (ushort *)((long)piVar3 - (long)*piVar3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = *puVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((uVar2 < 5) || ((ulong)puVar5[2] == 0)) goto LAB__text__0015587c; // [自动静态注释] 条件判断/分支
  puVar7 = (uint *)((long)piVar3 + (ulong)puVar5[2]); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar7 = (uint *)((long)puVar7 + (ulong)*(uint *)(param_1 + 1) * 4 + (ulong)*puVar7 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  piVar1 = (int *)((long)puVar7 + (ulong)*puVar7); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(ushort *)((long)piVar1 - (long)*piVar1) < 9) { // [自动静态注释] 条件判断/分支
    uVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (6 < uVar2) goto LAB__text__00155708; // [自动静态注释] 条件判断/分支
LAB__text__00155720: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar8 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar8 == 0) { // [自动静态注释] 条件判断/分支
      uVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar6 = *(uint *)((long)piVar1 + uVar8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (uVar6 == 0xffffffff) goto LAB__text__0015587c; // [自动静态注释] 条件判断/分支
    } // [自动静态注释] 作用域/控制流边界
    if (uVar2 < 7) goto LAB__text__00155720; // [自动静态注释] 条件判断/分支
LAB__text__00155708: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if ((ulong)puVar5[3] == 0) goto LAB__text__00155720; // [自动静态注释] 条件判断/分支
    puVar7 = (uint *)((long)piVar3 + (ulong)puVar5[3]); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar4 = (long)puVar7 + (ulong)*puVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  puVar7 = (uint *)(lVar4 + (ulong)uVar6 * 4 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  piVar3 = (int *)((long)puVar7 + (ulong)*puVar7); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (((4 < *(ushort *)((long)piVar3 - (long)*piVar3)) && // [自动静态注释] 条件判断/分支
      (uVar8 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar8 != 0)) && // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
     (uVar6 = *(byte *)((long)piVar3 + uVar8) - 1, uVar6 < 4)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    /* WARNING: Could not emulate address calculation at 0x00155768 */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (*(code *)(&UNK__text__00155774 + (ulong)*(byte *)((ulong)uVar6 + 0x724d68) * 4))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    return uVar8; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
LAB__text__0015587c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return (ulong)param_2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



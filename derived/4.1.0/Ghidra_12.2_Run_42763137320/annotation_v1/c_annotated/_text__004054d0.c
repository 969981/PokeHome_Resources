/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003054D0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004054d0; name: FUN_.text__004054d0
 */


void FUN__text__004054d0(int param_1,long param_2,undefined8 *param_3,undefined8 *param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        uint param_5) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint *puVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(uint *)((long)param_4 + 0xc) = param_5;
  param_4[8] = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar11 = param_4 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar7 = (ulong)param_5 * 8 + (long)param_1 * 0x638; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(uint *)(param_4 + 5) = *(uint *)(param_4 + 5) & 0xfffffffb;
  puVar10 = (uint *)(&DAT_00ae89c0 + lVar7 + 0xa8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(uint *)((long)param_4 + 0x24) = *puVar10;
  uVar2 = *(ushort *)(&DAT_00ae89c0 + lVar7 + 0xac); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_4 = 0;
  *(undefined4 *)(param_4 + 4) = 0;
  *(uint *)(param_4 + 1) = (uint)uVar2;
  param_4[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = *(ushort *)(&DAT_00ae89c0 + lVar7 + 0xac); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = (uint)uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar9 = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (1 < uVar2) { // [自动静态注释] 条件判断/分支
    uVar3 = (ulong)*puVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar8 = *(ulong *)(&DAT_00ae8a28 + (long)param_1 * 0x638); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar6 = (long *)((long)plVar11 + uVar3 * (uint)uVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar9 = (undefined8 *)((long)plVar11 + uVar3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *param_3 = puVar9;
    plVar1 = (long *)((long)param_4 + uVar8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (plVar6 <= plVar1 || uVar8 >> 1 <= uVar3) { // [自动静态注释] 条件判断/分支
      plVar1 = plVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    if (plVar1 <= (long *)((long)puVar9 + uVar3)) { // [自动静态注释] 条件判断/分支
      *puVar9 = 0;
      *(undefined4 *)(param_4 + 2) = 2;
      if (*(uint *)(param_4 + 1) < 3) goto LAB__text__004055fc; // [自动静态注释] 条件判断/分支
      goto LAB__text__004055bc; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    uVar5 = 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      plVar6 = (long *)((long)plVar11 + uVar3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *plVar6 = (long)plVar11 + uVar3 * 2;
      uVar5 = uVar5 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar11 = plVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while ((long *)((long)plVar6 + uVar3 * 2) < plVar1); // [自动静态注释] 循环/迭代
    puVar9 = (undefined8 *)((long)plVar6 + uVar3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *puVar9 = 0;
  *(uint *)(param_4 + 2) = uVar5;
  if (*(uint *)(param_4 + 1) <= uVar5) { // [自动静态注释] 条件判断/分支
LAB__text__004055fc: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar7 = param_2 + (ulong)param_5 * 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar9 = (undefined8 *)(lVar7 + 0x2d20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar7 = *(long *)(lVar7 + 0x2d20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar7 != 0) { // [自动静态注释] 条件判断/分支
      *(undefined8 **)(lVar7 + 0x50) = param_4;
      uVar4 = *puVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    param_4[9] = uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *puVar9 = param_4;
    *(long *)(param_2 + 0xce8) = *(long *)(param_2 + 0xce8) + 1;
    *(uint *)((long)param_4 + 0x14) = *(uint *)(param_4 + 1);
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
LAB__text__004055bc: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_3[1] != 0) { // [自动静态注释] 条件判断/分支
    *(undefined8 **)(param_3[1] + 0x50) = param_4;
    uVar4 = param_3[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  param_4[9] = uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_3[1] = param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)((long)param_4 + 0x14) = *(undefined4 *)(param_4 + 2);
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



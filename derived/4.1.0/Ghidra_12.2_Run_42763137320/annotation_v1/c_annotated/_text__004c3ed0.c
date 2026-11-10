/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003C3ED0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c3ed0; name: FUN_.text__004c3ed0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__004c3ed0(long param_1,long *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint5 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint5 *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint5 *puVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint5 *puVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint5 *puVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint5 *puVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar1 = _DAT_008a45f0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar3 = *(uint5 **)(param_1 + 0x40); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar7 = (uint5 *)*param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = (ulong)*(uint *)(param_1 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar8 = puVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar5 = puVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(uint *)(param_1 + 0x48) == 0) { // [自动静态注释] 条件判断/分支
    uVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__004c40c0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    puVar6 = puVar7 + *(uint *)(param_2 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar7 = puVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (puVar8 != puVar6) goto LAB__text__004c40e0; // [自动静态注释] 条件判断/分支
LAB__text__004c4154: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (puVar5 == puVar3 + uVar4) goto LAB__text__004c4194; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    puVar6 = (uint5 *)(*param_2 + (ulong)*(uint *)(param_2 + 1) * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (puVar7 != puVar6) { // [自动静态注释] 条件判断/分支
      puVar9 = puVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        puVar7 = puVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if ((ulong)*puVar8 < (ulong)*puVar9) { // [自动静态注释] 条件判断/分支
          do { // [自动静态注释] 循环/迭代
            puVar8 = puVar7 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            iVar2 = FUN__text__004345d0(*puVar1,*(undefined8 *)puVar7,param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
            if (iVar2 != 1) { // [自动静态注释] 条件判断/分支
              return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
            } // [自动静态注释] 作用域/控制流边界
            puVar6 = (uint5 *)(*param_2 + (ulong)*(uint *)(param_2 + 1) * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            if (puVar8 == puVar6) { // [自动静态注释] 条件判断/分支
              puVar3 = *(uint5 **)(param_1 + 0x40); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              uVar4 = (ulong)*(uint *)(param_1 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              goto LAB__text__004c4024; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            } // [自动静态注释] 作用域/控制流边界
            puVar7 = puVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } while ((ulong)*puVar8 < (ulong)*puVar9); // [自动静态注释] 循环/迭代
        } // [自动静态注释] 作用域/控制流边界
        puVar3 = *(uint5 **)(param_1 + 0x40); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar4 = (ulong)*(uint *)(param_1 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (puVar8 == puVar6) { // [自动静态注释] 条件判断/分支
LAB__text__004c4024: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          puVar5 = puVar3 + uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar6 = puVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar7 = puVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (puVar9 == puVar5) goto LAB__text__004c3f20; // [自动静态注释] 条件判断/分支
LAB__text__004c4030: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          puVar5 = puVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar7 = puVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if ((ulong)*puVar5 < (ulong)*puVar8) { // [自动静态注释] 条件判断/分支
            do { // [自动静态注释] 循环/迭代
              puVar5 = puVar7 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              FUN__text__00434930(*puVar1,*(undefined8 *)puVar7,param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
              puVar3 = *(uint5 **)(param_1 + 0x40); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              uVar4 = (ulong)*(uint *)(param_1 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              if (puVar5 == puVar3 + uVar4) break; // [自动静态注释] 条件判断/分支
              puVar7 = puVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            } while ((ulong)*puVar5 < (ulong)*puVar8); // [自动静态注释] 循环/迭代
          } // [自动静态注释] 作用域/控制流边界
        } // [自动静态注释] 作用域/控制流边界
        else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          puVar7 = puVar3 + uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          do { // [自动静态注释] 循环/迭代
            if (puVar9 == puVar7) { // [自动静态注释] 条件判断/分支
              puVar5 = puVar3 + uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              puVar6 = puVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              if (puVar7 != puVar5) goto LAB__text__004c4030; // [自动静态注释] 条件判断/分支
              goto LAB__text__004c3f20; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            } // [自动静态注释] 作用域/控制流边界
            if ((ulong)*puVar8 != (ulong)*puVar9) goto LAB__text__004c4024; // [自动静态注释] 条件判断/分支
            puVar8 = puVar8 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            puVar9 = puVar9 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } while (puVar8 != puVar6); // [自动静态注释] 循环/迭代
          puVar5 = puVar3 + uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar8 = puVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar7 = puVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (puVar9 != puVar5) goto LAB__text__004c4030; // [自动静态注释] 条件判断/分支
LAB__text__004c3f20: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          puVar8 = puVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        puVar7 = (uint5 *)*param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar6 = puVar7 + *(uint *)(param_2 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar9 = puVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (puVar5 != puVar3 + uVar4 && puVar8 != puVar6); // [自动静态注释] 循环/迭代
      goto LAB__text__004c40c0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    if (puVar7 == (uint5 *)(*param_2 + (ulong)*(uint *)(param_2 + 1) * 8)) goto LAB__text__004c4154; // [自动静态注释] 条件判断/分支
LAB__text__004c40e0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    do { // [自动静态注释] 循环/迭代
      iVar2 = FUN__text__004345d0(DAT_00ae9a70,*(undefined8 *)puVar7,param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (iVar2 != 1) { // [自动静态注释] 条件判断/分支
        return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      puVar7 = puVar7 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (puVar7 != (uint5 *)(*param_2 + (ulong)*(uint *)(param_2 + 1) * 8)); // [自动静态注释] 循环/迭代
    puVar3 = *(uint5 **)(param_1 + 0x40); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (puVar5 == puVar3 + *(uint *)(param_1 + 0x48)) goto LAB__text__004c4194; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  do { // [自动静态注释] 循环/迭代
    puVar8 = puVar5 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__00434930(DAT_00ae9a70,*(undefined8 *)puVar5,param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    puVar3 = *(uint5 **)(param_1 + 0x40); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar5 = puVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while (puVar8 != puVar3 + *(uint *)(param_1 + 0x48)); // [自动静态注释] 循环/迭代
LAB__text__004c4194: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (puVar3 != (uint5 *)0x0) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(param_1 + 0x48) = 0;
    FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
  } // [自动静态注释] 作用域/控制流边界
  *(long *)(param_1 + 0x40) = *param_2;
  *(int *)(param_1 + 0x48) = (int)param_2[1];
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)((long)param_2 + 0xc);
  *param_2 = 0;
  param_2[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



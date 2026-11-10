/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000554A0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001554a0; name: FUN_.text__001554a0
 */


void FUN__text__001554a0(undefined8 param_1,undefined8 *param_2,long *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort *puVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint *puVar15; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar16; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar17; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar19; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar20; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  piVar8 = (int *)*param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (piVar8 == (int *)0x0 || *(uint *)(param_2 + 1) == 0xffffffff) goto LAB__text__00155668; // [自动静态注释] 条件判断/分支
  puVar12 = (ushort *)((long)piVar8 - (long)*piVar8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar6 = *puVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((uVar6 < 5) || (uVar10 = (ulong)puVar12[2], uVar10 == 0)) goto LAB__text__00155668; // [自动静态注释] 条件判断/分支
  puVar1 = (uint *)((long)piVar8 + uVar10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar11 = (ulong)*(uint *)(param_2 + 1) * 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar15 = (uint *)((long)puVar1 + (ulong)*puVar1 + lVar11 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  piVar2 = (int *)((long)puVar15 + (ulong)*puVar15); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0xb) { // [自动静态注释] 条件判断/分支
    uVar16 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (8 < uVar6) goto LAB__text__00155540; // [自动静态注释] 条件判断/分支
LAB__text__00155558: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar17 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar16 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar16 == 0) { // [自动静态注释] 条件判断/分支
      uVar16 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar5 = *(uint *)((long)piVar2 + uVar16); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar16 = (ulong)uVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (uVar5 == 0xffffffff) goto LAB__text__00155668; // [自动静态注释] 条件判断/分支
    } // [自动静态注释] 作用域/控制流边界
    if (uVar6 < 9) goto LAB__text__00155558; // [自动静态注释] 条件判断/分支
LAB__text__00155540: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if ((ulong)puVar12[4] == 0) goto LAB__text__00155558; // [自动静态注释] 条件判断/分支
    puVar15 = (uint *)((long)piVar8 + (ulong)puVar12[4]); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar17 = (long)puVar15 + (ulong)*puVar15; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  puVar15 = (uint *)(lVar17 + uVar16 * 4 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar18 = (ulong)*puVar15; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  piVar2 = (int *)((long)puVar15 + uVar18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar19 = (ulong)*(ushort *)((long)piVar2 + (6 - (long)*piVar2)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar15 = (uint *)((long)piVar2 + uVar19); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar9 = (ulong)*puVar15; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = *(uint *)((long)puVar15 + uVar9); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar5 != 0) { // [自动静态注释] 条件判断/分支
    uVar14 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar13 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      lVar3 = lVar17 + uVar19 + uVar18 + uVar16 * 4 + uVar9 + lVar13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar20 = (ulong)*(uint *)(lVar3 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar4 = lVar3 + (uVar20 - (long)*(int *)(lVar3 + uVar20 + 8)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((*(ushort *)(lVar4 + 8) < 5) || (uVar7 = (ulong)*(ushort *)(lVar4 + 0xc), uVar7 == 0)) { // [自动静态注释] 条件判断/分支
        if (*param_3 == 0) goto LAB__text__0015560c; // [自动静态注释] 条件判断/分支
      } // [自动静态注释] 作用域/控制流边界
      else if (*(long *)(lVar3 + uVar20 + uVar7 + 8) == *param_3) { // [自动静态注释] 条件判断/分支
LAB__text__0015560c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        puVar15 = (uint *)((long)puVar1 + lVar11 + (ulong)*puVar1 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar16 = (ulong)*puVar15; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        piVar2 = (int *)((long)puVar15 + uVar16); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar9 = (ulong)*(ushort *)((long)piVar2 + (6 - (long)*piVar2)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar15 = (uint *)((long)piVar2 + uVar9); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar18 = (ulong)*puVar15; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (uVar14 < *(uint *)((long)puVar15 + uVar18)) { // [自动静态注释] 条件判断/分支
          FUN__text__0015533c(param_1,piVar8, // [自动静态注释] 调用尚未恢复正式名称的函数
                              *(undefined4 *)
                               ((long)piVar8 + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                               *puVar1 + uVar16 + uVar9 + uVar18 + lVar13 + lVar11 + uVar10 + 8));
          return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
        } // [自动静态注释] 作用域/控制流边界
        break; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      lVar13 = lVar13 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar14 = uVar14 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while ((ulong)uVar5 * 4 != lVar13); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
LAB__text__00155668: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__00155348(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



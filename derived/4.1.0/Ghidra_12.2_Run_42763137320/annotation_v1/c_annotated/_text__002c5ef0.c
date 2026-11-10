/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001C5EF0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002c5ef0; name: FUN_.text__002c5ef0
 */


void FUN__text__002c5ef0(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint *puVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 *puVar15; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar16; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar17; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  piVar17 = *(int **)(param_1 + 0x120); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (((piVar17 != (int *)0x0) && (4 < *(ushort *)((long)piVar17 - (long)*piVar17))) && // [自动静态注释] 条件判断/分支
     (uVar16 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[2], uVar16 != 0)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar18 = (ulong)*(uint *)((long)piVar17 + uVar16); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar1 = (uint *)((long)((long)piVar17 + uVar16) + uVar18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar9 = (ulong)*puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*puVar1 != 0) { // [自动静态注释] 条件判断/分支
      uVar10 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar13 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar14 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar15 = (undefined2 *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar6 = (uint *)((long)piVar17 + uVar18 + uVar16 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        while (uVar12 = (uint)uVar13, (uVar14 >> 4 & 0xfff) < 0x753) { // [自动静态注释] 循环/迭代
          uVar18 = (ulong)puVar6[-1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar16 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          lVar11 = (long)*(int *)((long)puVar6 + (uVar18 - 4)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          lVar8 = uVar18 - lVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (4 < *(ushort *)((long)puVar6 + lVar8 + -4)) { // [自动静态注释] 条件判断/分支
            uVar7 = (ulong)*(ushort *)((long)puVar6 + lVar8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar16 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            if ((uVar7 != 0) && // [自动静态注释] 条件判断/分支
               (uVar3 = *(uint *)((long)puVar6 + uVar18 + uVar7 + -4), uVar16 = (ulong)uVar3, // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
               0x389 < uVar3)) goto LAB__text__002c6184; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          } // [自动静态注释] 作用域/控制流边界
          puVar2 = (undefined2 *)(param_1 + 0x128 + uVar16 * 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (uVar10 == uVar16) { // [自动静态注释] 条件判断/分支
            if (9 < (uVar12 & 0xffff)) break; // [自动静态注释] 条件判断/分支
            lVar11 = -lVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar4 = *(ushort *)((long)puVar6 + uVar18 + lVar11 + -4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
          else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            if (puVar15 != (undefined2 *)0x0) { // [自动静态注释] 条件判断/分支
              *(ulong *)(puVar15 + 1) = *(ulong *)(puVar15 + 1) & 0xfffffffffffffff0 | uVar13 & 0xf;
            } // [自动静态注释] 作用域/控制流边界
            *puVar2 = (short)uVar14;
            uVar12 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar18 = (ulong)puVar6[-1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            lVar11 = -(long)*(int *)((long)puVar6 + (uVar18 - 4)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar4 = *(ushort *)((long)puVar6 + uVar18 + lVar11 + -4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            puVar15 = puVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar10 = uVar16; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
          if (((6 < uVar4) && // [自动静态注释] 条件判断/分支
              (uVar16 = (ulong)*(ushort *)((long)puVar6 + uVar18 + lVar11 + 2), uVar16 != 0)) && // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
             (uVar3 = *(int *)((long)puVar6 + uVar18 + uVar16 + -4) - 1, uVar3 < 10)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    /* WARNING: Could not emulate address calculation at 0x002c6084 */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(&UNK__text__002c6090 + (ulong)*(byte *)((ulong)uVar3 + 0x733548) * 4))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
          } // [自动静态注释] 作用域/控制流边界
          uVar9 = (ulong)*puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar13 = (ulong)(uVar12 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar14 = uVar14 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar5 = puVar6 == puVar1 + uVar9 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar6 = puVar6 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (bVar5) goto LAB__text__002c6184; // [自动静态注释] 条件判断/分支
        } // [自动静态注释] 作用域/控制流边界
        uVar14 = uVar14 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar5 = puVar6 != puVar1 + uVar9 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar6 = puVar6 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (bVar5); // [自动静态注释] 循环/迭代
LAB__text__002c6184: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if (puVar15 != (undefined2 *)0x0) { // [自动静态注释] 条件判断/分支
        *(ulong *)(puVar15 + 1) = *(ulong *)(puVar15 + 1) & 0xfffffffffffffff0 | uVar13 & 0xf;
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



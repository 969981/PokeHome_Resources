/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00446260
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00546260; name: FUN_.text__00546260
 */


void FUN__text__00546260(undefined8 param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double *pdVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double *pdVar15; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar16; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar17; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar19; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar20; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar21; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar22; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar23; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar24; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar25; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar26; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double local_88 [17]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar7 = *(uint *)(param_2 + 0x44); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar12 = (ulong)uVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (0 < (int)uVar7) { // [自动静态注释] 条件判断/分支
    pdVar11 = (double *)(param_2 + 0xf0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    pdVar15 = local_88; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar17 = uVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      uVar17 = uVar17 - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      dVar21 = (pdVar11[-1] - pdVar11[-4]) * 0.5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      dVar22 = (pdVar11[-2] - pdVar11[-5]) * 0.5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      dVar24 = (*pdVar11 - pdVar11[-3]) * 0.5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      dVar21 = dVar22 * dVar22 + dVar21 * dVar21 + dVar24 * dVar24; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *pdVar15 = dVar21 * 4.188790204786391 * SQRT(dVar21);
      pdVar11 = pdVar11 + 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      pdVar15 = pdVar15 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (uVar17 != 0); // [自动静态注释] 循环/迭代
    if (1 < (int)uVar7) { // [自动静态注释] 条件判断/分支
      uVar17 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      dVar21 = -3.4028234663852886e+38; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      iVar13 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar16 = param_2 + 0x130; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      iVar10 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar19 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        uVar3 = uVar19 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (uVar3 < uVar12) { // [自动静态注释] 条件判断/分支
          lVar4 = param_2 + uVar19 * 0x40; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar9 = uVar17; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          lVar20 = lVar16; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          dVar22 = dVar21; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          iVar14 = iVar13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          do { // [自动静态注释] 循环/迭代
            puVar1 = (undefined8 *)(lVar20 + -0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            dVar24 = (double)NEON_fminnm(*(undefined8 *)(lVar4 + 0xd0), // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                                         *(undefined8 *)(lVar20 + -0x20));
            puVar2 = (undefined8 *)(lVar20 + -0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            lVar20 = lVar20 + 0x40; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            dVar21 = (double)NEON_fminnm(*(undefined8 *)(lVar4 + 200),*puVar1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            dVar26 = (double)NEON_fminnm(*(undefined8 *)(lVar4 + 0xd8),*puVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            dVar21 = (*(double *)(lVar4 + 0xe0) - dVar21) * 0.5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            dVar24 = (*(double *)(lVar4 + 0xe8) - dVar24) * 0.5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            dVar26 = (*(double *)(lVar4 + 0xf0) - dVar26) * 0.5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            dVar21 = dVar21 * dVar21 + dVar24 * dVar24 + dVar26 * dVar26; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            dVar21 = dVar21 * 4.188790204786391 * SQRT(dVar21) - // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                     (local_88[uVar19] + local_88[uVar9]); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            iVar13 = (int)uVar19; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            iVar8 = (int)uVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            if (dVar21 <= dVar22) { // [自动静态注释] 条件判断/分支
              iVar13 = iVar14; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              iVar8 = iVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            } // [自动静态注释] 作用域/控制流边界
            iVar10 = iVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar9 = uVar9 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            dVar22 = dVar21; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            iVar14 = iVar13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } while (uVar12 != uVar9); // [自动静态注释] 循环/迭代
        } // [自动静态注释] 作用域/控制流边界
        uVar17 = uVar17 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar16 = lVar16 + 0x40; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar19 = uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (uVar3 != uVar7 - 1); // [自动静态注释] 循环/迭代
      goto LAB__text__005463ec; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  iVar13 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar10 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__005463ec: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined4 *)(param_2 + (long)iVar13 * 4) = 0;
  lVar16 = param_2 + (long)iVar13 * 0x40; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(int *)(param_2 + 0x4c) == 0) { // [自动静态注释] 条件判断/分支
    uVar5 = *(undefined8 *)(lVar16 + 0xf0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar18 = *(undefined8 *)(lVar16 + 0xe0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_2 + 0x78) = *(undefined8 *)(lVar16 + 0xe8);
    *(undefined8 *)(param_2 + 0x80) = uVar5;
    uVar5 = *(undefined8 *)(lVar16 + 0xd0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar21 = *(double *)(param_2 + 0x78); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar24 = *(double *)(param_2 + 0x80); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(lVar16 + 200);
    *(undefined8 *)(param_2 + 0x60) = uVar5;
    *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(lVar16 + 0xd8);
    *(undefined8 *)(param_2 + 0x70) = uVar18;
    dVar26 = *(double *)(param_2 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar23 = *(double *)(param_2 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar25 = *(double *)(param_2 + 0x68); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar22 = *(double *)(param_2 + 0x70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    dVar23 = (double)NEON_fminnm(*(undefined8 *)(lVar16 + 0xd0),*(undefined8 *)(param_2 + 0x60)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar26 = (double)NEON_fminnm(*(undefined8 *)(lVar16 + 200),*(undefined8 *)(param_2 + 0x58)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar25 = (double)NEON_fminnm(*(undefined8 *)(lVar16 + 0xd8),*(undefined8 *)(param_2 + 0x68)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar22 = *(double *)(lVar16 + 0xe0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(double *)(lVar16 + 0xe0) <= *(double *)(param_2 + 0x70)) { // [自动静态注释] 条件判断/分支
      dVar22 = *(double *)(param_2 + 0x70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    dVar21 = *(double *)(lVar16 + 0xe8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(double *)(lVar16 + 0xe8) <= *(double *)(param_2 + 0x78)) { // [自动静态注释] 条件判断/分支
      dVar21 = *(double *)(param_2 + 0x78); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    dVar24 = *(double *)(lVar16 + 0xf0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(double *)(lVar16 + 0xf0) <= *(double *)(param_2 + 0x80)) { // [自动静态注释] 条件判断/分支
      dVar24 = *(double *)(param_2 + 0x80); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *(double *)(param_2 + 0x58) = dVar26;
    *(double *)(param_2 + 0x60) = dVar23;
    *(double *)(param_2 + 0x68) = dVar25;
    *(double *)(param_2 + 0x70) = dVar22;
    *(double *)(param_2 + 0x78) = dVar21;
    *(double *)(param_2 + 0x80) = dVar24;
  } // [自动静态注释] 作用域/控制流边界
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x4c) + 1;
  lVar16 = param_2 + (long)iVar10 * 0x40; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar23 = (dVar21 - dVar23) * 0.5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar24 = (dVar24 - dVar25) * 0.5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar21 = (dVar22 - dVar26) * 0.5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar21 = dVar24 * dVar24 + dVar23 * dVar23 + dVar21 * dVar21; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(double *)(param_2 + 0xb8) = dVar21 * 4.188790204786391 * SQRT(dVar21);
  *(undefined4 *)(param_2 + (long)iVar10 * 4) = 1;
  if (*(int *)(param_2 + 0x50) == 0) { // [自动静态注释] 条件判断/分支
    uVar5 = *(undefined8 *)(lVar16 + 0xd8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar18 = *(undefined8 *)(lVar16 + 0xe8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar6 = *(undefined8 *)(lVar16 + 0xf0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_2 + 0xa0) = *(undefined8 *)(lVar16 + 0xe0);
    *(undefined8 *)(param_2 + 0xa8) = uVar18;
    *(undefined8 *)(param_2 + 0xb0) = uVar6;
    uVar18 = *(undefined8 *)(lVar16 + 200); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar6 = *(undefined8 *)(lVar16 + 0xd0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_2 + 0x98) = uVar5;
    dVar21 = *(double *)(param_2 + 0xa8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar24 = *(double *)(param_2 + 0xb0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar25 = *(double *)(param_2 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar22 = *(double *)(param_2 + 0xa0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_2 + 0x88) = uVar18;
    *(undefined8 *)(param_2 + 0x90) = uVar6;
    dVar26 = *(double *)(param_2 + 0x88); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar23 = *(double *)(param_2 + 0x90); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    dVar23 = (double)NEON_fminnm(*(undefined8 *)(lVar16 + 0xd0),*(undefined8 *)(param_2 + 0x90)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar26 = (double)NEON_fminnm(*(undefined8 *)(lVar16 + 200),*(undefined8 *)(param_2 + 0x88)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar25 = (double)NEON_fminnm(*(undefined8 *)(lVar16 + 0xd8),*(undefined8 *)(param_2 + 0x98)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar22 = *(double *)(lVar16 + 0xe0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(double *)(lVar16 + 0xe0) <= *(double *)(param_2 + 0xa0)) { // [自动静态注释] 条件判断/分支
      dVar22 = *(double *)(param_2 + 0xa0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    dVar21 = *(double *)(lVar16 + 0xe8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(double *)(lVar16 + 0xe8) <= *(double *)(param_2 + 0xa8)) { // [自动静态注释] 条件判断/分支
      dVar21 = *(double *)(param_2 + 0xa8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    dVar24 = *(double *)(lVar16 + 0xf0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(double *)(lVar16 + 0xf0) <= *(double *)(param_2 + 0xb0)) { // [自动静态注释] 条件判断/分支
      dVar24 = *(double *)(param_2 + 0xb0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *(double *)(param_2 + 0x88) = dVar26;
    *(double *)(param_2 + 0x90) = dVar23;
    *(double *)(param_2 + 0x98) = dVar25;
    *(double *)(param_2 + 0xa0) = dVar22;
    *(double *)(param_2 + 0xa8) = dVar21;
    *(double *)(param_2 + 0xb0) = dVar24;
  } // [自动静态注释] 作用域/控制流边界
  *(int *)(param_2 + 0x50) = *(int *)(param_2 + 0x50) + 1;
  dVar22 = (dVar22 - dVar26) * 0.5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar26 = (dVar21 - dVar23) * 0.5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar21 = (dVar24 - dVar25) * 0.5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar21 = dVar21 * dVar21 + dVar26 * dVar26 + dVar22 * dVar22; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(double *)(param_2 + 0xc0) = dVar21 * 4.188790204786391 * SQRT(dVar21);
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001ACE50
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002ace50; name: FUN_.text__002ace50
 */


uint * FUN__text__002ace50(uint *param_1,uint *param_2,uint *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  bool bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint *puVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint *puVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint *puVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint *puVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar15; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar16; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar17; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar19; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar20; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar21; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint *puVar22; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar23; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar24; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar25; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined3 uStack_53; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined5 local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined3 uStack_23; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined5 uStack_20; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_1 != param_2) { // [自动静态注释] 条件判断/分支
    uVar10 = (long)param_2 - (long)param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar11 = ((long)uVar10 >> 4) * -0x5555555555555555; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((0x30 < (long)uVar10) && (0x5f < uVar10)) { // [自动静态注释] 条件判断/分支
      uVar13 = uVar11 - 2 >> 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar9 = uVar13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        if ((long)uVar9 <= (long)uVar13) { // [自动静态注释] 条件判断/分支
          uVar2 = uVar9 << 1 | 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar16 = uVar9 * 2 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar12 = param_1 + uVar2 * 0xc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if ((long)uVar16 < (long)uVar11) { // [自动静态注释] 条件判断/分支
            uVar23 = *puVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar4 = puVar12[0xc]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar25 = uVar23; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            if (uVar23 <= uVar4) { // [自动静态注释] 条件判断/分支
              uVar25 = uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            } // [自动静态注释] 作用域/控制流边界
            puVar6 = puVar12 + 0xc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            if (uVar4 <= uVar23) { // [自动静态注释] 条件判断/分支
              uVar16 = uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              puVar6 = puVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            } // [自动静态注释] 作用域/控制流边界
            puVar12 = puVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            puVar6 = param_1 + uVar9 * 0xc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar23 = *puVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            if (uVar23 <= uVar25) goto LAB__text__002ad3b4; // [自动静态注释] 条件判断/分支
          } // [自动静态注释] 作用域/控制流边界
          else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            puVar6 = param_1 + uVar9 * 0xc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar23 = *puVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar16 = uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            if (uVar23 <= *puVar12) { // [自动静态注释] 条件判断/分支
LAB__text__002ad3b4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              uVar19 = *(undefined8 *)(puVar6 + 5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              uVar17 = *(undefined8 *)(puVar6 + 7); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              uStack_53 = (undefined3)((ulong)uVar17 >> 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              uVar18 = *(undefined8 *)(puVar6 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              local_50 = (undefined5)*(undefined8 *)(puVar6 + 9); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              uVar20 = *(undefined8 *)(puVar6 + 3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              do { // [自动静态注释] 循环/迭代
                while( true ) { // [自动静态注释] 循环/迭代
                  puVar8 = puVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  uVar21 = *(undefined8 *)(puVar8 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  *(undefined8 *)puVar6 = *(undefined8 *)puVar8;
                  *(undefined8 *)(puVar6 + 2) = uVar21;
                  uVar14 = *(undefined8 *)(puVar8 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  uVar21 = *(undefined8 *)(puVar8 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  uVar3 = *(undefined8 *)(puVar8 + 6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  *(char *)(puVar6 + 10) = (char)puVar8[10];
                  *(undefined8 *)(puVar6 + 6) = uVar3;
                  *(undefined8 *)(puVar6 + 8) = uVar14;
                  *(undefined8 *)(puVar6 + 4) = uVar21;
                  if ((long)uVar13 < (long)uVar16) goto LAB__text__002ad310; // [自动静态注释] 条件判断/分支
                  uVar2 = uVar16 << 1 | 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  uVar16 = uVar16 * 2 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  puVar22 = param_1 + uVar2 * 0xc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  puVar6 = puVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  if ((long)uVar16 < (long)uVar11) break; // [自动静态注释] 条件判断/分支
                  uVar16 = uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  puVar12 = puVar22; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  if (*puVar22 < uVar23) goto LAB__text__002ad310; // [自动静态注释] 条件判断/分支
                } // [自动静态注释] 作用域/控制流边界
                uVar4 = *puVar22; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                uVar5 = puVar22[0xc]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                uVar25 = uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                if (uVar4 <= uVar5) { // [自动静态注释] 条件判断/分支
                  uVar25 = uVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                } // [自动静态注释] 作用域/控制流边界
                puVar12 = puVar22 + 0xc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                if (uVar5 <= uVar4) { // [自动静态注释] 条件判断/分支
                  uVar16 = uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  puVar12 = puVar22; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                } // [自动静态注释] 作用域/控制流边界
              } while (uVar23 <= uVar25); // [自动静态注释] 循环/迭代
LAB__text__002ad310: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              *puVar8 = uVar23;
              *(undefined8 *)(puVar8 + 1) = uVar18;
              *(ulong *)((long)puVar8 + 0x21) = CONCAT53(local_50,uStack_53);
              *(undefined8 *)(puVar8 + 7) = uVar17;
              *(undefined8 *)(puVar8 + 5) = uVar19;
              *(undefined8 *)(puVar8 + 3) = uVar20;
            } // [自动静态注释] 作用域/控制流边界
          } // [自动静态注释] 作用域/控制流边界
        } // [自动静态注释] 作用域/控制流边界
        bVar1 = 0 < (long)uVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar9 = uVar9 - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (bVar1); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    puVar12 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (param_2 != param_3) { // [自动静态注释] 条件判断/分支
      if ((long)uVar10 < 0x60) { // [自动静态注释] 条件判断/分支
        do { // [自动静态注释] 循环/迭代
          if (*puVar12 < *param_1) { // [自动静态注释] 条件判断/分支
            uVar17 = *(undefined8 *)(puVar12 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar20 = *(undefined8 *)(puVar12 + 6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar18 = *(undefined8 *)(puVar12 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar19 = *(undefined8 *)puVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar21 = *(undefined8 *)(puVar12 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar3 = *(undefined8 *)(param_1 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *(undefined8 *)puVar12 = *(undefined8 *)param_1;
            *(undefined8 *)(puVar12 + 2) = uVar3;
            uVar23 = param_1[10]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar3 = *(undefined8 *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar14 = *(undefined8 *)(param_1 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *(undefined8 *)(puVar12 + 6) = *(undefined8 *)(param_1 + 6);
            *(undefined8 *)(puVar12 + 8) = uVar3;
            local_48 = (undefined1)*(undefined8 *)(puVar12 + 10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *(char *)(puVar12 + 10) = (char)uVar23;
            *(undefined8 *)(puVar12 + 4) = uVar14;
            *(undefined1 *)(param_1 + 10) = local_48;
            *(undefined8 *)(param_1 + 8) = uVar18;
            *(undefined8 *)(param_1 + 4) = uVar17;
            *(undefined8 *)(param_1 + 6) = uVar20;
            *(undefined8 *)param_1 = uVar19;
            *(undefined8 *)(param_1 + 2) = uVar21;
          } // [自动静态注释] 作用域/控制流边界
          puVar12 = puVar12 + 0xc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } while (puVar12 != param_3); // [自动静态注释] 循环/迭代
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        do { // [自动静态注释] 循环/迭代
          if (*puVar12 < *param_1) { // [自动静态注释] 条件判断/分支
            uVar17 = *(undefined8 *)(puVar12 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar21 = *(undefined8 *)(puVar12 + 6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar20 = *(undefined8 *)(param_1 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar18 = *(undefined8 *)(puVar12 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar19 = *(undefined8 *)puVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar3 = *(undefined8 *)(puVar12 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *(undefined8 *)puVar12 = *(undefined8 *)param_1;
            *(undefined8 *)(puVar12 + 2) = uVar20;
            uVar23 = param_1[10]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar20 = *(undefined8 *)(param_1 + 6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar14 = *(undefined8 *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *(undefined8 *)(puVar12 + 4) = *(undefined8 *)(param_1 + 4);
            *(undefined8 *)(puVar12 + 6) = uVar20;
            *(undefined8 *)(puVar12 + 8) = uVar14;
            local_48 = (undefined1)*(undefined8 *)(puVar12 + 10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *(char *)(puVar12 + 10) = (char)uVar23;
            uVar23 = param_1[0xc]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *(undefined1 *)(param_1 + 10) = local_48;
            *(undefined8 *)(param_1 + 8) = uVar18;
            *(undefined8 *)(param_1 + 4) = uVar17;
            *(undefined8 *)(param_1 + 6) = uVar21;
            *(undefined8 *)param_1 = uVar19;
            *(undefined8 *)(param_1 + 2) = uVar3;
            if (uVar11 < 3) { // [自动静态注释] 条件判断/分支
              uVar9 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              uVar25 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              puVar6 = param_1 + 0xc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              if (uVar25 <= uVar23) goto LAB__text__002ad024; // [自动静态注释] 条件判断/分支
            } // [自动静态注释] 作用域/控制流边界
            else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              uVar25 = param_1[0x18]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              uVar4 = uVar23; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              if (uVar23 <= uVar25) { // [自动静态注释] 条件判断/分支
                uVar4 = uVar25; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              } // [自动静态注释] 作用域/控制流边界
              puVar6 = param_1 + 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              if (uVar25 <= uVar23) { // [自动静态注释] 条件判断/分支
                puVar6 = param_1 + 0xc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              } // [自动静态注释] 作用域/控制流边界
              uVar9 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              if (uVar25 > uVar23) { // [自动静态注释] 条件判断/分支
                uVar9 = 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              } // [自动静态注释] 作用域/控制流边界
              uVar25 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              if (uVar25 <= uVar4) { // [自动静态注释] 条件判断/分支
LAB__text__002ad024: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                uVar17 = *(undefined8 *)(param_1 + 5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                uVar19 = *(undefined8 *)(param_1 + 7); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                uStack_53 = (undefined3)((ulong)uVar19 >> 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                uVar18 = *(undefined8 *)(param_1 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                uVar20 = *(undefined8 *)(param_1 + 3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                local_50 = (undefined5)*(undefined8 *)(param_1 + 9); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                puVar8 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                do { // [自动静态注释] 循环/迭代
                  while( true ) { // [自动静态注释] 循环/迭代
                    puVar22 = puVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    uVar21 = *(undefined8 *)(puVar22 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    *(undefined8 *)puVar8 = *(undefined8 *)puVar22;
                    *(undefined8 *)(puVar8 + 2) = uVar21;
                    uVar14 = *(undefined8 *)(puVar22 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    uVar21 = *(undefined8 *)(puVar22 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    uVar3 = *(undefined8 *)(puVar22 + 6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    *(char *)(puVar8 + 10) = (char)puVar22[10];
                    *(undefined8 *)(puVar8 + 6) = uVar3;
                    *(undefined8 *)(puVar8 + 8) = uVar14;
                    *(undefined8 *)(puVar8 + 4) = uVar21;
                    if ((long)(uVar11 - 2 >> 1) < (long)uVar9) goto LAB__text__002acf40; // [自动静态注释] 条件判断/分支
                    uVar13 = uVar9 << 1 | 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    uVar9 = uVar9 * 2 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    puVar7 = param_1 + uVar13 * 0xc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    puVar8 = puVar22; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    if ((long)uVar9 < (long)uVar11) break; // [自动静态注释] 条件判断/分支
                    puVar6 = puVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    uVar9 = uVar13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    if (*puVar7 < uVar25) goto LAB__text__002acf40; // [自动静态注释] 条件判断/分支
                  } // [自动静态注释] 作用域/控制流边界
                  uVar4 = *puVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  uVar5 = puVar7[0xc]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  uVar23 = uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  if (uVar4 <= uVar5) { // [自动静态注释] 条件判断/分支
                    uVar23 = uVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  } // [自动静态注释] 作用域/控制流边界
                  puVar6 = puVar7 + 0xc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  if (uVar5 <= uVar4) { // [自动静态注释] 条件判断/分支
                    uVar9 = uVar13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    puVar6 = puVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  } // [自动静态注释] 作用域/控制流边界
                } while (uVar25 <= uVar23); // [自动静态注释] 循环/迭代
LAB__text__002acf40: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                *puVar22 = uVar25;
                *(undefined8 *)(puVar22 + 1) = uVar18;
                *(ulong *)((long)puVar22 + 0x21) = CONCAT53(local_50,uStack_53);
                *(undefined8 *)(puVar22 + 7) = uVar19;
                *(undefined8 *)(puVar22 + 5) = uVar17;
                *(undefined8 *)(puVar22 + 3) = uVar20;
              } // [自动静态注释] 作用域/控制流边界
            } // [自动静态注释] 作用域/控制流边界
          } // [自动静态注释] 作用域/控制流边界
          puVar12 = puVar12 + 0xc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } while (puVar12 != param_3); // [自动静态注释] 循环/迭代
      } // [自动静态注释] 作用域/控制流边界
      puVar12 = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    param_3 = puVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (0x30 < (long)uVar10) { // [自动静态注释] 条件判断/分支
      uVar10 = uVar10 / 0x30; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        uVar17 = *(undefined8 *)(param_1 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar20 = *(undefined8 *)(param_1 + 6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar18 = *(undefined8 *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar21 = *(undefined8 *)(param_1 + 10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar19 = *(undefined8 *)param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar3 = *(undefined8 *)(param_1 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar12 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar11 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        do { // [自动静态注释] 循环/迭代
          uVar13 = uVar11 << 1 | 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar9 = uVar11 * 2 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar6 = puVar12 + uVar11 * 0xc + 0xc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar16 = uVar13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if ((long)uVar9 < (long)uVar10) { // [自动静态注释] 条件判断/分支
            uVar16 = uVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            puVar8 = puVar12 + uVar11 * 0xc + 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            if (puVar12[uVar11 * 0xc + 0x18] <= *puVar6) { // [自动静态注释] 条件判断/分支
              uVar16 = uVar13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              puVar8 = puVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            } // [自动静态注释] 作用域/控制流边界
            puVar6 = puVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
          uVar14 = *(undefined8 *)(puVar6 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined8 *)puVar12 = *(undefined8 *)puVar6;
          *(undefined8 *)(puVar12 + 2) = uVar14;
          uVar24 = *(undefined8 *)(puVar6 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar14 = *(undefined8 *)(puVar6 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar15 = *(undefined8 *)(puVar6 + 6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(char *)(puVar12 + 10) = (char)puVar6[10];
          *(undefined8 *)(puVar12 + 6) = uVar15;
          *(undefined8 *)(puVar12 + 8) = uVar24;
          *(undefined8 *)(puVar12 + 4) = uVar14;
          puVar12 = puVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar11 = uVar16; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } while ((long)uVar16 <= (long)(uVar10 - 2 >> 1)); // [自动静态注释] 循环/迭代
        puVar12 = param_2 + -0xc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        local_48 = (undefined1)uVar21; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (puVar6 == puVar12) { // [自动静态注释] 条件判断/分支
          *(undefined8 *)puVar6 = uVar19;
          *(undefined8 *)(puVar6 + 2) = uVar3;
          *(undefined1 *)(puVar6 + 10) = local_48;
          *(undefined8 *)(puVar6 + 6) = uVar20;
          *(undefined8 *)(puVar6 + 8) = uVar18;
          *(undefined8 *)(puVar6 + 4) = uVar17;
        } // [自动静态注释] 作用域/控制流边界
        else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          uVar21 = *(undefined8 *)(param_2 + -10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined8 *)puVar6 = *(undefined8 *)puVar12;
          *(undefined8 *)(puVar6 + 2) = uVar21;
          uVar15 = *(undefined8 *)(param_2 + -4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar21 = *(undefined8 *)(param_2 + -8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar14 = *(undefined8 *)(param_2 + -6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(char *)(puVar6 + 10) = (char)param_2[-2];
          *(undefined8 *)(puVar6 + 6) = uVar14;
          *(undefined8 *)(puVar6 + 8) = uVar15;
          *(undefined8 *)(puVar6 + 4) = uVar21;
          *(undefined8 *)(param_2 + -4) = uVar18;
          *(undefined8 *)(param_2 + -8) = uVar17;
          *(undefined8 *)(param_2 + -6) = uVar20;
          *(undefined1 *)(param_2 + -2) = local_48;
          *(undefined8 *)puVar12 = uVar19;
          *(undefined8 *)(param_2 + -10) = uVar3;
          uVar11 = (long)puVar6 + (0x30 - (long)param_1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (0x30 < (long)uVar11) { // [自动静态注释] 条件判断/分支
            uVar23 = *puVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar11 = uVar11 / 0x30 - 2 >> 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            if (param_1[uVar11 * 0xc] < uVar23) { // [自动静态注释] 条件判断/分支
              uVar17 = *(undefined8 *)(puVar6 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              uVar19 = *(undefined8 *)(puVar6 + 3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              uVar18 = *(undefined8 *)(puVar6 + 5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              uVar20 = *(undefined8 *)(puVar6 + 7); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              uStack_23 = (undefined3)((ulong)uVar20 >> 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              uStack_20 = (undefined5)*(undefined8 *)(puVar6 + 9); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              puVar8 = param_1 + uVar11 * 0xc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              do { // [自动静态注释] 循环/迭代
                puVar22 = puVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                uVar21 = *(undefined8 *)(puVar22 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                *(undefined8 *)puVar6 = *(undefined8 *)puVar22;
                *(undefined8 *)(puVar6 + 2) = uVar21;
                uVar21 = *(undefined8 *)(puVar22 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                uVar3 = *(undefined8 *)(puVar22 + 6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                uVar14 = *(undefined8 *)(puVar22 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                *(char *)(puVar6 + 10) = (char)puVar22[10];
                *(undefined8 *)(puVar6 + 4) = uVar21;
                *(undefined8 *)(puVar6 + 6) = uVar3;
                *(undefined8 *)(puVar6 + 8) = uVar14;
                if (uVar11 == 0) break; // [自动静态注释] 条件判断/分支
                uVar11 = uVar11 - 1 >> 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                puVar6 = puVar22; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                puVar8 = param_1 + uVar11 * 0xc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              } while (param_1[uVar11 * 0xc] < uVar23); // [自动静态注释] 循环/迭代
              *puVar22 = uVar23;
              *(undefined8 *)(puVar22 + 5) = uVar18;
              *(undefined8 *)(puVar22 + 3) = uVar19;
              *(undefined8 *)(puVar22 + 7) = uVar20;
              *(undefined8 *)(puVar22 + 1) = uVar17;
              *(ulong *)((long)puVar22 + 0x21) = CONCAT53(uStack_20,uStack_23);
            } // [自动静态注释] 作用域/控制流边界
          } // [自动静态注释] 作用域/控制流边界
        } // [自动静态注释] 作用域/控制流边界
        bVar1 = 2 < (long)uVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        param_2 = puVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar10 = uVar10 - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (bVar1); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return param_3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



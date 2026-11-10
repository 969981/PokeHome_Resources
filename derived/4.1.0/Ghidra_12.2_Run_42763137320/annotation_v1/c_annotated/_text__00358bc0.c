/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00258BC0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00358bc0; name: FUN_.text__00358bc0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN__text__00358bc0(uint *param_1,uint *param_2,undefined8 param_3,long param_4,uint param_5) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint *puVar15; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint *puVar16; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar17; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint *puVar19; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint *puVar20; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint *puVar21; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar22; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar23; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint *puVar24; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint *puVar25; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint local_10c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_88; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_80; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_78; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_10c = param_5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__00358bf4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  puVar21 = param_2 + -8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar25 = param_2 + -0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar24 = param_2 + -0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar20 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__00358c04: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    param_1 = puVar20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar17 = (long)param_2 - (long)param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar12 = (long)uVar17 >> 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar12 < 6) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x00359540 */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK__text__0035954c + (ulong)*(ushort *)(uVar12 * 2 + 0x734fb8) * 4))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    if ((long)uVar17 < 0x300) { // [自动静态注释] 条件判断/分支
      puVar20 = param_1 + 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((local_10c & 1) == 0) { // [自动静态注释] 条件判断/分支
        if (!(param_1 == param_2 || puVar20 == param_2)) { // [自动静态注释] 条件判断/分支
          do { // [自动静态注释] 循环/迭代
            puVar21 = puVar20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar10 = param_1[8]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            if (uVar10 < *param_1) { // [自动静态注释] 条件判断/分支
              uVar14 = *(undefined8 *)(param_1 + 9); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              uVar18 = *(undefined8 *)(param_1 + 0xb); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              uVar23 = *(undefined8 *)(param_1 + 0xd); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              uVar11 = param_1[0xf]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              puVar20 = puVar21; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              do { // [自动静态注释] 循环/迭代
                puVar24 = puVar20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                puVar20 = puVar24 + -8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                *(undefined8 *)puVar24 = *(undefined8 *)puVar20;
                *(undefined8 *)(puVar24 + 2) = *(undefined8 *)(puVar24 + -6);
                *(undefined8 *)(puVar24 + 4) = *(undefined8 *)(puVar24 + -4);
                *(undefined8 *)(puVar24 + 6) = *(undefined8 *)(puVar24 + -2);
              } while (uVar10 < puVar24[-0x10]); // [自动静态注释] 循环/迭代
              *puVar20 = uVar10;
              puVar24[-1] = uVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              *(undefined8 *)(puVar24 + -3) = uVar23;
              *(undefined8 *)(puVar24 + -5) = uVar18;
              *(undefined8 *)(puVar24 + -7) = uVar14;
            } // [自动静态注释] 作用域/控制流边界
            puVar20 = puVar21 + 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            param_1 = puVar21; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } while (puVar21 + 8 != param_2); // [自动静态注释] 循环/迭代
          return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
        } // [自动静态注释] 作用域/控制流边界
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      if (param_1 == param_2 || puVar20 == param_2) { // [自动静态注释] 条件判断/分支
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      lVar13 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar21 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      break; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    if (param_4 == 0) { // [自动静态注释] 条件判断/分支
      if (param_1 == param_2) { // [自动静态注释] 条件判断/分支
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      FUN__text__0035a180(param_1,param_2,param_2,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    uVar10 = *puVar21; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar20 = param_1 + (uVar12 >> 1) * 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar17 < 0x1001) { // [自动静态注释] 条件判断/分支
      uVar11 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (uVar11 < *puVar20) { // [自动静态注释] 条件判断/分支
        if (uVar10 < uVar11) { // [自动静态注释] 条件判断/分支
          local_88 = *(undefined8 *)puVar20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uStack_80 = *(undefined8 *)(puVar20 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          local_78 = *(undefined8 *)(puVar20 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          local_70 = *(undefined8 *)(puVar20 + 6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar14 = *(undefined8 *)puVar21; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar18 = *(undefined8 *)(param_2 + -6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar23 = *(undefined8 *)(param_2 + -2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined8 *)(puVar20 + 4) = *(undefined8 *)(param_2 + -4);
          *(undefined8 *)(puVar20 + 6) = uVar23;
          *(undefined8 *)puVar20 = uVar14;
          *(undefined8 *)(puVar20 + 2) = uVar18;
        } // [自动静态注释] 作用域/控制流边界
        else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          uVar14 = *(undefined8 *)puVar20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar3 = *(undefined8 *)(puVar20 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar18 = *(undefined8 *)(puVar20 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar4 = *(undefined8 *)(puVar20 + 6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar23 = *(undefined8 *)param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar5 = *(undefined8 *)(param_1 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar6 = *(undefined8 *)(param_1 + 6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined8 *)(puVar20 + 4) = *(undefined8 *)(param_1 + 4);
          *(undefined8 *)(puVar20 + 6) = uVar6;
          *(undefined8 *)puVar20 = uVar23;
          *(undefined8 *)(puVar20 + 2) = uVar5;
          *(undefined8 *)(param_1 + 4) = uVar18;
          *(undefined8 *)(param_1 + 6) = uVar4;
          *(undefined8 *)param_1 = uVar14;
          *(undefined8 *)(param_1 + 2) = uVar3;
          if (*param_1 <= *puVar21) goto LAB__text__00358f70; // [自动静态注释] 条件判断/分支
          local_88 = *(undefined8 *)param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uStack_80 = *(undefined8 *)(param_1 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          local_78 = *(undefined8 *)(param_1 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          local_70 = *(undefined8 *)(param_1 + 6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar14 = *(undefined8 *)puVar21; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar18 = *(undefined8 *)(param_2 + -6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar23 = *(undefined8 *)(param_2 + -2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + -4);
          *(undefined8 *)(param_1 + 6) = uVar23;
          *(undefined8 *)param_1 = uVar14;
          *(undefined8 *)(param_1 + 2) = uVar18;
        } // [自动静态注释] 作用域/控制流边界
        *(undefined8 *)(param_2 + -4) = local_78;
        *(undefined8 *)(param_2 + -2) = local_70;
        *(undefined8 *)puVar21 = local_88;
        *(undefined8 *)(param_2 + -6) = uStack_80;
      } // [自动静态注释] 作用域/控制流边界
      else if (uVar10 < uVar11) { // [自动静态注释] 条件判断/分支
        uVar14 = *(undefined8 *)param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar3 = *(undefined8 *)(param_1 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar18 = *(undefined8 *)(param_1 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar4 = *(undefined8 *)(param_1 + 6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar23 = *(undefined8 *)puVar21; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar5 = *(undefined8 *)(param_2 + -6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar6 = *(undefined8 *)(param_2 + -2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + -4);
        *(undefined8 *)(param_1 + 6) = uVar6;
        *(undefined8 *)param_1 = uVar23;
        *(undefined8 *)(param_1 + 2) = uVar5;
        *(undefined8 *)(param_2 + -4) = uVar18;
        *(undefined8 *)(param_2 + -2) = uVar4;
        *(undefined8 *)puVar21 = uVar14;
        *(undefined8 *)(param_2 + -6) = uVar3;
        if (*param_1 < *puVar20) { // [自动静态注释] 条件判断/分支
          uVar14 = *(undefined8 *)puVar20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar3 = *(undefined8 *)(puVar20 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar18 = *(undefined8 *)(puVar20 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar4 = *(undefined8 *)(puVar20 + 6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar23 = *(undefined8 *)param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar5 = *(undefined8 *)(param_1 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar6 = *(undefined8 *)(param_1 + 6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined8 *)(puVar20 + 4) = *(undefined8 *)(param_1 + 4);
          *(undefined8 *)(puVar20 + 6) = uVar6;
          *(undefined8 *)puVar20 = uVar23;
          *(undefined8 *)(puVar20 + 2) = uVar5;
          *(undefined8 *)(param_1 + 4) = uVar18;
          *(undefined8 *)(param_1 + 6) = uVar4;
          *(undefined8 *)param_1 = uVar14;
          *(undefined8 *)(param_1 + 2) = uVar3;
          uVar10 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          goto joined_r0x00358dbc; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
LAB__text__00358f70: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar10 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar11 = *puVar20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (uVar11 < *param_1) { // [自动静态注释] 条件判断/分支
        if (uVar10 < uVar11) { // [自动静态注释] 条件判断/分支
          local_88 = *(undefined8 *)param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uStack_80 = *(undefined8 *)(param_1 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          local_78 = *(undefined8 *)(param_1 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          local_70 = *(undefined8 *)(param_1 + 6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar14 = *(undefined8 *)puVar21; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar18 = *(undefined8 *)(param_2 + -6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar23 = *(undefined8 *)(param_2 + -2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + -4);
          *(undefined8 *)(param_1 + 6) = uVar23;
          *(undefined8 *)param_1 = uVar14;
          *(undefined8 *)(param_1 + 2) = uVar18;
        } // [自动静态注释] 作用域/控制流边界
        else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          uVar14 = *(undefined8 *)param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar3 = *(undefined8 *)(param_1 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar18 = *(undefined8 *)(param_1 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar4 = *(undefined8 *)(param_1 + 6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar23 = *(undefined8 *)puVar20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar5 = *(undefined8 *)(puVar20 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar6 = *(undefined8 *)(puVar20 + 6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined8 *)(param_1 + 4) = *(undefined8 *)(puVar20 + 4);
          *(undefined8 *)(param_1 + 6) = uVar6;
          *(undefined8 *)param_1 = uVar23;
          *(undefined8 *)(param_1 + 2) = uVar5;
          *(undefined8 *)(puVar20 + 4) = uVar18;
          *(undefined8 *)(puVar20 + 6) = uVar4;
          *(undefined8 *)puVar20 = uVar14;
          *(undefined8 *)(puVar20 + 2) = uVar3;
          if (*puVar20 <= *puVar21) goto LAB__text__00358e34; // [自动静态注释] 条件判断/分支
          local_88 = *(undefined8 *)puVar20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uStack_80 = *(undefined8 *)(puVar20 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          local_78 = *(undefined8 *)(puVar20 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          local_70 = *(undefined8 *)(puVar20 + 6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar14 = *(undefined8 *)puVar21; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar18 = *(undefined8 *)(param_2 + -6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar23 = *(undefined8 *)(param_2 + -2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined8 *)(puVar20 + 4) = *(undefined8 *)(param_2 + -4);
          *(undefined8 *)(puVar20 + 6) = uVar23;
          *(undefined8 *)puVar20 = uVar14;
          *(undefined8 *)(puVar20 + 2) = uVar18;
        } // [自动静态注释] 作用域/控制流边界
        *(undefined8 *)(param_2 + -4) = local_78;
        *(undefined8 *)(param_2 + -2) = local_70;
        *(undefined8 *)puVar21 = local_88;
        *(undefined8 *)(param_2 + -6) = uStack_80;
      } // [自动静态注释] 作用域/控制流边界
      else if (uVar10 < uVar11) { // [自动静态注释] 条件判断/分支
        uVar14 = *(undefined8 *)puVar20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar3 = *(undefined8 *)(puVar20 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar18 = *(undefined8 *)(puVar20 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar4 = *(undefined8 *)(puVar20 + 6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar23 = *(undefined8 *)puVar21; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar5 = *(undefined8 *)(param_2 + -6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar6 = *(undefined8 *)(param_2 + -2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined8 *)(puVar20 + 4) = *(undefined8 *)(param_2 + -4);
        *(undefined8 *)(puVar20 + 6) = uVar6;
        *(undefined8 *)puVar20 = uVar23;
        *(undefined8 *)(puVar20 + 2) = uVar5;
        *(undefined8 *)(param_2 + -4) = uVar18;
        *(undefined8 *)(param_2 + -2) = uVar4;
        *(undefined8 *)puVar21 = uVar14;
        *(undefined8 *)(param_2 + -6) = uVar3;
        if (*puVar20 < *param_1) { // [自动静态注释] 条件判断/分支
          uVar14 = *(undefined8 *)param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar3 = *(undefined8 *)(param_1 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar18 = *(undefined8 *)(param_1 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar4 = *(undefined8 *)(param_1 + 6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar23 = *(undefined8 *)puVar20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar5 = *(undefined8 *)(puVar20 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar6 = *(undefined8 *)(puVar20 + 6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined8 *)(param_1 + 4) = *(undefined8 *)(puVar20 + 4);
          *(undefined8 *)(param_1 + 6) = uVar6;
          *(undefined8 *)param_1 = uVar23;
          *(undefined8 *)(param_1 + 2) = uVar5;
          *(undefined8 *)(puVar20 + 4) = uVar18;
          *(undefined8 *)(puVar20 + 6) = uVar4;
          *(undefined8 *)puVar20 = uVar14;
          *(undefined8 *)(puVar20 + 2) = uVar3;
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
LAB__text__00358e34: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      puVar16 = param_1 + 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar15 = puVar20 + -8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar10 = *puVar15; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (uVar10 < *puVar16) { // [自动静态注释] 条件判断/分支
        if (*puVar25 < uVar10) { // [自动静态注释] 条件判断/分支
          uVar14 = *(undefined8 *)puVar16; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar3 = *(undefined8 *)(param_1 + 10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar18 = *(undefined8 *)(param_1 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar4 = *(undefined8 *)(param_1 + 0xe); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar23 = *(undefined8 *)(param_2 + -0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar5 = *(undefined8 *)(param_2 + -10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar6 = *(undefined8 *)(param_2 + -0xe); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined8 *)puVar16 = *(undefined8 *)puVar25;
          *(undefined8 *)(param_1 + 10) = uVar6;
          *(undefined8 *)(param_1 + 0xc) = uVar23;
          *(undefined8 *)(param_1 + 0xe) = uVar5;
          *(undefined8 *)(param_2 + -0xc) = uVar18;
          *(undefined8 *)(param_2 + -10) = uVar4;
          *(undefined8 *)puVar25 = uVar14;
          *(undefined8 *)(param_2 + -0xe) = uVar3;
        } // [自动静态注释] 作用域/控制流边界
        else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          uVar14 = *(undefined8 *)puVar16; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar3 = *(undefined8 *)(param_1 + 10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar18 = *(undefined8 *)(param_1 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar4 = *(undefined8 *)(param_1 + 0xe); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar23 = *(undefined8 *)(puVar20 + -4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar5 = *(undefined8 *)(puVar20 + -2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar6 = *(undefined8 *)(puVar20 + -6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined8 *)puVar16 = *(undefined8 *)puVar15;
          *(undefined8 *)(param_1 + 10) = uVar6;
          *(undefined8 *)(param_1 + 0xc) = uVar23;
          *(undefined8 *)(param_1 + 0xe) = uVar5;
          *(undefined8 *)(puVar20 + -4) = uVar18;
          *(undefined8 *)(puVar20 + -2) = uVar4;
          *(undefined8 *)puVar15 = uVar14;
          *(undefined8 *)(puVar20 + -6) = uVar3;
          if (*puVar25 < (uint)uVar14) { // [自动静态注释] 条件判断/分支
            uVar14 = *(undefined8 *)puVar15; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar3 = *(undefined8 *)(puVar20 + -6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar18 = *(undefined8 *)(puVar20 + -4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar4 = *(undefined8 *)(puVar20 + -2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar23 = *(undefined8 *)puVar25; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar5 = *(undefined8 *)(param_2 + -0xe); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar6 = *(undefined8 *)(param_2 + -10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *(undefined8 *)(puVar20 + -4) = *(undefined8 *)(param_2 + -0xc);
            *(undefined8 *)(puVar20 + -2) = uVar6;
            *(undefined8 *)puVar15 = uVar23;
            *(undefined8 *)(puVar20 + -6) = uVar5;
            *(undefined8 *)(param_2 + -0xc) = uVar18;
            *(undefined8 *)(param_2 + -10) = uVar4;
            *(undefined8 *)puVar25 = uVar14;
            *(undefined8 *)(param_2 + -0xe) = uVar3;
          } // [自动静态注释] 作用域/控制流边界
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      else if (*puVar25 < uVar10) { // [自动静态注释] 条件判断/分支
        uVar14 = *(undefined8 *)puVar15; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar3 = *(undefined8 *)(puVar20 + -6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar18 = *(undefined8 *)(puVar20 + -4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar4 = *(undefined8 *)(puVar20 + -2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar23 = *(undefined8 *)puVar25; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar5 = *(undefined8 *)(param_2 + -0xe); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar6 = *(undefined8 *)(param_2 + -10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined8 *)(puVar20 + -4) = *(undefined8 *)(param_2 + -0xc);
        *(undefined8 *)(puVar20 + -2) = uVar6;
        *(undefined8 *)puVar15 = uVar23;
        *(undefined8 *)(puVar20 + -6) = uVar5;
        *(undefined8 *)(param_2 + -0xc) = uVar18;
        *(undefined8 *)(param_2 + -10) = uVar4;
        *(undefined8 *)puVar25 = uVar14;
        *(undefined8 *)(param_2 + -0xe) = uVar3;
        if (*puVar15 < *puVar16) { // [自动静态注释] 条件判断/分支
          uVar14 = *(undefined8 *)puVar16; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar3 = *(undefined8 *)(param_1 + 10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar18 = *(undefined8 *)(param_1 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar4 = *(undefined8 *)(param_1 + 0xe); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar23 = *(undefined8 *)(puVar20 + -4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar5 = *(undefined8 *)(puVar20 + -2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar6 = *(undefined8 *)(puVar20 + -6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined8 *)puVar16 = *(undefined8 *)puVar15;
          *(undefined8 *)(param_1 + 10) = uVar6;
          *(undefined8 *)(param_1 + 0xc) = uVar23;
          *(undefined8 *)(param_1 + 0xe) = uVar5;
          *(undefined8 *)(puVar20 + -4) = uVar18;
          *(undefined8 *)(puVar20 + -2) = uVar4;
          *(undefined8 *)puVar15 = uVar14;
          *(undefined8 *)(puVar20 + -6) = uVar3;
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      puVar16 = puVar20 + 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar10 = *puVar16; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar19 = param_1 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (uVar10 < *puVar19) { // [自动静态注释] 条件判断/分支
        if (*puVar24 < uVar10) { // [自动静态注释] 条件判断/分支
          uVar14 = *(undefined8 *)puVar19; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar3 = *(undefined8 *)(param_1 + 0x12); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar18 = *(undefined8 *)(param_1 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar4 = *(undefined8 *)(param_1 + 0x16); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar23 = *(undefined8 *)(param_2 + -0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar5 = *(undefined8 *)(param_2 + -0x12); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar6 = *(undefined8 *)(param_2 + -0x16); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined8 *)puVar19 = *(undefined8 *)puVar24;
          *(undefined8 *)(param_1 + 0x12) = uVar6;
          *(undefined8 *)(param_1 + 0x14) = uVar23;
          *(undefined8 *)(param_1 + 0x16) = uVar5;
          *(undefined8 *)(param_2 + -0x14) = uVar18;
          *(undefined8 *)(param_2 + -0x12) = uVar4;
          *(undefined8 *)puVar24 = uVar14;
          *(undefined8 *)(param_2 + -0x16) = uVar3;
        } // [自动静态注释] 作用域/控制流边界
        else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          uVar14 = *(undefined8 *)puVar19; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar3 = *(undefined8 *)(param_1 + 0x12); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar18 = *(undefined8 *)(param_1 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar4 = *(undefined8 *)(param_1 + 0x16); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar23 = *(undefined8 *)(puVar20 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar5 = *(undefined8 *)(puVar20 + 0xe); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar6 = *(undefined8 *)(puVar20 + 10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined8 *)puVar19 = *(undefined8 *)puVar16;
          *(undefined8 *)(param_1 + 0x12) = uVar6;
          *(undefined8 *)(param_1 + 0x14) = uVar23;
          *(undefined8 *)(param_1 + 0x16) = uVar5;
          *(undefined8 *)(puVar20 + 0xc) = uVar18;
          *(undefined8 *)(puVar20 + 0xe) = uVar4;
          *(undefined8 *)puVar16 = uVar14;
          *(undefined8 *)(puVar20 + 10) = uVar3;
          if (*puVar24 < (uint)uVar14) { // [自动静态注释] 条件判断/分支
            uVar14 = *(undefined8 *)puVar16; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar3 = *(undefined8 *)(puVar20 + 10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar18 = *(undefined8 *)(puVar20 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar4 = *(undefined8 *)(puVar20 + 0xe); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar23 = *(undefined8 *)puVar24; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar5 = *(undefined8 *)(param_2 + -0x16); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar6 = *(undefined8 *)(param_2 + -0x12); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *(undefined8 *)(puVar20 + 0xc) = *(undefined8 *)(param_2 + -0x14);
            *(undefined8 *)(puVar20 + 0xe) = uVar6;
            *(undefined8 *)puVar16 = uVar23;
            *(undefined8 *)(puVar20 + 10) = uVar5;
            *(undefined8 *)(param_2 + -0x14) = uVar18;
            *(undefined8 *)(param_2 + -0x12) = uVar4;
            *(undefined8 *)puVar24 = uVar14;
            *(undefined8 *)(param_2 + -0x16) = uVar3;
          } // [自动静态注释] 作用域/控制流边界
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      else if (*puVar24 < uVar10) { // [自动静态注释] 条件判断/分支
        uVar14 = *(undefined8 *)puVar16; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar3 = *(undefined8 *)(puVar20 + 10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar18 = *(undefined8 *)(puVar20 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar4 = *(undefined8 *)(puVar20 + 0xe); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar23 = *(undefined8 *)puVar24; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar5 = *(undefined8 *)(param_2 + -0x16); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar6 = *(undefined8 *)(param_2 + -0x12); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined8 *)(puVar20 + 0xc) = *(undefined8 *)(param_2 + -0x14);
        *(undefined8 *)(puVar20 + 0xe) = uVar6;
        *(undefined8 *)puVar16 = uVar23;
        *(undefined8 *)(puVar20 + 10) = uVar5;
        *(undefined8 *)(param_2 + -0x14) = uVar18;
        *(undefined8 *)(param_2 + -0x12) = uVar4;
        *(undefined8 *)puVar24 = uVar14;
        *(undefined8 *)(param_2 + -0x16) = uVar3;
        if (*puVar16 < *puVar19) { // [自动静态注释] 条件判断/分支
          uVar14 = *(undefined8 *)puVar19; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar3 = *(undefined8 *)(param_1 + 0x12); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar18 = *(undefined8 *)(param_1 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar4 = *(undefined8 *)(param_1 + 0x16); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar23 = *(undefined8 *)(puVar20 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar5 = *(undefined8 *)(puVar20 + 0xe); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar6 = *(undefined8 *)(puVar20 + 10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined8 *)puVar19 = *(undefined8 *)puVar16;
          *(undefined8 *)(param_1 + 0x12) = uVar6;
          *(undefined8 *)(param_1 + 0x14) = uVar23;
          *(undefined8 *)(param_1 + 0x16) = uVar5;
          *(undefined8 *)(puVar20 + 0xc) = uVar18;
          *(undefined8 *)(puVar20 + 0xe) = uVar4;
          *(undefined8 *)puVar16 = uVar14;
          *(undefined8 *)(puVar20 + 10) = uVar3;
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      uVar10 = *puVar20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (uVar10 < *puVar15) { // [自动静态注释] 条件判断/分支
        if (*puVar16 < uVar10) { // [自动静态注释] 条件判断/分支
          local_88 = *(undefined8 *)puVar15; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uStack_80 = *(undefined8 *)(puVar20 + -6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          local_78 = *(undefined8 *)(puVar20 + -4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          local_70 = *(undefined8 *)(puVar20 + -2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined8 *)puVar15 = *(undefined8 *)puVar16;
          *(undefined8 *)(puVar20 + -6) = *(undefined8 *)(puVar20 + 10);
          *(undefined8 *)(puVar20 + -4) = *(undefined8 *)(puVar20 + 0xc);
          *(undefined8 *)(puVar20 + -2) = *(undefined8 *)(puVar20 + 0xe);
        } // [自动静态注释] 作用域/控制流边界
        else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          uVar14 = *(undefined8 *)puVar15; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar23 = *(undefined8 *)(puVar20 + -6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar18 = *(undefined8 *)(puVar20 + -4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar3 = *(undefined8 *)(puVar20 + -2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined8 *)puVar15 = *(undefined8 *)puVar20;
          *(undefined8 *)(puVar20 + -6) = *(undefined8 *)(puVar20 + 2);
          *(undefined8 *)(puVar20 + -4) = *(undefined8 *)(puVar20 + 4);
          *(undefined8 *)(puVar20 + -2) = *(undefined8 *)(puVar20 + 6);
          *(undefined8 *)(puVar20 + 4) = uVar18;
          *(undefined8 *)(puVar20 + 6) = uVar3;
          *(undefined8 *)puVar20 = uVar14;
          *(undefined8 *)(puVar20 + 2) = uVar23;
          if ((uint)uVar14 <= *puVar16) goto LAB__text__0035924c; // [自动静态注释] 条件判断/分支
          local_88 = *(undefined8 *)puVar20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uStack_80 = *(undefined8 *)(puVar20 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          local_78 = *(undefined8 *)(puVar20 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          local_70 = *(undefined8 *)(puVar20 + 6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined8 *)puVar20 = *(undefined8 *)puVar16;
          *(undefined8 *)(puVar20 + 2) = *(undefined8 *)(puVar20 + 10);
          *(undefined8 *)(puVar20 + 4) = *(undefined8 *)(puVar20 + 0xc);
          *(undefined8 *)(puVar20 + 6) = *(undefined8 *)(puVar20 + 0xe);
        } // [自动静态注释] 作用域/控制流边界
        *(undefined8 *)(puVar20 + 0xc) = local_78;
        *(undefined8 *)(puVar20 + 0xe) = local_70;
        *(undefined8 *)puVar16 = local_88;
        *(undefined8 *)(puVar20 + 10) = uStack_80;
      } // [自动静态注释] 作用域/控制流边界
      else if (*puVar16 < uVar10) { // [自动静态注释] 条件判断/分支
        uVar14 = *(undefined8 *)puVar20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar23 = *(undefined8 *)(puVar20 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar18 = *(undefined8 *)(puVar20 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar3 = *(undefined8 *)(puVar20 + 6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined8 *)puVar20 = *(undefined8 *)puVar16;
        *(undefined8 *)(puVar20 + 2) = *(undefined8 *)(puVar20 + 10);
        *(undefined8 *)(puVar20 + 4) = *(undefined8 *)(puVar20 + 0xc);
        *(undefined8 *)(puVar20 + 6) = *(undefined8 *)(puVar20 + 0xe);
        *(undefined8 *)(puVar20 + 0xc) = uVar18;
        *(undefined8 *)(puVar20 + 0xe) = uVar3;
        *(undefined8 *)puVar16 = uVar14;
        *(undefined8 *)(puVar20 + 10) = uVar23;
        if (*puVar20 < *puVar15) { // [自动静态注释] 条件判断/分支
          uVar14 = *(undefined8 *)puVar15; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar23 = *(undefined8 *)(puVar20 + -6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar18 = *(undefined8 *)(puVar20 + -4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar3 = *(undefined8 *)(puVar20 + -2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined8 *)puVar15 = *(undefined8 *)puVar20;
          *(undefined8 *)(puVar20 + -6) = *(undefined8 *)(puVar20 + 2);
          *(undefined8 *)(puVar20 + -4) = *(undefined8 *)(puVar20 + 4);
          *(undefined8 *)(puVar20 + -2) = *(undefined8 *)(puVar20 + 6);
          *(undefined8 *)(puVar20 + 4) = uVar18;
          *(undefined8 *)(puVar20 + 6) = uVar3;
          *(undefined8 *)puVar20 = uVar14;
          *(undefined8 *)(puVar20 + 2) = uVar23;
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
LAB__text__0035924c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar14 = *(undefined8 *)param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar3 = *(undefined8 *)(param_1 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar18 = *(undefined8 *)(param_1 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar4 = *(undefined8 *)(param_1 + 6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar23 = *(undefined8 *)puVar20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar5 = *(undefined8 *)(puVar20 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar6 = *(undefined8 *)(puVar20 + 6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(puVar20 + 4);
      *(undefined8 *)(param_1 + 6) = uVar6;
      *(undefined8 *)param_1 = uVar23;
      *(undefined8 *)(param_1 + 2) = uVar5;
      *(undefined8 *)(puVar20 + 4) = uVar18;
      *(undefined8 *)(puVar20 + 6) = uVar4;
      *(undefined8 *)puVar20 = uVar14;
      *(undefined8 *)(puVar20 + 2) = uVar3;
      uVar10 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
joined_r0x00358dbc: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (((local_10c & 1) != 0) || (param_1[-8] < uVar10)) { // [自动静态注释] 条件判断/分支
      param_4 = param_4 + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar14 = *(undefined8 *)(param_1 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar18 = *(undefined8 *)(param_1 + 3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar23 = *(undefined8 *)(param_1 + 5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar11 = param_1[7]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar13 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        lVar1 = lVar13 + 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar22 = lVar13 + 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar13 = lVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (*(uint *)((long)param_1 + lVar22) < uVar10); // [自动静态注释] 循环/迭代
      puVar15 = (uint *)((long)param_1 + lVar1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar16 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (lVar1 == 0x20) { // [自动静态注释] 条件判断/分支
        do { // [自动静态注释] 循环/迭代
          if (puVar16 <= puVar15) break; // [自动静态注释] 条件判断/分支
          puVar16 = puVar16 + -8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } while (uVar10 <= *puVar16); // [自动静态注释] 循环/迭代
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        do { // [自动静态注释] 循环/迭代
          puVar16 = puVar16 + -8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } while (uVar10 <= *puVar16); // [自动静态注释] 循环/迭代
      } // [自动静态注释] 作用域/控制流边界
      puVar20 = puVar15; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (puVar15 < puVar16) { // [自动静态注释] 条件判断/分支
        puVar19 = puVar16; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        do { // [自动静态注释] 循环/迭代
          uVar3 = *(undefined8 *)puVar20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar6 = *(undefined8 *)(puVar20 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar4 = *(undefined8 *)(puVar20 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar7 = *(undefined8 *)(puVar20 + 6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar5 = *(undefined8 *)puVar19; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar8 = *(undefined8 *)(puVar19 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar9 = *(undefined8 *)(puVar19 + 6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined8 *)(puVar20 + 4) = *(undefined8 *)(puVar19 + 4);
          *(undefined8 *)(puVar20 + 6) = uVar9;
          *(undefined8 *)puVar20 = uVar5;
          *(undefined8 *)(puVar20 + 2) = uVar8;
          *(undefined8 *)(puVar19 + 4) = uVar4;
          *(undefined8 *)(puVar19 + 6) = uVar7;
          *(undefined8 *)puVar19 = uVar3;
          *(undefined8 *)(puVar19 + 2) = uVar6;
          do { // [自动静态注释] 循环/迭代
            puVar20 = puVar20 + 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } while (*puVar20 < uVar10); // [自动静态注释] 循环/迭代
          do { // [自动静态注释] 循环/迭代
            puVar19 = puVar19 + -8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } while (uVar10 <= *puVar19); // [自动静态注释] 循环/迭代
        } while (puVar20 < puVar19); // [自动静态注释] 循环/迭代
      } // [自动静态注释] 作用域/控制流边界
      puVar19 = puVar20 + -8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (puVar19 != param_1) { // [自动静态注释] 条件判断/分支
        uVar3 = *(undefined8 *)puVar19; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar4 = *(undefined8 *)(puVar20 + -6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar5 = *(undefined8 *)(puVar20 + -2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined8 *)(param_1 + 4) = *(undefined8 *)(puVar20 + -4);
        *(undefined8 *)(param_1 + 6) = uVar5;
        *(undefined8 *)param_1 = uVar3;
        *(undefined8 *)(param_1 + 2) = uVar4;
      } // [自动静态注释] 作用域/控制流边界
      puVar20[-8] = uVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar20[-1] = uVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(puVar20 + -3) = uVar23;
      *(undefined8 *)(puVar20 + -5) = uVar18;
      *(undefined8 *)(puVar20 + -7) = uVar14;
      if (puVar16 <= puVar15) { // [自动静态注释] 条件判断/分支
        uVar12 = FUN__text__00359a20(param_1,puVar19,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
        uVar17 = FUN__text__00359a20(puVar20,param_2,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
        if ((uVar17 & 1) != 0) goto LAB__text__00359528; // [自动静态注释] 条件判断/分支
        if ((uVar12 & 1) != 0) goto LAB__text__00358c04; // [自动静态注释] 条件判断/分支
      } // [自动静态注释] 作用域/控制流边界
      FUN__text__00358bc0(param_1,puVar19,param_3,param_4,local_10c & 1); // [自动静态注释] 调用尚未恢复正式名称的函数
      local_10c = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      goto LAB__text__00358c04; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    uVar14 = *(undefined8 *)(param_1 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar18 = *(undefined8 *)(param_1 + 3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar23 = *(undefined8 *)(param_1 + 5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar11 = param_1[7]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar20 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar10 < param_2[-8]) { // [自动静态注释] 条件判断/分支
      do { // [自动静态注释] 循环/迭代
        puVar20 = puVar20 + 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (*puVar20 <= uVar10); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      do { // [自动静态注释] 循环/迭代
        puVar20 = puVar20 + 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (param_2 <= puVar20) break; // [自动静态注释] 条件判断/分支
      } while (*puVar20 <= uVar10); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    puVar15 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (puVar20 < param_2) { // [自动静态注释] 条件判断/分支
      do { // [自动静态注释] 循环/迭代
        puVar15 = puVar15 + -8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (uVar10 < *puVar15); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    while (puVar20 < puVar15) { // [自动静态注释] 循环/迭代
      uVar3 = *(undefined8 *)puVar20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar6 = *(undefined8 *)(puVar20 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar4 = *(undefined8 *)(puVar20 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar7 = *(undefined8 *)(puVar20 + 6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar5 = *(undefined8 *)puVar15; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar8 = *(undefined8 *)(puVar15 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar9 = *(undefined8 *)(puVar15 + 6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(puVar20 + 4) = *(undefined8 *)(puVar15 + 4);
      *(undefined8 *)(puVar20 + 6) = uVar9;
      *(undefined8 *)puVar20 = uVar5;
      *(undefined8 *)(puVar20 + 2) = uVar8;
      *(undefined8 *)(puVar15 + 4) = uVar4;
      *(undefined8 *)(puVar15 + 6) = uVar7;
      *(undefined8 *)puVar15 = uVar3;
      *(undefined8 *)(puVar15 + 2) = uVar6;
      do { // [自动静态注释] 循环/迭代
        puVar20 = puVar20 + 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (*puVar20 <= uVar10); // [自动静态注释] 循环/迭代
      do { // [自动静态注释] 循环/迭代
        puVar15 = puVar15 + -8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (uVar10 < *puVar15); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    if (puVar20 + -8 != param_1) { // [自动静态注释] 条件判断/分支
      uVar3 = *(undefined8 *)(puVar20 + -8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar4 = *(undefined8 *)(puVar20 + -6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar5 = *(undefined8 *)(puVar20 + -2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(puVar20 + -4);
      *(undefined8 *)(param_1 + 6) = uVar5;
      *(undefined8 *)param_1 = uVar3;
      *(undefined8 *)(param_1 + 2) = uVar4;
    } // [自动静态注释] 作用域/控制流边界
    puVar20[-8] = uVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_10c = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar20[-1] = uVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(puVar20 + -3) = uVar23;
    *(undefined8 *)(puVar20 + -5) = uVar18;
    *(undefined8 *)(puVar20 + -7) = uVar14;
    param_4 = param_4 + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while( true ); // [自动静态注释] 循环/迭代
LAB__text__003596a8: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  puVar24 = puVar20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar10 = puVar21[8]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar10 < *puVar21) { // [自动静态注释] 条件判断/分支
    uVar14 = *(undefined8 *)(puVar21 + 9); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar18 = *(undefined8 *)(puVar21 + 0xb); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar23 = *(undefined8 *)(puVar21 + 0xd); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar11 = puVar21[0xf]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar1 = lVar13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      lVar22 = lVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar2 = (undefined8 *)((long)param_1 + lVar22); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar2[4] = *puVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar2[5] = puVar2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar2[6] = puVar2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar2[7] = puVar2[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (lVar22 == 0) { // [自动静态注释] 条件判断/分支
        puVar20 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        goto LAB__text__00359674; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      lVar1 = lVar22 + -0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (uVar10 < *(uint *)(puVar2 + -4)); // [自动静态注释] 循环/迭代
    puVar20 = (uint *)((long)param_1 + lVar22); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__00359674: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *puVar20 = uVar10;
    puVar20[7] = uVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(puVar20 + 5) = uVar23;
    *(undefined8 *)(puVar20 + 3) = uVar18;
    *(undefined8 *)(puVar20 + 1) = uVar14;
  } // [自动静态注释] 作用域/控制流边界
  puVar20 = puVar24 + 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar13 = lVar13 + 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar21 = puVar24; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (puVar20 == param_2) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  goto LAB__text__003596a8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
LAB__text__00359528: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  param_2 = puVar19; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((uVar12 & 1) != 0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  goto LAB__text__00358bf4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
} // [自动静态注释] 作用域/控制流边界



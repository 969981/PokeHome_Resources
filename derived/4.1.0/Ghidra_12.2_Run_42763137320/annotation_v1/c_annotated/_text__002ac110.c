/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001AC110
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002ac110; name: FUN_.text__002ac110
 */


ulong FUN__text__002ac110(uint *param_1,uint *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint *puVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint *puVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar15; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar16; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_30; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined5 uStack_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined3 uStack_23; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined5 local_20; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined3 uStack_1b; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar11 = ((long)param_2 - (long)param_1 >> 4) * -0x5555555555555555; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar11 < 6) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x002ac144 */
                    /* WARNING: Treating indirect jump as call */
    uVar11 = (*(code *)(&UNK__text__002ac154 + (ulong)*(byte *)(uVar11 + 0x7333ae) * 4))(1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    return uVar11; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  puVar12 = param_1 + 0xc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = *puVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar7 = param_1 + 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = *puVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar4 < *param_1) { // [自动静态注释] 条件判断/分支
    if (uVar5 < uVar4) { // [自动静态注释] 条件判断/分支
      local_30 = *(undefined8 *)(param_1 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_28 = (undefined5)*(undefined8 *)(param_1 + 6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_23 = (undefined3)((ulong)*(undefined8 *)(param_1 + 6) >> 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_18 = (undefined1)*(undefined8 *)(param_1 + 10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_20 = (undefined5)*(undefined8 *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_1b = (undefined3)((ulong)*(undefined8 *)(param_1 + 8) >> 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_40 = *(undefined8 *)param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_38 = *(undefined8 *)(param_1 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 0x1c);
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 0x1e);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x20);
      *(char *)(param_1 + 10) = (char)param_1[0x22];
      *(undefined8 *)param_1 = *(undefined8 *)puVar7;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 0x1a);
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar8 = *(undefined8 *)(param_1 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar16 = *(undefined8 *)(param_1 + 6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar9 = *(undefined8 *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar2 = *(undefined8 *)(param_1 + 10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar15 = *(undefined8 *)param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar3 = *(undefined8 *)(param_1 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 0x12);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x14);
      *(char *)(param_1 + 10) = (char)param_1[0x16];
      *(undefined8 *)param_1 = *(undefined8 *)puVar12;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 0xe);
      *(undefined8 *)puVar12 = uVar15;
      *(undefined8 *)(param_1 + 0xe) = uVar3;
      local_18 = (undefined1)uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined1 *)(param_1 + 0x16) = local_18;
      *(undefined8 *)(param_1 + 0x14) = uVar9;
      *(undefined8 *)(param_1 + 0x10) = uVar8;
      *(undefined8 *)(param_1 + 0x12) = uVar16;
      if (param_1[0xc] <= uVar5) goto LAB__text__002ac5c8; // [自动静态注释] 条件判断/分支
      local_30 = *(undefined8 *)(param_1 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_28 = (undefined5)*(undefined8 *)(param_1 + 0x12); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_23 = (undefined3)((ulong)*(undefined8 *)(param_1 + 0x12) >> 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_18 = (undefined1)*(undefined8 *)(param_1 + 0x16); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_20 = (undefined5)*(undefined8 *)(param_1 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_1b = (undefined3)((ulong)*(undefined8 *)(param_1 + 0x14) >> 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_40 = *(undefined8 *)puVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_38 = *(undefined8 *)(param_1 + 0xe); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x1c);
      *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_1 + 0x1e);
      *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_1 + 0x20);
      *(char *)(param_1 + 0x16) = (char)param_1[0x22];
      *(undefined8 *)puVar12 = *(undefined8 *)puVar7;
      *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_1 + 0x1a);
    } // [自动静态注释] 作用域/控制流边界
    *(undefined8 *)puVar7 = local_40;
    *(undefined8 *)(param_1 + 0x1a) = uStack_38;
    *(undefined1 *)(param_1 + 0x22) = local_18;
    *(ulong *)(param_1 + 0x1e) = CONCAT35(uStack_23,uStack_28);
    *(ulong *)(param_1 + 0x20) = CONCAT35(uStack_1b,local_20);
    *(undefined8 *)(param_1 + 0x1c) = local_30;
  } // [自动静态注释] 作用域/控制流边界
  else if (uVar5 < uVar4) { // [自动静态注释] 条件判断/分支
    uVar8 = *(undefined8 *)(param_1 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar16 = *(undefined8 *)(param_1 + 0x12); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar9 = *(undefined8 *)(param_1 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = *(undefined8 *)(param_1 + 0x16); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar15 = *(undefined8 *)puVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = *(undefined8 *)(param_1 + 0xe); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x1c);
    *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_1 + 0x1e);
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_1 + 0x20);
    *(char *)(param_1 + 0x16) = (char)param_1[0x22];
    *(undefined8 *)puVar12 = *(undefined8 *)puVar7;
    *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_1 + 0x1a);
    *(undefined8 *)puVar7 = uVar15;
    *(undefined8 *)(param_1 + 0x1a) = uVar3;
    local_18 = (undefined1)uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined1 *)(param_1 + 0x22) = local_18;
    *(undefined8 *)(param_1 + 0x20) = uVar9;
    *(undefined8 *)(param_1 + 0x1c) = uVar8;
    *(undefined8 *)(param_1 + 0x1e) = uVar16;
    if (*puVar12 < *param_1) { // [自动静态注释] 条件判断/分支
      uVar8 = *(undefined8 *)(param_1 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar16 = *(undefined8 *)(param_1 + 6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar9 = *(undefined8 *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar2 = *(undefined8 *)(param_1 + 10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar15 = *(undefined8 *)param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar3 = *(undefined8 *)(param_1 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 0x12);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x14);
      *(char *)(param_1 + 10) = (char)param_1[0x16];
      *(undefined8 *)param_1 = *(undefined8 *)puVar12;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 0xe);
      *(undefined8 *)puVar12 = uVar15;
      *(undefined8 *)(param_1 + 0xe) = uVar3;
      local_18 = (undefined1)uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined1 *)(param_1 + 0x16) = local_18;
      *(undefined8 *)(param_1 + 0x14) = uVar9;
      *(undefined8 *)(param_1 + 0x10) = uVar8;
      *(undefined8 *)(param_1 + 0x12) = uVar16;
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
LAB__text__002ac5c8: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (param_1 + 0x24 != param_2) { // [自动静态注释] 条件判断/分支
    lVar13 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar14 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar12 = param_1 + 0x24; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      uVar4 = *puVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (uVar4 < *puVar7) { // [自动静态注释] 条件判断/分支
        uVar8 = *(undefined8 *)(puVar12 + 5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar15 = *(undefined8 *)(puVar12 + 7); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar16 = *(undefined8 *)(puVar12 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uStack_23 = (undefined3)((ulong)uVar15 >> 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar9 = *(undefined8 *)(puVar12 + 3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        local_20 = (undefined5)*(undefined8 *)(puVar12 + 9); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar6 = lVar13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        do { // [自动静态注释] 循环/迭代
          lVar10 = lVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined8 *)((long)param_1 + lVar10 + 0xb0) =
               *(undefined8 *)((long)param_1 + lVar10 + 0x80);
          *(undefined8 *)((long)param_1 + lVar10 + 0xa0) =
               *(undefined8 *)((long)param_1 + lVar10 + 0x70);
          *(undefined8 *)((long)param_1 + lVar10 + 0xa8) =
               *(undefined8 *)((long)param_1 + lVar10 + 0x78);
          *(undefined1 *)((long)param_1 + lVar10 + 0xb8) =
               *(undefined1 *)((long)param_1 + lVar10 + 0x88);
          *(undefined8 *)((long)param_1 + lVar10 + 0x90) =
               *(undefined8 *)((long)param_1 + lVar10 + 0x60);
          *(undefined8 *)((long)param_1 + lVar10 + 0x98) =
               *(undefined8 *)((long)param_1 + lVar10 + 0x68);
          if (lVar10 == -0x60) { // [自动静态注释] 条件判断/分支
            puVar7 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            goto LAB__text__002ac5e4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          } // [自动静态注释] 作用域/控制流边界
          lVar6 = lVar10 + -0x30; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } while (uVar4 < *(uint *)((long)param_1 + lVar10 + 0x30)); // [自动静态注释] 循环/迭代
        puVar7 = (uint *)((long)param_1 + lVar10 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__002ac5e4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *puVar7 = uVar4;
        iVar14 = iVar14 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined8 *)(puVar7 + 5) = uVar8;
        *(undefined8 *)(puVar7 + 3) = uVar9;
        *(undefined8 *)(puVar7 + 7) = uVar15;
        *(undefined8 *)(puVar7 + 1) = uVar16;
        *(ulong *)((long)puVar7 + 0x21) = CONCAT53(local_20,uStack_23);
        if (iVar14 == 8) { // [自动静态注释] 条件判断/分支
          return (ulong)(puVar12 + 0xc == param_2); // [自动静态注释] 返回表达式；具体返回语义取决于调用者
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      puVar1 = puVar12 + 0xc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar13 = lVar13 + 0x30; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar7 = puVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar12 = puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (puVar1 != param_2); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



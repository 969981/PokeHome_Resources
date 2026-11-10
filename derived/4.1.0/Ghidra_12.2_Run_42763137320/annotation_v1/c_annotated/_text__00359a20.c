/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00259A20
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00359a20; name: FUN_.text__00359a20
 */


ulong FUN__text__00359a20(uint *param_1,uint *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint *puVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint *puVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar9 = (long)param_2 - (long)param_1 >> 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar9 < 6) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x00359a4c */
                    /* WARNING: Treating indirect jump as call */
    uVar9 = (*(code *)(&UNK__text__00359a5c + (ulong)*(byte *)(uVar9 + 0x734fc4) * 4))(1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    return uVar9; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  puVar10 = param_1 + 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = *puVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar6 = param_1 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = *puVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar3 < *param_1) { // [自动静态注释] 条件判断/分支
    if (uVar4 < uVar3) { // [自动静态注释] 条件判断/分支
      uVar7 = *(undefined8 *)param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar14 = *(undefined8 *)(param_1 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)param_1 = *(undefined8 *)puVar6;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 0x12);
      uVar13 = *(undefined8 *)(param_1 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar2 = *(undefined8 *)(param_1 + 6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 0x14);
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 0x16);
      *(undefined8 *)puVar6 = uVar7;
      *(undefined8 *)(param_1 + 0x12) = uVar14;
      *(undefined8 *)(param_1 + 0x14) = uVar13;
      *(undefined8 *)(param_1 + 0x16) = uVar2;
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar7 = *(undefined8 *)param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar14 = *(undefined8 *)(param_1 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)param_1 = *(undefined8 *)puVar10;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 10);
      uVar13 = *(undefined8 *)(param_1 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar2 = *(undefined8 *)(param_1 + 0xe); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)puVar10 = uVar7;
      *(undefined8 *)(param_1 + 10) = uVar14;
      *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_1 + 4);
      *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_1 + 6);
      *(undefined8 *)(param_1 + 4) = uVar13;
      *(undefined8 *)(param_1 + 6) = uVar2;
      if (uVar4 < param_1[8]) { // [自动静态注释] 条件判断/分支
        uVar7 = *(undefined8 *)puVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar14 = *(undefined8 *)(param_1 + 10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined8 *)puVar10 = *(undefined8 *)puVar6;
        *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_1 + 0x12);
        uVar13 = *(undefined8 *)(param_1 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar2 = *(undefined8 *)(param_1 + 0xe); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_1 + 0x14);
        *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_1 + 0x16);
        *(undefined8 *)puVar6 = uVar7;
        *(undefined8 *)(param_1 + 0x12) = uVar14;
        *(undefined8 *)(param_1 + 0x14) = uVar13;
        *(undefined8 *)(param_1 + 0x16) = uVar2;
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else if (uVar4 < uVar3) { // [自动静态注释] 条件判断/分支
    uVar7 = *(undefined8 *)puVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar13 = *(undefined8 *)(param_1 + 10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)puVar10 = *(undefined8 *)puVar6;
    *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_1 + 0x12);
    *(undefined8 *)puVar6 = uVar7;
    *(undefined8 *)(param_1 + 0x12) = uVar13;
    uVar7 = *(undefined8 *)(param_1 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar13 = *(undefined8 *)(param_1 + 0xe); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_1 + 0x14);
    *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_1 + 0x16);
    *(undefined8 *)(param_1 + 0x14) = uVar7;
    *(undefined8 *)(param_1 + 0x16) = uVar13;
    if (*puVar10 < *param_1) { // [自动静态注释] 条件判断/分支
      uVar7 = *(undefined8 *)param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar14 = *(undefined8 *)(param_1 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)param_1 = *(undefined8 *)puVar10;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 10);
      uVar13 = *(undefined8 *)(param_1 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar2 = *(undefined8 *)(param_1 + 6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 0xc);
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 0xe);
      *(undefined8 *)puVar10 = uVar7;
      *(undefined8 *)(param_1 + 10) = uVar14;
      *(undefined8 *)(param_1 + 0xc) = uVar13;
      *(undefined8 *)(param_1 + 0xe) = uVar2;
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  if (param_1 + 0x18 != param_2) { // [自动静态注释] 条件判断/分支
    lVar11 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar12 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar10 = param_1 + 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      uVar3 = *puVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (uVar3 < *puVar6) { // [自动静态注释] 条件判断/分支
        uVar7 = *(undefined8 *)(puVar10 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar13 = *(undefined8 *)(puVar10 + 3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar14 = *(undefined8 *)(puVar10 + 5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar4 = puVar10[7]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar5 = lVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        do { // [自动静态注释] 循环/迭代
          lVar8 = lVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined8 *)((long)param_1 + lVar8 + 0x60) =
               *(undefined8 *)((long)param_1 + lVar8 + 0x40);
          *(undefined8 *)((long)param_1 + lVar8 + 0x68) =
               *(undefined8 *)((long)param_1 + lVar8 + 0x48);
          *(undefined8 *)((long)param_1 + lVar8 + 0x70) =
               *(undefined8 *)((long)param_1 + lVar8 + 0x50);
          *(undefined8 *)((long)param_1 + lVar8 + 0x78) =
               *(undefined8 *)((long)param_1 + lVar8 + 0x58);
          if (lVar8 == -0x40) { // [自动静态注释] 条件判断/分支
            puVar6 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            goto LAB__text__00359d04; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          } // [自动静态注释] 作用域/控制流边界
          lVar5 = lVar8 + -0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } while (uVar3 < *(uint *)((long)param_1 + lVar8 + 0x20)); // [自动静态注释] 循环/迭代
        puVar6 = (uint *)((long)param_1 + lVar8 + 0x40); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__00359d04: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *puVar6 = uVar3;
        iVar12 = iVar12 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined8 *)(puVar6 + 1) = uVar7;
        *(undefined8 *)(puVar6 + 3) = uVar13;
        *(undefined8 *)(puVar6 + 5) = uVar14;
        puVar6[7] = uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (iVar12 == 8) { // [自动静态注释] 条件判断/分支
          return (ulong)(puVar10 + 8 == param_2); // [自动静态注释] 返回表达式；具体返回语义取决于调用者
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      puVar1 = puVar10 + 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar11 = lVar11 + 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar6 = puVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar10 = puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (puVar1 != param_2); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



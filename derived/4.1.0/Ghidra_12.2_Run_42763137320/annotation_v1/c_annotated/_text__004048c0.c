/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003048C0
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 内存顺序控制, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004048c0; name: FUN_.text__004048c0
 */


ulong FUN__text__004048c0(int param_1,long param_2,ulong param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int *piVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar15; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar16; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong *puVar17; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  iVar15 = (int)param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(uint *)(param_2 + 0xd00) < param_3) { // [自动静态注释] 条件判断/分支
    puVar17 = &DAT_00ae8a40 + (long)param_1 * 199; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar7 = *puVar17; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar8 = *(ulong *)(&DAT_00ae8a28 + (long)param_1 * 0x638); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((uVar7 < uVar8) || // [自动静态注释] 条件判断/分支
       (uVar11 = *(ulong *)(&DAT_00ae8a58 + (long)param_1 * 0x638), // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
       *(ulong *)(&DAT_00ae8a60 + (long)param_1 * 0x638) < uVar11)) {
      piVar1 = (int *)(&DAT_00ae8ff8 + (long)param_1 * 0x638); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__00404944: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if (*piVar1 == 0) goto code_r0x0040494c; // [自动静态注释] 条件判断/分支
      iVar5 = 1000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      do { // [自动静态注释] 循环/迭代
        Yield(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        iVar5 = iVar5 + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        while (*piVar1 == 0) { // [自动静态注释] 循环/迭代
          cVar3 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
          if (bVar4) { // [自动静态注释] 条件判断/分支
            *piVar1 = 1;
            cVar3 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
          } // [自动静态注释] 作用域/控制流边界
          if (cVar3 == '\0') goto LAB__text__004049f0; // [自动静态注释] 条件判断/分支
        } // [自动静态注释] 作用域/控制流边界
        ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } while (iVar5 != 0); // [自动静态注释] 循环/迭代
LAB__text__004049f0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if (iVar5 == 0) { // [自动静态注释] 条件判断/分支
        do { // [自动静态注释] 循环/迭代
          FUN__text__00405bf0(); // [自动静态注释] 调用尚未恢复正式名称的函数
          while (*piVar1 == 0) { // [自动静态注释] 循环/迭代
            cVar3 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
            if (bVar4) { // [自动静态注释] 条件判断/分支
              *piVar1 = 1;
              cVar3 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
            } // [自动静态注释] 作用域/控制流边界
            if (cVar3 == '\0') goto LAB__text__00404a30; // [自动静态注释] 条件判断/分支
          } // [自动静态注释] 作用域/控制流边界
          ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } while( true ); // [自动静态注释] 循环/迭代
      } // [自动静态注释] 作用域/控制流边界
LAB__text__00404a30: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar8 = *(ulong *)(&DAT_00ae8e70 + (long)param_1 * 0x638); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (uVar8 < param_3) { // [自动静态注释] 条件判断/分支
        uVar8 = *(ulong *)(&DAT_00ae8a28 + (long)param_1 * 0x638); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar4 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar11 = *(ulong *)(&DAT_00ae8a58 + (long)param_1 * 0x638); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar7 = *puVar17; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar13 = uVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (uVar11 <= param_3) { // [自动静态注释] 条件判断/分支
          uVar13 = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        if (uVar7 < uVar8) goto LAB__text__00404a6c; // [自动静态注释] 条件判断/分支
        goto LAB__text__00404a90; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      uVar7 = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*(int *)(param_2 + 0xd00) == 0) { // [自动静态注释] 条件判断/分支
        uVar7 = *(ulong *)(&DAT_00ae8a60 + (long)param_1 * 0x638); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      lVar16 = (long)param_1 * 0x638; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (uVar7 <= uVar8) { // [自动静态注释] 条件判断/分支
        uVar8 = uVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      uVar7 = *(ulong *)(&DAT_00ae8e68 + lVar16); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar9 = *(long *)(&DAT_00ae8e78 + lVar16); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (uVar7 - lVar9 != 0) { // [自动静态注释] 条件判断/分支
        *(undefined4 *)(uVar7 + 0x28) = 2;
        uVar11 = *(ulong *)(&DAT_00ae8a48 + (long)param_1 * 0x638); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined4 *)(uVar7 + 0x3c) = 0;
        *(int *)(uVar7 + 0x34) = (int)(uVar7 - lVar9 >> (uVar11 & 0x3f));
      } // [自动静态注释] 作用域/控制流边界
      *(int *)(uVar7 + 0x2c) = (int)uVar8;
      lVar9 = *(long *)(&DAT_00ae8e70 + (long)param_1 * 0x638) - uVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long *)(&DAT_00ae8e70 + (long)param_1 * 0x638) = lVar9;
      if (lVar9 == 0) { // [自动静态注释] 条件判断/分支
        *(long *)(&DAT_00ae8e68 + lVar16) = 0;
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *(ulong *)(&DAT_00ae8e68 + lVar16) =
             uVar7 + (uVar8 << (*(ulong *)(&DAT_00ae8a48 + (long)param_1 * 0x638) & 0x3f)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      if (param_3 < uVar8) { // [自动静态注释] 条件判断/分支
        uVar10 = *(undefined8 *)(&DAT_00ae8e78 + lVar16); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar11 = *(ulong *)(&DAT_00ae8a48 + (long)param_1 * 0x638); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(int *)(param_2 + 0xd00) = (int)uVar8 - iVar15;
        *(undefined8 *)(param_2 + 0xcf8) = uVar10;
        *(ulong *)(param_2 + 0xcf0) = uVar7 + (param_3 << (uVar11 & 0x3f));
      } // [自动静态注释] 作用域/控制流边界
      *(int *)(uVar7 + 0x2c) = iVar15;
      goto LAB__text__00404d5c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    bVar4 = false; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar13 = uVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar11 <= param_3) { // [自动静态注释] 条件判断/分支
      uVar13 = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    if (uVar7 < uVar8) { // [自动静态注释] 条件判断/分支
LAB__text__00404a6c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar14 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (uVar8 != 0) { // [自动静态注释] 条件判断/分支
        uVar14 = (uVar7 * uVar13) / uVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      if (uVar7 * uVar13 != uVar14 * uVar8) { // [自动静态注释] 条件判断/分支
        uVar8 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (uVar11 != 0) { // [自动静态注释] 条件判断/分支
          uVar8 = uVar13 / uVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        uVar13 = uVar11 + uVar8 * uVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
LAB__text__00404a90: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar11 = uVar13 * uVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_68 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar8 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar7 <= uVar11) { // [自动静态注释] 条件判断/分支
      if (uVar7 <= *(ulong *)(&DAT_00ae8a38 + (long)param_1 * 0x638)) { // [自动静态注释] 条件判断/分支
        uVar7 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      uVar8 = uVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    lVar16 = uVar8 + uVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    while (uVar11 = DAT_00ae89d0, uVar7 = DAT_00ae89d0 + lVar16, // [自动静态注释] 循环/迭代
          DAT_00ae89c8 == 0 || uVar7 <= DAT_00ae89c8) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      while (DAT_00ae89d0 == uVar11) { // [自动静态注释] 循环/迭代
        cVar3 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar2 = (bool)ExclusiveMonitorPass(0xae89d0,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
        if (bVar2) { // [自动静态注释] 条件判断/分支
          cVar3 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
          DAT_00ae89d0 = uVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        if (cVar3 == '\0') { // [自动静态注释] 条件判断/分支
          uVar7 = (**(code **)(&DAT_00ae89e0 + (long)param_1 * 0x638))(lVar16,&local_68); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if ((uVar8 != 0) && (uVar7 != 0)) { // [自动静态注释] 条件判断/分支
            uVar8 = uVar8 - (uVar7 & (*(ulong *)(&DAT_00ae8a50 + (long)param_1 * 0x638) ^ // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                                     0xffffffffffffffff)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            uVar7 = uVar7 + uVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar6 = (undefined4)(uVar8 >> 3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
          if (uVar7 != 0) { // [自动静态注释] 条件判断/分支
            *(undefined4 *)(uVar7 + 0x3c) = uVar6;
            *(undefined4 *)(uVar7 + 0x28) = 1;
            uVar8 = uVar13 - param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *(int *)(uVar7 + 0x2c) = iVar15;
            *(int *)(uVar7 + 0x30) = (int)uVar13;
            *(undefined8 *)(uVar7 + 0x58) = local_68;
            *(int *)(uVar7 + 0x38) = (int)uVar13;
            if (param_3 <= uVar13 && uVar8 != 0) { // [自动静态注释] 条件判断/分支
              lVar16 = uVar7 + *puVar17 * param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              iVar15 = *(int *)(param_2 + 0xd00); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              if (iVar15 != 0) { // [自动静态注释] 条件判断/分支
                lVar9 = *(long *)(param_2 + 0xcf0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                uVar11 = lVar9 - *(long *)(param_2 + 0xcf8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                if (uVar11 != 0) { // [自动静态注释] 条件判断/分支
                  *(undefined4 *)(lVar9 + 0x28) = 2;
                  uVar13 = *(ulong *)(&DAT_00ae8a48 + (long)param_1 * 0x638); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  *(undefined4 *)(lVar9 + 0x3c) = 0;
                  *(int *)(lVar9 + 0x34) = (int)(uVar11 >> (uVar13 & 0x3f));
                } // [自动静态注释] 作用域/控制流边界
                *(int *)(lVar9 + 0x2c) = iVar15;
                FUN__text__00404260(param_1,param_2,*(undefined8 *)(param_2 + 0xcf0)); // [自动静态注释] 调用尚未恢复正式名称的函数
              } // [自动静态注释] 作用域/控制流边界
              uVar11 = *(ulong *)(&DAT_00ae8a60 + (long)param_1 * 0x638); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              if (uVar11 <= uVar8 && uVar8 - uVar11 != 0) { // [自动静态注释] 条件判断/分支
                uVar13 = *puVar17; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                lVar9 = *(long *)(&DAT_00ae8e68 + (long)param_1 * 0x638); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                if (lVar9 != 0) { // [自动静态注释] 条件判断/分支
                  lVar12 = *(long *)(&DAT_00ae8e78 + (long)param_1 * 0x638); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  uVar10 = *(undefined8 *)(&DAT_00ae8e70 + (long)param_1 * 0x638); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  if (lVar9 - lVar12 != 0) { // [自动静态注释] 条件判断/分支
                    *(undefined4 *)(lVar9 + 0x28) = 2;
                    uVar14 = *(ulong *)(&DAT_00ae8a48 + (long)param_1 * 0x638); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    *(undefined4 *)(lVar9 + 0x3c) = 0;
                    *(int *)(lVar9 + 0x34) = (int)((ulong)(lVar9 - lVar12) >> (uVar14 & 0x3f));
                  } // [自动静态注释] 作用域/控制流边界
                  *(int *)(lVar9 + 0x2c) = (int)uVar10;
                  FUN__text__00404660(param_1,*(long *)(&DAT_00ae8e68 + (long)param_1 * 0x638)); // [自动静态注释] 调用尚未恢复正式名称的函数
                } // [自动静态注释] 作用域/控制流边界
                *(ulong *)(&DAT_00ae8e68 + (long)param_1 * 0x638) = lVar16 + uVar13 * uVar11;
                *(ulong *)(&DAT_00ae8e78 + (long)param_1 * 0x638) = uVar7;
                *(ulong *)(&DAT_00ae8e70 + (long)param_1 * 0x638) = uVar8 - uVar11;
                uVar8 = uVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              } // [自动静态注释] 作用域/控制流边界
              *(ulong *)(param_2 + 0xcf8) = uVar7;
              *(long *)(param_2 + 0xcf0) = lVar16;
              *(int *)(param_2 + 0xd00) = (int)uVar8;
            } // [自动静态注释] 作用域/控制流边界
          } // [自动静态注释] 作用域/控制流边界
          goto joined_r0x00404d94; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    uVar7 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
joined_r0x00404d94: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (bVar4) { // [自动静态注释] 条件判断/分支
LAB__text__00404d5c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *(undefined4 *)(&DAT_00ae8ff8 + (long)param_1 * 0x638) = 0;
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar7 = *(ulong *)(param_2 + 0xcf0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar16 = (&DAT_00ae8a40)[(long)param_1 * 199]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(uint *)(param_2 + 0xd00) = *(uint *)(param_2 + 0xd00) - iVar15;
    uVar8 = uVar7 - *(long *)(param_2 + 0xcf8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(ulong *)(param_2 + 0xcf0) = uVar7 + lVar16 * param_3;
    if (uVar8 != 0) { // [自动静态注释] 条件判断/分支
      *(undefined4 *)(uVar7 + 0x28) = 2;
      uVar11 = *(ulong *)(&DAT_00ae8a48 + (long)param_1 * 0x638); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(uVar7 + 0x3c) = 0;
      *(int *)(uVar7 + 0x34) = (int)(uVar8 >> (uVar11 & 0x3f));
    } // [自动静态注释] 作用域/控制流边界
    *(int *)(uVar7 + 0x2c) = iVar15;
  } // [自动静态注释] 作用域/控制流边界
  return uVar7; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
code_r0x0040494c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  cVar3 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
  if (bVar4) { // [自动静态注释] 条件判断/分支
    *piVar1 = 1;
    cVar3 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
  } // [自动静态注释] 作用域/控制流边界
  if (cVar3 == '\0') goto LAB__text__00404a30; // [自动静态注释] 条件判断/分支
  goto LAB__text__00404944; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
} // [自动静态注释] 作用域/控制流边界



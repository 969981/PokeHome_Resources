/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00305120
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00405120; name: FUN_.text__00405120
 */


undefined8 * FUN__text__00405120(int param_1,long param_2,undefined8 *param_3,uint param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong *puVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong *puVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong *puVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar14 = (ulong *)param_3[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (puVar14 != (ulong *)0x0) { // [自动静态注释] 条件判断/分支
    puVar12 = (undefined8 *)*puVar14; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (puVar12 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
      uVar1 = (uint)puVar14[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar4 = (ulong)uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar6 = (ulong)*(uint *)((long)puVar14 + 0x24); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar8 = (int)puVar14[1] - uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar12 = (undefined8 *)((long)puVar14 + uVar6 * uVar4 + 0x80); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar11 = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (1 < uVar8) { // [自动静态注释] 条件判断/分支
        puVar9 = (ulong *)((long)puVar12 + uVar6 * uVar8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar10 = *(ulong *)(&DAT_00ae8a28 + (long)param_1 * 0x638); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar11 = (undefined8 *)((long)puVar12 + uVar6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar13 = (ulong *)((-uVar10 & (ulong)puVar12) + uVar10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *param_3 = puVar11;
        if (puVar9 <= puVar13 || uVar10 >> 1 <= uVar6) { // [自动静态注释] 条件判断/分支
          puVar13 = puVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        if ((ulong *)((long)puVar11 + uVar6) < puVar13) { // [自动静态注释] 条件判断/分支
          puVar9 = puVar14 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          lVar7 = (uVar4 + 2) * uVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar8 = 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          do { // [自动静态注释] 循环/迭代
            uVar8 = uVar8 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *(ulong **)((long)puVar9 + uVar6 + uVar6 * uVar1) = (ulong *)((long)puVar9 + lVar7);
            puVar9 = (ulong *)((long)puVar9 + uVar6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } while ((ulong *)((long)puVar9 + lVar7) < puVar13); // [自动静态注释] 循环/迭代
          puVar11 = (undefined8 *)((long)puVar9 + uVar6 + uVar6 * uVar4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          uVar8 = 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      *puVar11 = 0;
      iVar5 = (int)puVar14[2] + uVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(int *)(puVar14 + 2) = iVar5;
      *(int *)((long)puVar14 + 0x14) = iVar5;
      uVar4 = puVar14[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *param_3 = *puVar12;
      *puVar14 = 0;
      *(int *)((long)puVar14 + 0x14) = (int)puVar14[2];
      uVar4 = puVar14[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    if (uVar4 == 0) { // [自动静态注释] 条件判断/分支
      uVar4 = *puVar14; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      puVar13 = puVar14 + 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        uVar4 = *puVar13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        cVar2 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar3 = (bool)ExclusiveMonitorPass(puVar13,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
        if (bVar3) { // [自动静态注释] 条件判断/分支
          *puVar13 = 0xffffffffffffffff;
          cVar2 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
        } // [自动静态注释] 作用域/控制流边界
      } while (cVar2 != '\0'); // [自动静态注释] 循环/迭代
      if (uVar4 == 0xffffffffffffffff) { // [自动静态注释] 条件判断/分支
        iVar5 = 1000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        do { // [自动静态注释] 循环/迭代
          Yield(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          iVar5 = iVar5 + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          do { // [自动静态注释] 循环/迭代
            uVar4 = *puVar13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            cVar2 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            bVar3 = (bool)ExclusiveMonitorPass(puVar13,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
            if (bVar3) { // [自动静态注释] 条件判断/分支
              *puVar13 = 0xffffffffffffffff;
              cVar2 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
            } // [自动静态注释] 作用域/控制流边界
          } while (cVar2 != '\0'); // [自动静态注释] 循环/迭代
        } while ((uVar4 == 0xffffffffffffffff) && (iVar5 != 0)); // [自动静态注释] 循环/迭代
        if (iVar5 == 0) { // [自动静态注释] 条件判断/分支
          while (uVar4 == 0xffffffffffffffff) { // [自动静态注释] 循环/迭代
            FUN__text__00405bf0(); // [自动静态注释] 调用尚未恢复正式名称的函数
            do { // [自动静态注释] 循环/迭代
              uVar4 = *puVar13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              cVar2 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              bVar3 = (bool)ExclusiveMonitorPass(puVar13,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
              if (bVar3) { // [自动静态注释] 条件判断/分支
                *puVar13 = 0xffffffffffffffff;
                cVar2 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
              } // [自动静态注释] 作用域/控制流边界
            } while (cVar2 != '\0'); // [自动静态注释] 循环/迭代
          } // [自动静态注释] 作用域/控制流边界
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      uVar6 = puVar14[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *puVar14 = uVar4;
      *(undefined4 *)(puVar14 + 4) = 0;
      *(int *)((long)puVar14 + 0x14) = *(int *)((long)puVar14 + 0x14) - (int)uVar6;
      puVar14[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    if ((uVar4 == 0) && ((uint)puVar14[1] <= (uint)puVar14[2])) { // [自动静态注释] 条件判断/分支
      lVar7 = param_2 + (ulong)param_4 * 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_3[1] = *(undefined8 *)(param_3[1] + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar13 = (ulong *)(lVar7 + 0x2d20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar7 = *(long *)(lVar7 + 0x2d20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (lVar7 != 0) { // [自动静态注释] 条件判断/分支
        *(ulong **)(lVar7 + 0x50) = puVar14;
        uVar4 = *puVar13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      puVar14[9] = uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *puVar13 = (ulong)puVar14;
      *(long *)(param_2 + 0xce8) = *(long *)(param_2 + 0xce8) + 1;
    } // [自动静态注释] 作用域/控制流边界
    return puVar12; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  lVar7 = FUN__text__004053a0(param_1,param_2,param_3,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (lVar7 == 0) { // [自动静态注释] 条件判断/分支
    return (undefined8 *)0x0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  puVar12 = (undefined8 *)FUN__text__004054d0(param_1,param_2,param_3,lVar7,param_4); // [自动静态注释] 调用尚未恢复正式名称的函数
  return puVar12; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



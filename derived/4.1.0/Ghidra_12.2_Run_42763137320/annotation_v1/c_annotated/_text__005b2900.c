/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004B2900
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 内存顺序控制, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005b2900; name: FUN_.text__005b2900
 */


LightEventType * FUN__text__005b2900(LightEventType *param_1,ulong param_2,long param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  LightEventType *pLVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  LightEventType LVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  LightEventType *pLVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  LightEventType *pLVar15; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  LightEventType *pLVar16; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar17; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  LightEventType *pLVar18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  LightEventType *pLVar19; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  LightEventType *pLVar20; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar21; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  LightEventType *pLVar22; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar6 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  LVar5 = (LightEventType)((byte)((uint)uVar6 >> 0xd) & 0x4f); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pLVar1 = param_1 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (*pLVar1 == (LightEventType)0x4f) { // [自动静态注释] 循环/迭代
    cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar7 = (bool)ExclusiveMonitorPass(pLVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar7) { // [自动静态注释] 条件判断/分支
      *pLVar1 = LVar5;
      cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
    if (cVar4 == '\0') goto LAB__text__005b29c4; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  pLVar9 = param_1 + 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar7 = (bool)ExclusiveMonitorPass(pLVar9,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar7) { // [自动静态注释] 条件判断/分支
      *pLVar9 = (LightEventType)((char)*pLVar9 + '\x01');
      cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar4 != '\0'); // [自动静态注释] 循环/迭代
  DataMemoryBarrier(2,3); // [自动静态注释] AArch64 独占访问或内存屏障
  do { // [自动静态注释] 循环/迭代
    if (*pLVar1 != (LightEventType)0x4f) { // [自动静态注释] 条件判断/分支
      do { // [自动静态注释] 循环/迭代
        ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        nn::os::WaitLightEvent(param_1); // [自动静态注释] nn::os 事件等待/通知
        while (*pLVar1 == (LightEventType)0x4f) { // [自动静态注释] 循环/迭代
          cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar7 = (bool)ExclusiveMonitorPass(pLVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
          if (bVar7) { // [自动静态注释] 条件判断/分支
            *pLVar1 = LVar5;
            cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
          } // [自动静态注释] 作用域/控制流边界
          if (cVar4 == '\0') goto LAB__text__005b29b4; // [自动静态注释] 条件判断/分支
        } // [自动静态注释] 作用域/控制流边界
      } while( true ); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar7 = (bool)ExclusiveMonitorPass(pLVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar7) { // [自动静态注释] 条件判断/分支
      *pLVar1 = LVar5;
      cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar4 != '\0'); // [自动静态注释] 循环/迭代
LAB__text__005b29b4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar7 = (bool)ExclusiveMonitorPass(pLVar9,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar7) { // [自动静态注释] 条件判断/分支
      *pLVar9 = (LightEventType)((char)*pLVar9 + -1);
      cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar4 != '\0'); // [自动静态注释] 循环/迭代
LAB__text__005b29c4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  pLVar19 = param_1 + 0xa0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pLVar9 = *(LightEventType **)pLVar19; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (pLVar9 != (LightEventType *)0x0) { // [自动静态注释] 条件判断/分支
    pLVar20 = pLVar19; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      pLVar22 = pLVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      pLVar18 = pLVar9 + 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*(ulong *)(pLVar9 + 0x28) < param_2) { // [自动静态注释] 条件判断/分支
        pLVar22 = pLVar20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        pLVar18 = pLVar9 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      pLVar9 = *(LightEventType **)pLVar18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      pLVar20 = pLVar22; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (pLVar9 != (LightEventType *)0x0); // [自动静态注释] 循环/迭代
    if (pLVar22 != pLVar19) { // [自动静态注释] 条件判断/分支
      do { // [自动静态注释] 循环/迭代
        uVar13 = *(ulong *)(pLVar22 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar3 = *(ulong *)(pLVar22 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar10 = (uVar3 + uVar13) - param_2 & -param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if ((long)uVar13 <= (long)uVar10) { // [自动静态注释] 条件判断/分支
          if (pLVar22 != pLVar19) { // [自动静态注释] 条件判断/分支
            uVar21 = (uVar3 + uVar13) - uVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            if ((uVar13 & param_3 - 1U) == 0) { // [自动静态注释] 条件判断/分支
              uVar17 = uVar3 - uVar21; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              if ((uVar3 < 0x101) && (uVar17 < uVar21)) { // [自动静态注释] 条件判断/分支
LAB__text__005b2aa4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                uVar10 = uVar13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                uVar21 = uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              } // [自动静态注释] 作用域/控制流边界
              else if (uVar17 < 0x81) { // [自动静态注释] 条件判断/分支
                if (uVar17 * 2 < uVar21) goto LAB__text__005b2aa4; // [自动静态注释] 条件判断/分支
              } // [自动静态注释] 作用域/控制流边界
            } // [自动静态注释] 作用域/控制流边界
            if (pLVar22 != pLVar19) { // [自动静态注释] 条件判断/分支
              pLVar9 = pLVar22 + -0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              if (*(ulong *)(pLVar22 + 0x28) == uVar21) { // [自动静态注释] 条件判断/分支
                lVar11 = *(long *)(pLVar22 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                if (lVar11 == 0) { // [自动静态注释] 条件判断/分支
                  pLVar20 = pLVar22; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  do { // [自动静态注释] 循环/迭代
                    bVar7 = pLVar20 == *(LightEventType **)(*(LightEventType **)pLVar20 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    pLVar20 = *(LightEventType **)pLVar20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  } while (bVar7); // [自动静态注释] 循环/迭代
                } // [自动静态注释] 作用域/控制流边界
                else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                  do { // [自动静态注释] 循环/迭代
                    lVar11 = *(long *)(lVar11 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  } while (lVar11 != 0); // [自动静态注释] 循环/迭代
                } // [自动静态注释] 作用域/控制流边界
                FUN__text__005b4ab0(pLVar19,pLVar22); // [自动静态注释] 调用尚未恢复正式名称的函数
                *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x98) + -1;
                *(undefined8 *)(pLVar22 + 8) = 0;
                *(undefined8 *)(pLVar22 + 0x10) = 0;
                *(undefined8 *)pLVar22 = 0;
              } // [自动静态注释] 作用域/控制流边界
              else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                lVar11 = *(long *)pLVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                pLVar9 = *(LightEventType **)(param_1 + 0x88); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                local_58 = uVar21; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                local_38 = uVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                if ((pLVar9 == (LightEventType *)0x0) || (pLVar9 == param_1 + 0x88)) { // [自动静态注释] 条件判断/分支
                  FUN__text__005b3ba0(param_1 + 8,&local_38,&local_58); // [自动静态注释] 调用尚未恢复正式名称的函数
                  uVar13 = (*(long *)(param_1 + 0x48) + *(long *)(param_1 + 0x40)) - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  pLVar9 = (LightEventType *) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                           (*(long *)(*(long *)(param_1 + 0x10) + (uVar13 / 0x38) * 8) + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                           (uVar13 % 0x38) * 0x48); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                } // [自动静态注释] 作用域/控制流边界
                else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                  pLVar9 = *(LightEventType **)(param_1 + 0x90); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  *(ulong *)(pLVar9 + 0x30) = uVar10;
                  *(ulong *)(pLVar9 + 0x38) = uVar21;
                  plVar12 = *(long **)(param_1 + 0x90); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  lVar2 = *plVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  plVar8 = (long *)plVar12[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  *plVar8 = lVar2;
                  *(long **)(lVar2 + 8) = plVar8;
                  *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + -1;
                  *plVar12 = 0;
                  plVar12[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                } // [自动静态注释] 作用域/控制流边界
                puVar14 = *(undefined8 **)(lVar11 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                *(long *)pLVar9 = lVar11;
                *(undefined8 **)(pLVar9 + 8) = puVar14;
                *(LightEventType **)(lVar11 + 8) = pLVar9;
                *puVar14 = pLVar9;
                *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 1;
                lVar11 = *(long *)(pLVar22 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                if (lVar11 == 0) { // [自动静态注释] 条件判断/分支
                  pLVar20 = pLVar22; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  do { // [自动静态注释] 循环/迭代
                    bVar7 = pLVar20 == *(LightEventType **)(*(LightEventType **)pLVar20 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    pLVar20 = *(LightEventType **)pLVar20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  } while (bVar7); // [自动静态注释] 循环/迭代
                } // [自动静态注释] 作用域/控制流边界
                else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                  do { // [自动静态注释] 循环/迭代
                    lVar11 = *(long *)(lVar11 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  } while (lVar11 != 0); // [自动静态注释] 循环/迭代
                } // [自动静态注释] 作用域/控制流边界
                FUN__text__005b4ab0(pLVar19,pLVar22); // [自动静态注释] 调用尚未恢复正式名称的函数
                *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x98) + -1;
                *(undefined8 *)(pLVar22 + 8) = 0;
                *(undefined8 *)(pLVar22 + 0x10) = 0;
                *(undefined8 *)pLVar22 = 0;
                uVar21 = *(long *)(pLVar22 + 0x28) - uVar21; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                *(ulong *)(pLVar22 + 0x28) = uVar21;
                pLVar20 = *(LightEventType **)(param_1 + 0xa0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                if (*(LightEventType **)(param_1 + 0xa0) == (LightEventType *)0x0) { // [自动静态注释] 条件判断/分支
LAB__text__005b2cc0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                  *(LightEventType **)(param_1 + 0xa0) = pLVar22;
                  pLVar20 = param_1 + 0xa8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  *(LightEventType **)(param_1 + 0xb0) = pLVar22;
                  pLVar15 = pLVar19; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__005b2cd0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                  *(LightEventType **)pLVar20 = pLVar22;
                } // [自动静态注释] 作用域/控制流边界
                else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                  do { // [自动静态注释] 循环/迭代
                    pLVar15 = pLVar20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    pLVar18 = pLVar15 + 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    if (*(ulong *)(pLVar15 + 0x28) <= uVar21) { // [自动静态注释] 条件判断/分支
                      pLVar18 = pLVar15 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    } // [自动静态注释] 作用域/控制流边界
                    pLVar20 = *(LightEventType **)pLVar18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  } while (*(LightEventType **)pLVar18 != (LightEventType *)0x0); // [自动静态注释] 循环/迭代
                  if (pLVar15 == pLVar19) goto LAB__text__005b2cc0; // [自动静态注释] 条件判断/分支
                  if (uVar21 < *(ulong *)(pLVar15 + 0x28)) { // [自动静态注释] 条件判断/分支
                    *(LightEventType **)(pLVar15 + 8) = pLVar22;
                    pLVar20 = param_1 + 0xa8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    pLVar18 = *(LightEventType **)pLVar20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  } // [自动静态注释] 作用域/控制流边界
                  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    *(LightEventType **)(pLVar15 + 0x10) = pLVar22;
                    pLVar20 = param_1 + 0xb0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    pLVar18 = *(LightEventType **)pLVar20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  } // [自动静态注释] 作用域/控制流边界
                  if (pLVar15 == pLVar18) goto LAB__text__005b2cd0; // [自动静态注释] 条件判断/分支
                } // [自动静态注释] 作用域/控制流边界
                *(undefined8 *)(pLVar22 + 0x10) = 0;
                *(LightEventType **)pLVar22 = pLVar15;
                *(undefined8 *)(pLVar22 + 8) = 0;
                FUN__text__005b4940(pLVar19,pLVar22); // [自动静态注释] 调用尚未恢复正式名称的函数
                *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x98) + 1;
              } // [自动静态注释] 作用域/控制流边界
              if (param_1[0xc0] == (LightEventType)0x0) goto LAB__text__005b2ae4; // [自动静态注释] 条件判断/分支
              pLVar20 = param_1 + 0x70; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              pLVar22 = *(LightEventType **)pLVar20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              if (pLVar22 == pLVar20) { // [自动静态注释] 条件判断/分支
                lVar11 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__005b2d58: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                if (lVar11 == *(long *)(param_1 + 200)) { // [自动静态注释] 条件判断/分支
                  pLVar18 = *(LightEventType **)(param_1 + 0xa8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  if (pLVar18 == pLVar19) goto LAB__text__005b2ae4; // [自动静态注释] 条件判断/分支
                  uVar13 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  while( true ) { // [自动静态注释] 循环/迭代
                    uVar10 = *(ulong *)(pLVar18 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    uVar3 = uVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    if (uVar10 <= uVar13) { // [自动静态注释] 条件判断/分支
                      uVar3 = uVar13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    } // [自动静态注释] 作用域/控制流边界
                    if (uVar10 < uVar13) break; // [自动静态注释] 条件判断/分支
                    pLVar15 = *(LightEventType **)(pLVar18 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    if (*(LightEventType **)(pLVar18 + 0x10) == (LightEventType *)0x0) { // [自动静态注释] 条件判断/分支
                      do { // [自动静态注释] 循环/迭代
                        pLVar15 = pLVar18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                        pLVar16 = *(LightEventType **)pLVar15; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                        pLVar18 = pLVar16; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                      } while (pLVar15 == *(LightEventType **)(pLVar16 + 0x10)); // [自动静态注释] 循环/迭代
                      pLVar18 = pLVar15; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                      if (*(LightEventType **)(pLVar15 + 0x10) != pLVar16) { // [自动静态注释] 条件判断/分支
                        pLVar18 = pLVar16; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                      } // [自动静态注释] 作用域/控制流边界
                    } // [自动静态注释] 作用域/控制流边界
                    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                      do { // [自动静态注释] 循环/迭代
                        pLVar18 = pLVar15; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                        pLVar15 = *(LightEventType **)(pLVar18 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                      } while (*(LightEventType **)(pLVar18 + 8) != (LightEventType *)0x0); // [自动静态注释] 循环/迭代
                    } // [自动静态注释] 作用域/控制流边界
                    uVar13 = uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    if (pLVar18 == pLVar19) goto LAB__text__005b2ae4; // [自动静态注释] 条件判断/分支
                  } // [自动静态注释] 作用域/控制流边界
                } // [自动静态注释] 作用域/控制流边界
              } // [自动静态注释] 作用域/控制流边界
              else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                lVar11 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                pLVar18 = pLVar22; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                while (*(long *)(pLVar18 + 0x30) == lVar11) { // [自动静态注释] 循环/迭代
                  lVar11 = *(long *)(pLVar18 + 0x38) + lVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  pLVar18 = *(LightEventType **)pLVar18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  if (pLVar18 == pLVar20) goto LAB__text__005b2d58; // [自动静态注释] 条件判断/分支
                } // [自动静态注释] 作用域/控制流边界
              } // [自动静态注释] 作用域/控制流边界
              for (; pLVar22 != pLVar20; pLVar22 = *(LightEventType **)pLVar22) { // [自动静态注释] 循环/迭代
                if (-1 < *(int *)(pLVar22 + 0x40)) { // [自动静态注释] 条件判断/分支
                  plVar8 = (long *)FUN__text__005f53a0(); // [自动静态注释] 调用尚未恢复正式名称的函数
                  (**(code **)(*plVar8 + 0x10))(plVar8,*(undefined4 *)(pLVar22 + 0x40)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                } // [自动静态注释] 作用域/控制流边界
              } // [自动静态注释] 作用域/控制流边界
              pLVar20 = *(LightEventType **)(param_1 + 0xa8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              while (pLVar20 != pLVar19) { // [自动静态注释] 循环/迭代
                pLVar22 = *(LightEventType **)(pLVar20 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                if (*(LightEventType **)(pLVar20 + 0x10) == (LightEventType *)0x0) { // [自动静态注释] 条件判断/分支
                  do { // [自动静态注释] 循环/迭代
                    pLVar22 = pLVar20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    pLVar18 = *(LightEventType **)pLVar22; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    pLVar20 = pLVar18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  } while (pLVar22 == *(LightEventType **)(pLVar18 + 0x10)); // [自动静态注释] 循环/迭代
                  pLVar20 = pLVar22; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  if (*(LightEventType **)(pLVar22 + 0x10) != pLVar18) { // [自动静态注释] 条件判断/分支
                    pLVar20 = pLVar18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  } // [自动静态注释] 作用域/控制流边界
                } // [自动静态注释] 作用域/控制流边界
                else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                  do { // [自动静态注释] 循环/迭代
                    pLVar20 = pLVar22; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    pLVar22 = *(LightEventType **)(pLVar20 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  } while (*(LightEventType **)(pLVar20 + 8) != (LightEventType *)0x0); // [自动静态注释] 循环/迭代
                } // [自动静态注释] 作用域/控制流边界
              } // [自动静态注释] 作用域/控制流边界
              goto LAB__text__005b2ae4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            } // [自动静态注释] 作用域/控制流边界
          } // [自动静态注释] 作用域/控制流边界
          break; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        pLVar9 = *(LightEventType **)(pLVar22 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (*(LightEventType **)(pLVar22 + 0x10) == (LightEventType *)0x0) { // [自动静态注释] 条件判断/分支
          do { // [自动静态注释] 循环/迭代
            pLVar9 = pLVar22; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            pLVar20 = *(LightEventType **)pLVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            pLVar22 = pLVar20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } while (pLVar9 == *(LightEventType **)(pLVar20 + 0x10)); // [自动静态注释] 循环/迭代
          pLVar22 = pLVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (*(LightEventType **)(pLVar9 + 0x10) != pLVar20) { // [自动静态注释] 条件判断/分支
            pLVar22 = pLVar20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
        } // [自动静态注释] 作用域/控制流边界
        else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          do { // [自动静态注释] 循环/迭代
            pLVar22 = pLVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            pLVar9 = *(LightEventType **)(pLVar22 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } while (*(LightEventType **)(pLVar22 + 8) != (LightEventType *)0x0); // [自动静态注释] 循环/迭代
        } // [自动静态注释] 作用域/控制流边界
      } while (pLVar22 != pLVar19); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  pLVar9 = (LightEventType *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__005b2ae4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar7 = (bool)ExclusiveMonitorPass(pLVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar7) { // [自动静态注释] 条件判断/分支
      *pLVar1 = (LightEventType)0x4f;
      cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar4 != '\0'); // [自动静态注释] 循环/迭代
  DataMemoryBarrier(2,3); // [自动静态注释] AArch64 独占访问或内存屏障
  if (param_1[3] != (LightEventType)0x0) { // [自动静态注释] 条件判断/分支
    nn::os::SignalLightEvent(param_1); // [自动静态注释] nn::os 事件等待/通知
  } // [自动静态注释] 作用域/控制流边界
  return pLVar9; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



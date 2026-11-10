/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003ECAB0
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ecab0; name: FUN_.text__004ecab0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004ecab0(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(undefined1 *)(param_1 + 0x94) = 1;
  uVar7 = FUN__text__004f53e0(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x80)); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*(long **)(param_1 + 0x78) != (long *)0x0) { // [自动静态注释] 条件判断/分支
    uVar3 = *(undefined4 *)(param_1 + 0x90); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar6 = (**(code **)(**(long **)(param_1 + 0x78) + 0x280))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar6 != 0) { // [自动静态注释] 条件判断/分支
      uVar12 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar1 = _DAT_008a5100 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        lVar9 = FUN__text__004f41b8(*(undefined8 *)(param_1 + 0x78),uVar12); // [自动静态注释] 调用尚未恢复正式名称的函数
        if (*(int *)(lVar9 + 300) == 3) { // [自动静态注释] 条件判断/分支
          for (lVar13 = *(long *)(param_1 + 0x88); lVar13 != 0; lVar13 = *(long *)(lVar13 + 0x70)) { // [自动静态注释] 循环/迭代
            if (*(long *)(lVar13 + 0x50) == lVar9) { // [自动静态注释] 条件判断/分支
              if (*(int *)(lVar9 + 0x110) != 0) { // [自动静态注释] 条件判断/分支
                uVar8 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                piVar2 = (int *)(lVar9 + 0x24); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                do { // [自动静态注释] 循环/迭代
                  uVar10 = FUN__text__004edb20(lVar13,uVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
                  if (((uVar10 & 1) != 0) && // [自动静态注释] 条件判断/分支
                     (plVar11 = (long *)FUN__text__00400f80(0,0x38), plVar11 != (long *)0x0)) { // [自动静态注释] 调用尚未恢复正式名称的函数
                    *(undefined4 *)(plVar11 + 2) = uVar7;
                    plVar11[3] = lVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    *(uint *)(plVar11 + 4) = uVar8;
                    *(undefined4 *)((long)plVar11 + 0x24) = 0;
                    *(undefined4 *)(plVar11 + 6) = uVar3;
                    *plVar11 = lVar1;
                    do { // [自动静态注释] 循环/迭代
                      cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
                      if (bVar5) { // [自动静态注释] 条件判断/分支
                        *piVar2 = *piVar2 + 1;
                        cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
                      } // [自动静态注释] 作用域/控制流边界
                    } while (cVar4 != '\0'); // [自动静态注释] 循环/迭代
                    FUN__text__004ed750(param_1 + 0x60,plVar11); // [自动静态注释] 调用尚未恢复正式名称的函数
                  } // [自动静态注释] 作用域/控制流边界
                  uVar8 = uVar8 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                } while (uVar8 < *(uint *)(lVar9 + 0x110)); // [自动静态注释] 循环/迭代
              } // [自动静态注释] 作用域/控制流边界
              break; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            } // [自动静态注释] 作用域/控制流边界
          } // [自动静态注释] 作用域/控制流边界
          FUN__text__004ecd40(param_1,uVar7,lVar9); // [自动静态注释] 调用尚未恢复正式名称的函数
        } // [自动静态注释] 作用域/控制流边界
        else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          uVar8 = FUN__text__004ef6d0(lVar9); // [自动静态注释] 调用尚未恢复正式名称的函数
          plVar11 = (long *)FUN__text__00400f80(0,0x38); // [自动静态注释] 调用尚未恢复正式名称的函数
          if (plVar11 != (long *)0x0) { // [自动静态注释] 条件判断/分支
            *(undefined4 *)(plVar11 + 2) = uVar7;
            lVar13 = _DAT_008a5100; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *(uint *)(plVar11 + 4) = uVar8 & 0xffff;
            *(undefined4 *)((long)plVar11 + 0x24) = 0;
            piVar2 = (int *)(lVar9 + 0x24); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            plVar11[3] = lVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *(undefined4 *)(plVar11 + 6) = uVar3;
            *plVar11 = lVar13 + 0x10;
            do { // [自动静态注释] 循环/迭代
              cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
              if (bVar5) { // [自动静态注释] 条件判断/分支
                *piVar2 = *piVar2 + 1;
                cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
              } // [自动静态注释] 作用域/控制流边界
            } while (cVar4 != '\0'); // [自动静态注释] 循环/迭代
            FUN__text__004ed750(param_1 + 0x60,plVar11); // [自动静态注释] 调用尚未恢复正式名称的函数
          } // [自动静态注释] 作用域/控制流边界
        } // [自动静态注释] 作用域/控制流边界
        uVar12 = uVar12 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (uVar12 != uVar6); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003AAA30
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004aaa30; name: FUN_.text__004aaa30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004aaa30(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int *piVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uStack_21; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar8 = *(long **)(param_2 + 0x50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar6 = plVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(int *)(param_2 + 0x58) != 0) { // [自动静态注释] 条件判断/分支
    do { // [自动静态注释] 循环/迭代
      FUN__text__00411c2c(&uStack_21); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (plVar8 != (long *)(*(long *)(param_2 + 0x50) + (ulong)*(uint *)(param_2 + 0x58) * 8)) { // [自动静态注释] 条件判断/分支
        cVar9 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        do { // [自动静态注释] 循环/迭代
          plVar6 = (long *)*plVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          piVar1 = (int *)((long)plVar6 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          do { // [自动静态注释] 循环/迭代
            iVar2 = *piVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            cVar3 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
            if (bVar4) { // [自动静态注释] 条件判断/分支
              *piVar1 = iVar2 + -1;
              cVar3 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
            } // [自动静态注释] 作用域/控制流边界
          } while (cVar3 != '\0'); // [自动静态注释] 循环/迭代
          if (iVar2 + -1 == 0) { // [自动静态注释] 条件判断/分支
            (**(code **)(*plVar6 + 0x20))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          } // [自动静态注释] 作用域/控制流边界
          plVar8 = plVar8 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } while ((plVar8 != (long *)(*(long *)(param_2 + 0x50) + // [自动静态注释] 循环/迭代
                                    (ulong)*(uint *)(param_2 + 0x58) * 8)) && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                (cVar9 = cVar9 + '\x01', cVar9 != '\0')); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      FUN__text__00411c70(&uStack_21); // [自动静态注释] 调用尚未恢复正式名称的函数
      plVar6 = *(long **)(param_2 + 0x50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (plVar8 != *(long **)(param_2 + 0x50) + *(uint *)(param_2 + 0x58)); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  if (plVar6 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(param_2 + 0x58) = 0;
    FUN__text__00400fc0(0,plVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined4 *)(param_2 + 0x5c) = 0;
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)(param_2 + 0x40) = param_3;
  *(undefined8 *)(param_2 + 0x48) = param_4;
  *(undefined1 *)(param_2 + 0x30) = 1;
  plVar8 = _DAT_008a45c0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar7 = *_DAT_008a45c0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = FUN__text__004af708(); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar7 = FUN__text__004b0170(lVar7,0x1a,uVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(long *)(lVar7 + 4) = param_2;
  piVar1 = (int *)(*plVar8 + 0xd4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    cVar9 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar4) { // [自动静态注释] 条件判断/分支
      *piVar1 = *piVar1 + -1;
      cVar9 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar9 != '\0'); // [自动静态注释] 循环/迭代
  FUN__text__004b0020(*plVar8,0,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



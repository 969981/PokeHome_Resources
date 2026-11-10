/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003A1F20
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004a1f20; name: FUN_.text__004a1f20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004a1f20(undefined8 *param_1,ulong param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int *piVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uStack_11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  nn::os::LockMutex((MutexType *)&DAT_00aea968); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  piVar1 = (int *)((long)param_1 + 100); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((param_2 & 1) == 0) { // [自动静态注释] 条件判断/分支
    do { // [自动静态注释] 循环/迭代
      iVar2 = *piVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      cVar7 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
      if (bVar4) { // [自动静态注释] 条件判断/分支
        *piVar1 = iVar2 + -1;
        cVar7 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
      } // [自动静态注释] 作用域/控制流边界
    } while (cVar7 != '\0'); // [自动静态注释] 循环/迭代
    if (0 < iVar2 + -1) goto LAB__text__004a1f8c; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *piVar1 = 0;
  } // [自动静态注释] 作用域/控制流边界
  plVar6 = _DAT_008a4630; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__004a20f0(*_DAT_008a4630,param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*(int *)(param_1 + 0xc) < 1) { // [自动静态注释] 条件判断/分支
    FUN__text__004adb30(*plVar6 + 0xa8,*param_1,0); // [自动静态注释] 调用尚未恢复正式名称的函数
    nn::os::UnlockMutex((MutexType *)&DAT_00aea968); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    plVar6 = (long *)param_1[10]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar5 = plVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(int *)(param_1 + 0xb) != 0) { // [自动静态注释] 条件判断/分支
      do { // [自动静态注释] 循环/迭代
        FUN__text__00411c2c(&uStack_11); // [自动静态注释] 调用尚未恢复正式名称的函数
        if (plVar6 != (long *)(param_1[10] + (ulong)*(uint *)(param_1 + 0xb) * 8)) { // [自动静态注释] 条件判断/分支
          cVar7 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          do { // [自动静态注释] 循环/迭代
            plVar5 = (long *)*plVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            piVar1 = (int *)((long)plVar5 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
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
              (**(code **)(*plVar5 + 0x20))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            } // [自动静态注释] 作用域/控制流边界
            plVar6 = plVar6 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } while ((plVar6 != (long *)(param_1[10] + (ulong)*(uint *)(param_1 + 0xb) * 8)) && // [自动静态注释] 循环/迭代
                  (cVar7 = cVar7 + '\x01', cVar7 != '\0')); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        FUN__text__00411c70(&uStack_11); // [自动静态注释] 调用尚未恢复正式名称的函数
        plVar5 = (long *)param_1[10]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (plVar6 != (long *)param_1[10] + *(uint *)(param_1 + 0xb)); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    if (plVar5 != (long *)0x0) { // [自动静态注释] 条件判断/分支
      *(undefined4 *)(param_1 + 0xb) = 0;
      FUN__text__00400fc0(0,plVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
      param_1[10] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)((long)param_1 + 0x5c) = 0;
    } // [自动静态注释] 作用域/控制流边界
    if (param_1[3] != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__00400fc0(((*(byte *)(param_1 + 0xd) & 8) >> 3) << 0x1e | 0x20000003); // [自动静态注释] 调用尚未恢复正式名称的函数
      param_1[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__004a1b7c(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__00400fc0(0,param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
LAB__text__004a1f8c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  nn::os::UnlockMutex((MutexType *)&DAT_00aea968); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00314440
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 内存顺序控制, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00414440; name: FUN_.text__00414440
 */


long * FUN__text__00414440(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  MutexType *pMVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  pMVar1 = (MutexType *)(param_1 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  nn::os::LockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  plVar6 = (long *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  nn::os::UnlockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    if (plVar6 == (long *)0x0) { // [自动静态注释] 条件判断/分支
      lVar5 = FUN__text__00400f90(0x12,*(undefined4 *)((long)param_1 + 0x2c), // [自动静态注释] 调用尚未恢复正式名称的函数
                                  *(undefined4 *)((long)param_1 + 0x2c));
      if (lVar5 == 0) { // [自动静态注释] 条件判断/分支
        return (long *)0x0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      *(int *)((long)param_1 + 0x44) = *(int *)((long)param_1 + 0x44) + 1;
      plVar6 = (long *)(lVar5 + (ulong)*(uint *)(param_1 + 6)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar6[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar6[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *plVar6 = 0;
      *(int *)(plVar6 + 1) = (int)param_1[6];
      *(undefined4 *)((long)plVar6 + 0x14) = 1;
      nn::os::LockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if (*param_1 == 0) { // [自动静态注释] 条件判断/分支
        *param_1 = (long)plVar6;
        *plVar6 = 0;
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *plVar6 = *param_1;
        *param_1 = (long)plVar6;
      } // [自动静态注释] 作用域/控制流边界
      nn::os::UnlockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      return plVar6; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    piVar2 = (int *)((long)plVar6 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      if (*piVar2 != 0) { // [自动静态注释] 条件判断/分支
        ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        goto LAB__text__00414484; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      cVar3 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
      if (bVar4) { // [自动静态注释] 条件判断/分支
        *piVar2 = 1;
        cVar3 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
      } // [自动静态注释] 作用域/控制流边界
    } while (cVar3 != '\0'); // [自动静态注释] 循环/迭代
    if (-1 < (int)*(uint *)(plVar6 + 2)) { // [自动静态注释] 条件判断/分支
      return plVar6; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    if (*(uint *)((long)plVar6 + 0xc) == (*(uint *)(plVar6 + 2) & 0x7fffffff)) { // [自动静态注释] 条件判断/分支
      *(int *)(plVar6 + 1) = (int)param_1[6];
      *(undefined4 *)((long)plVar6 + 0xc) = 0;
      *(undefined4 *)(plVar6 + 2) = 0;
      return plVar6; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
LAB__text__00414484: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    plVar6 = (long *)*plVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while( true ); // [自动静态注释] 循环/迭代
} // [自动静态注释] 作用域/控制流边界



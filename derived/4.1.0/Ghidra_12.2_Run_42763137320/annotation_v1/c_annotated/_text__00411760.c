/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00311760
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 内存顺序控制, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00411760; name: FUN_.text__00411760
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00411760(int *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int *piVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float *pfVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  nn::os::LockMutex((MutexType *)(param_1 + 4)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  pfVar5 = _DAT_008a46b8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  piVar1 = param_1 + 0xc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    while( true ) { // [自动静态注释] 循环/迭代
      iVar2 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (0 < iVar2) break; // [自动静态注释] 条件判断/分支
      while (*param_1 == iVar2) { // [自动静态注释] 循环/迭代
        cVar3 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
        if (bVar4) { // [自动静态注释] 条件判断/分支
          *param_1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
        } // [自动静态注释] 作用域/控制流边界
        if (cVar3 == '\0') { // [自动静态注释] 条件判断/分支
          uVar8 = nn::os::GetCurrentThread(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined8 *)(param_1 + 2) = uVar8;
          return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    if (*param_1 != 0) { // [自动静态注释] 条件判断/分支
      lVar6 = nn::os::GetSystemTick(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar9 = *pfVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        if (*param_1 == 0) break; // [自动静态注释] 条件判断/分支
        Yield(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        lVar7 = nn::os::GetSystemTick(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (lVar7 <= lVar6 + (long)(fVar9 * 0.01)); // [自动静态注释] 循环/迭代
      while (*param_1 != 0) { // [自动静态注释] 循环/迭代
        FUN__text__00405bf0(); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    do { // [自动静态注释] 循环/迭代
      cVar3 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
      if (bVar4) { // [自动静态注释] 条件判断/分支
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
      } // [自动静态注释] 作用域/控制流边界
    } while (cVar3 != '\0'); // [自动静态注释] 循环/迭代
    if (*param_1 != 0) { // [自动静态注释] 条件判断/分支
      nn::os::WaitEvent((EventType *)(param_1 + 0xe)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    do { // [自动静态注释] 循环/迭代
      cVar3 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
      if (bVar4) { // [自动静态注释] 条件判断/分支
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
      } // [自动静态注释] 作用域/控制流边界
    } while (cVar3 != '\0'); // [自动静态注释] 循环/迭代
  } while( true ); // [自动静态注释] 循环/迭代
} // [自动静态注释] 作用域/控制流边界



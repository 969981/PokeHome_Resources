/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0041C420
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 内存顺序控制, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0051c420; name: FUN_.text__0051c420
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0051c420(long *param_1,undefined8 param_2,undefined8 param_3,int param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  param_1[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  piVar6 = _DAT_008a4048; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while( true ) { // [自动静态注释] 循环/迭代
    while (iVar3 = *piVar6, -1 < iVar3) { // [自动静态注释] 循环/迭代
      while (*piVar6 == iVar3) { // [自动静态注释] 循环/迭代
        cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar5 = (bool)ExclusiveMonitorPass(piVar6,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
        if (bVar5) { // [自动静态注释] 条件判断/分支
          *piVar6 = iVar3 + 1;
          cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
        } // [自动静态注释] 作用域/控制流边界
        if (cVar4 == '\0') goto LAB__text__0051c4a8; // [自动静态注释] 条件判断/分支
      } // [自动静态注释] 作用域/控制流边界
      ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    nn::os::LockMutex((MutexType *)(piVar6 + 4)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (*piVar6 < 0) break; // [自动静态注释] 条件判断/分支
    nn::os::UnlockMutex((MutexType *)(piVar6 + 4)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
LAB__text__0051c4a8: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  lVar7 = FUN__text__0051e4e0(param_3,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (lVar7 != 0) { // [自动静态注释] 条件判断/分支
    lVar1 = lVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (param_4 != 0) { // [自动静态注释] 条件判断/分支
      lVar1 = lVar7 + 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    param_1[2] = lVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (param_4 != 0) { // [自动静态注释] 条件判断/分支
      lVar2 = 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    plVar8 = *(long **)(lVar7 + lVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *param_1 = (long)plVar8;
    if ((plVar8 != (long *)(*(long *)(lVar7 + lVar2) + (ulong)*(uint *)(lVar1 + 8) * 0x20)) && // [自动静态注释] 条件判断/分支
       (lVar7 = *plVar8, param_1[1] = lVar7, lVar7 == *plVar8 + (ulong)*(uint *)(plVar8 + 1) * 8)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *param_1 = (long)(plVar8 + 4);
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003AA040
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004aa040; name: FUN_.text__004aa040
 */


void FUN__text__004aa040(long param_1,uint param_2,long *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  MutexType *pMVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  pMVar1 = (MutexType *)(param_1 + 0x68); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  nn::os::LockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar3 = *(uint *)(param_1 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar3 != 0) { // [自动静态注释] 条件判断/分支
    uVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar3 != 0) { // [自动静态注释] 条件判断/分支
      uVar6 = param_2 / uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    plVar7 = (long *)(*(long *)(param_1 + 0x90) + (ulong)(param_2 - uVar6 * uVar3) * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    while (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0) { // [自动静态注释] 循环/迭代
      if (*(uint *)(plVar7 + 1) == param_2) { // [自动静态注释] 条件判断/分支
        FUN__text__004aa0f0(plVar7 + 2,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
        if (*param_3 != 0) { // [自动静态注释] 条件判断/分支
          piVar2 = (int *)(*param_3 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          do { // [自动静态注释] 循环/迭代
            cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
            if (bVar5) { // [自动静态注释] 条件判断/分支
              *piVar2 = *piVar2 + 1;
              cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
            } // [自动静态注释] 作用域/控制流边界
          } while (cVar4 != '\0'); // [自动静态注释] 循环/迭代
        } // [自动静态注释] 作用域/控制流边界
        nn::os::UnlockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(param_3 + 2) = 0;
  *param_3 = 0;
  param_3[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  nn::os::UnlockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



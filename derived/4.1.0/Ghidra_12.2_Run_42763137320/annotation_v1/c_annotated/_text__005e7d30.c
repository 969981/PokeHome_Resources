/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004E7D30
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 内存顺序控制, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e7d30; name: FUN_.text__005e7d30
 */


bool FUN__text__005e7d30(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int *piVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(long *)(param_1 + 0x60) == *(long *)(param_1 + 0x68)) { // [自动静态注释] 条件判断/分支
    return true; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  piVar1 = (int *)(param_1 + 0x140); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar5 = *(int *)(param_1 + 0x140) + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar6 = *piVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (iVar6 == *(int *)(param_1 + 0x140)) { // [自动静态注释] 条件判断/分支
    cVar3 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar4) { // [自动静态注释] 条件判断/分支
      *piVar1 = iVar5;
      cVar3 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
    if (cVar3 == '\0') { // [自动静态注释] 条件判断/分支
LAB__text__005e7d7c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      return (long)iVar5 == *(long *)(param_1 + 0x68) - *(long *)(param_1 + 0x60) >> 3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  do { // [自动静态注释] 循环/迭代
    iVar2 = *piVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar5 = iVar6 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (iVar2 == iVar6) { // [自动静态注释] 条件判断/分支
      cVar3 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
      if (bVar4) { // [自动静态注释] 条件判断/分支
        *piVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
      } // [自动静态注释] 作用域/控制流边界
      if (cVar3 == '\0') goto LAB__text__005e7d7c; // [自动静态注释] 条件判断/分支
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    iVar6 = iVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while( true ); // [自动静态注释] 循环/迭代
} // [自动静态注释] 作用域/控制流边界



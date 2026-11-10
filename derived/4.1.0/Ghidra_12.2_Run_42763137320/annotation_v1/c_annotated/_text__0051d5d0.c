/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0041D5D0
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0051d5d0; name: FUN_.text__0051d5d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0051d5d0(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  piVar4 = _DAT_008a4048; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__00411760(_DAT_008a4048); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__0051cae0(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__0051cae0(param_1 + 0x18); // [自动静态注释] 调用尚未恢复正式名称的函数
  do { // [自动静态注释] 循环/迭代
    iVar1 = *piVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    cVar2 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar3) { // [自动静态注释] 条件判断/分支
      *piVar4 = iVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar2 != '\0'); // [自动静态注释] 循环/迭代
  if (iVar1 == -1) { // [自动静态注释] 条件判断/分支
    piVar4[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    piVar4[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    nn::os::UnlockMutex((MutexType *)(piVar4 + 4)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  nn::os::UnlockMutex((MutexType *)(piVar4 + 4)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



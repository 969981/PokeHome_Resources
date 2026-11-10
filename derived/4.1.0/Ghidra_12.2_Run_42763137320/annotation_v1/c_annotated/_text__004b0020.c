/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003B0020
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 内存顺序控制, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004b0020; name: FUN_.text__004b0020
 */


undefined8 FUN__text__004b0020(long param_1,ulong param_2,uint param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int *piVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar7 = *(long *)(param_1 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar8 = *(long *)(param_1 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar7 != lVar8) { // [自动静态注释] 条件判断/分支
    FUN__text__004b0170(param_1,0,4); // [自动静态注释] 调用尚未恢复正式名称的函数
    piVar1 = (int *)(param_1 + 0xd4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      cVar2 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
      if (bVar3) { // [自动静态注释] 条件判断/分支
        *piVar1 = *piVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
      } // [自动静态注释] 作用域/控制流边界
    } while (cVar2 != '\0'); // [自动静态注释] 循环/迭代
    if (*piVar1 != 0) { // [自动静态注释] 条件判断/分支
      lVar5 = nn::os::GetSystemTick(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar4 = DAT_00ae9648 * 0.01; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        if (*piVar1 == 0) break; // [自动静态注释] 条件判断/分支
        Yield(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        lVar6 = nn::os::GetSystemTick(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (lVar6 <= lVar5 + (long)fVar4); // [自动静态注释] 循环/迭代
      while (*piVar1 != 0) { // [自动静态注释] 循环/迭代
        FUN__text__00405bf0(); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    piVar1 = (int *)(param_1 + 0x8c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    DataMemoryBarrier(2,3); // [自动静态注释] AArch64 独占访问或内存屏障
    do { // [自动静态注释] 循环/迭代
      cVar2 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
      if (bVar3) { // [自动静态注释] 条件判断/分支
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
      } // [自动静态注释] 作用域/控制流边界
    } while (cVar2 != '\0'); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  if ((DAT_00ae9a30 == '\0') && ((DAT_00ae9b1d != '\0' || ((param_2 & 1) == 0)))) { // [自动静态注释] 条件判断/分支
    if (lVar7 != lVar8) { // [自动静态注释] 条件判断/分支
      FUN__text__004b8644(param_1 + 0x90); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__004b0588(param_1,param_3 & 1); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



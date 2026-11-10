/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00313E10
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 内存顺序控制, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00413e10; name: FUN_.text__00413e10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00413e10(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  char cVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  EventType *pEVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong *puVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_50 [2]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (((DAT_00aea1e8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_00aea1e8), iVar5 != 0)) { // [自动静态注释] 条件判断/分支
    DAT_00aea1f4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    DAT_00aea1f0 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    DAT_00aea200 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    DAT_00aea208 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    nn::os::InitializeMutex((MutexType *)&DAT_00aea1f0,true,0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__001001d0(_DAT_008a38a0,&DAT_00aea1f0,&__DT_FINI_ARRAY); // [自动静态注释] 调用尚未恢复正式名称的函数
    __cxa_guard_release(&DAT_00aea1e8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  nn::os::LockMutex((MutexType *)&DAT_00aea1f0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  puVar8 = _DAT_008a4890; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_28 = 0xffffffffffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    uVar7 = *puVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar9 = (ulong)((int)uVar7 + 1) & 0xfff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    while (*puVar8 == uVar7) { // [自动静态注释] 循环/迭代
      cVar1 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar2 = (bool)ExclusiveMonitorPass(puVar8,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
      if (bVar2) { // [自动静态注释] 条件判断/分支
        *puVar8 = uVar9;
        cVar1 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
      } // [自动静态注释] 作用域/控制流边界
      plVar3 = _DAT_008a4888; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (cVar1 == '\0') { // [自动静态注释] 条件判断/分支
        lVar6 = *_DAT_008a4888; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar8 = (ulong *)(lVar6 + uVar9 * 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar7 = *puVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        while ((uVar7 & 0xfff) != 0) { // [自动静态注释] 循环/迭代
          FUN__text__00405bf0(); // [自动静态注释] 调用尚未恢复正式名称的函数
          lVar6 = *plVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar8 = (ulong *)(lVar6 + uVar9 * 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar7 = *puVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        do { // [自动静态注释] 循环/迭代
          uVar7 = *puVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          cVar1 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar2 = (bool)ExclusiveMonitorPass(puVar8,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
          if (bVar2) { // [自动静态注释] 条件判断/分支
            *puVar8 = uVar7 + 1;
            cVar1 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
          } // [自动静态注释] 作用域/控制流边界
        } while (cVar1 != '\0'); // [自动静态注释] 循环/迭代
        lVar6 = lVar6 + uVar9 * 0x38; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined8 *)(lVar6 + 8) = 0;
        *(undefined8 *)(lVar6 + 0x10) = 0x71adfd;
        *(undefined8 *)(lVar6 + 0x18) = 0x300000000;
        *(undefined8 *)(lVar6 + 0x20) = 0xffffffffffffffff;
        uVar7 = uVar7 + 1 & 0xfffffffffffff000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined8 *)(lVar6 + 0x28) = 0;
        uVar10 = uVar7 | uVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined4 *)(lVar6 + 0x30) = 0x80000000;
        local_28 = uVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        FUN__text__00413460(&local_28,*(undefined8 *)(param_1 + 8)); // [自动静态注释] 调用尚未恢复正式名称的函数
        FUN__text__00412dc0(&local_28,1,1); // [自动静态注释] 调用尚未恢复正式名称的函数
        nn::os::WaitEvent(_DAT_008a48b0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        local_50[0] = 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        local_48 = uVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        FUN__text__00412340(local_50,0); // [自动静态注释] 调用尚未恢复正式名称的函数
        pEVar4 = _DAT_008a48b0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (uVar10 != 0xffffffffffffffff) { // [自动静态注释] 条件判断/分支
          uVar10 = *(ulong *)(*plVar3 + uVar9 * 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          while (uVar10 == (uVar7 | 1)) { // [自动静态注释] 循环/迭代
            nn::os::WaitEvent(pEVar4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            FUN__text__00412340(local_50,0); // [自动静态注释] 调用尚未恢复正式名称的函数
            uVar10 = *(ulong *)(*plVar3 + uVar9 * 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
        } // [自动静态注释] 作用域/控制流边界
        FUN__text__004142e0(_DAT_008a48c8); // [自动静态注释] 调用尚未恢复正式名称的函数
        FUN__text__00401c50(); // [自动静态注释] 调用尚未恢复正式名称的函数
        nn::os::UnlockMutex((MutexType *)&DAT_00aea1f0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } while( true ); // [自动静态注释] 循环/迭代
} // [自动静态注释] 作用域/控制流边界



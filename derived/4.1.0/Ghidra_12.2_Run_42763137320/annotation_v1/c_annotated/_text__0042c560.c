/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0032C560
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0042c560; name: FUN_.text__0042c560
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0042c560(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  MutexType *pMVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 *puVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__00433a20(param_1 + 8); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(int *)(param_1 + 0x48) == 0) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined1 *)(param_1 + 0x28) = 0xff;
    *(undefined1 *)(param_1 + 0x30) = 0xff;
    *(undefined8 *)(param_1 + 0x38) = 0;
    plVar9 = *(long **)(param_1 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(param_1 + 0x68) = 0;
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    plVar9 = *(long **)(param_1 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(param_1 + 0x68) = 0;
  } // [自动静态注释] 作用域/控制流边界
  if ((plVar9 != (long *)0x0) && ((int)plVar9[0xd] != 0)) { // [自动静态注释] 条件判断/分支
    puVar10 = (undefined2 *)plVar9[0xc]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      if (*(char *)(puVar10 + 1) != '\0') { // [自动静态注释] 条件判断/分支
        FUN__text__0042bf90(*(undefined4 *)(puVar10 + 2),param_1,*puVar10); // [自动静态注释] 调用尚未恢复正式名称的函数
        plVar9 = *(long **)(param_1 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      puVar10 = puVar10 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (puVar10 != (undefined2 *)(plVar9[0xc] + (ulong)*(uint *)(plVar9 + 0xd) * 8)); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  plVar6 = *(long **)(param_1 + 0x50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar6 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*plVar6 + 0x28))(plVar6,_DAT_008a47f0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    plVar9 = *(long **)(param_1 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_1 + 0x50) = 0;
  } // [自动静态注释] 作用域/控制流边界
  if (plVar9 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    pMVar1 = (MutexType *)(plVar9 + 0xe); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    nn::os::LockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar8 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar6 = plVar9 + 0x12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      lVar7 = lVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar8 = *plVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar6 = (long *)(lVar8 + 0x70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (lVar8 != 0 && lVar8 != param_1); // [自动静态注释] 循环/迭代
    if (lVar8 == 0) { // [自动静态注释] 条件判断/分支
      nn::os::UnlockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      plVar6 = plVar9 + 0x12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (plVar9[0x12] != lVar8) { // [自动静态注释] 条件判断/分支
        plVar6 = (long *)(lVar7 + 0x70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      *plVar6 = *(long *)(lVar8 + 0x70);
      nn::os::UnlockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      piVar2 = (int *)((long)plVar9 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        iVar3 = *piVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
        if (bVar5) { // [自动静态注释] 条件判断/分支
          *piVar2 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
        } // [自动静态注释] 作用域/控制流边界
      } while (cVar4 != '\0'); // [自动静态注释] 循环/迭代
      if (iVar3 + -1 == 0) { // [自动静态注释] 条件判断/分支
        (**(code **)(*plVar9 + 0x20))(plVar9); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    *(undefined8 *)(param_1 + 0x58) = 0;
  } // [自动静态注释] 作用域/控制流边界
  if (*(long *)(param_1 + 0x60) != 0) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(param_1 + 0x68) = 0;
    FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0;
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



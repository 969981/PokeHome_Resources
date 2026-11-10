/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00377910
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00477910; name: FUN_.text__00477910
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00477910(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int *piVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 *puVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(long **)(param_1 + 0x1d8) != (long *)0x0) { // [自动静态注释] 条件判断/分支
    (**(code **)(**(long **)(param_1 + 0x1d8) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    plVar8 = *(long **)(param_1 + 0x1d8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (plVar8 != (long *)0x0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*plVar8 + 8))(plVar8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      FUN__text__00400fc0(0,plVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    *(undefined8 *)(param_1 + 0x1d8) = 0;
  } // [自动静态注释] 作用域/控制流边界
  if (*(long *)(param_1 + 0x150) != 0) { // [自动静态注释] 条件判断/分支
    if (((*(byte *)(*(long *)(param_1 + 0x150) + 0x28) >> 1 & 1) != 0) && // [自动静态注释] 条件判断/分支
       (puVar6 = (undefined4 *)FUN__text__0046ab20(*(undefined8 *)(param_1 + 0x1d0)), // [自动静态注释] 调用尚未恢复正式名称的函数
       puVar6 != (undefined4 *)0x0)) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      plVar8 = *(long **)(puVar6 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (plVar8 != (long *)0x0) { // [自动静态注释] 条件判断/分支
        if (*(ushort *)(plVar8 + 2) - 1 == 0) { // [自动静态注释] 条件判断/分支
          if (*plVar8 != 0) { // [自动静态注释] 条件判断/分支
            *(undefined4 *)(plVar8 + 1) = 0;
            FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
            *plVar8 = 0;
            *(undefined4 *)((long)plVar8 + 0xc) = 0;
          } // [自动静态注释] 作用域/控制流边界
          FUN__text__00400fc0(0,plVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
        } // [自动静态注释] 作用域/控制流边界
        else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          *(short *)(plVar8 + 2) = (short)(*(ushort *)(plVar8 + 2) - 1);
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      *(undefined8 *)(puVar6 + 2) = 0;
      *puVar6 = 0;
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__0047bea0(*_DAT_008a4650,*(undefined8 *)(param_1 + 0x150),param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined8 *)(param_1 + 0x150) = 0;
    *(undefined4 *)(param_1 + 0x158) = 0;
  } // [自动静态注释] 作用域/控制流边界
  local_18 = 0xffffffffffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0046c3b0(param_1,&local_18,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00477aa0(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  puVar9 = *(undefined8 **)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar2 = *(int *)(puVar9 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar5 = iVar2 + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(int *)(puVar9 + 0xc) = iVar5;
  if (((iVar5 == 0) || // [自动静态注释] 条件判断/分支
      (((iVar5 == 1 && (iVar2 != 0 || *(char *)((long)puVar9 + 100) == '\0')) && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
       (*(char *)((long)puVar9 + 100) != '\0')))) && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
     (FUN__text__004473f0(puVar9), *(int *)(puVar9 + 0xc) == 0)) { // [自动静态注释] 调用尚未恢复正式名称的函数
    (**(code **)*puVar9)(puVar9); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__00400fc0(4,puVar9); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  lVar7 = *(long *)(param_1 + 0x1d0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  piVar1 = (int *)(lVar7 + 0x24); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
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
    (**(code **)(*(long *)(lVar7 + 0x10) + 0x20))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



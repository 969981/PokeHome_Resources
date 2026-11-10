/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004E34E0
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 内存顺序控制, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e34e0; name: FUN_.text__005e34e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005e34e0(long *param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int *piVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte *pbVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar6 = _DAT_0089f798; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar5 = _DAT_0089f4a0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(int *)(param_2 + 0x54) == 0) { // [自动静态注释] 条件判断/分支
    *param_1 = 0;
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  piVar1 = (int *)(param_2 + 0x54); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar8 = _DAT_0089f798; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pbVar9 = _DAT_0089f790; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar10 = *(int *)(param_2 + 0x54); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    puVar11 = *(undefined8 **)(param_2 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (((*pbVar9 & 1) == 0) && // [自动静态注释] 条件判断/分支
       (iVar7 = __cxa_guard_acquire(_DAT_0089f790), puVar8 = _DAT_0089f798, pbVar9 = _DAT_0089f790, // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
       iVar7 != 0)) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if (((*_DAT_0089f498 & 1) == 0) && (iVar7 = __cxa_guard_acquire(_DAT_0089f498), iVar7 != 0)) { // [自动静态注释] 条件判断/分支
        *puVar5 = 0;
        __cxa_guard_release(_DAT_0089f498); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      *puVar6 = puVar5;
      pbVar9 = _DAT_0089f790; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      __cxa_guard_release(_DAT_0089f790); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      puVar8 = puVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    if (puVar11 != puVar8) { // [自动静态注释] 条件判断/分支
      do { // [自动静态注释] 循环/迭代
        puVar11 = (undefined8 *)*puVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (puVar11 != puVar8 && puVar11 != (undefined8 *)0x0); // [自动静态注释] 循环/迭代
      if (puVar11 == (undefined8 *)0x0) break; // [自动静态注释] 条件判断/分支
    } // [自动静态注释] 作用域/控制流边界
    iVar7 = *piVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (iVar7 == iVar10) { // [自动静态注释] 条件判断/分支
      cVar3 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
      if (bVar4) { // [自动静态注释] 条件判断/分支
        *piVar1 = iVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
      } // [自动静态注释] 作用域/控制流边界
      if (cVar3 == '\0') { // [自动静态注释] 条件判断/分支
        lVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (*(long *)(param_2 + 0x60) != 0) { // [自动静态注释] 条件判断/分支
          lVar2 = *(long *)(param_2 + 0x60) + -8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        *param_1 = lVar2;
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    iVar10 = iVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while (iVar7 != 0); // [自动静态注释] 循环/迭代
  *param_1 = 0;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003345D0
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004345d0; name: FUN_.text__004345d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN__text__004345d0(long param_1,ulong param_2,undefined8 param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int *piVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar9 = param_2 >> 0x20 & 0xff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((int)uVar9 == 3) { // [自动静态注释] 条件判断/分支
    uVar9 = FUN__text__004317f4(*_DAT_008a4658,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
    return uVar9; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if ((int)uVar9 == 4) { // [自动静态注释] 条件判断/分支
    FUN__text__00434440(&local_28,param_2 & 0xffffffff); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (local_28 == (long *)0x0) { // [自动静态注释] 条件判断/分支
      return 0xf; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    uVar9 = FUN__text__0043e0e0(local_28,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
    piVar1 = (int *)((long)local_28 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      iVar2 = *piVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
      if (bVar5) { // [自动静态注释] 条件判断/分支
        *piVar1 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
      } // [自动静态注释] 作用域/控制流边界
    } while (cVar4 != '\0'); // [自动静态注释] 循环/迭代
    if (iVar2 + -1 == 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*local_28 + 0x20))(local_28); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    return uVar9 & 0xffffffff; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  plVar8 = (long *)(param_1 + uVar9 * 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = *(uint *)(plVar8 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar3 == 0) { // [自动静态注释] 条件判断/分支
LAB__text__004346b8: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    plVar8 = (long *)FUN__text__00434fac(param_1,param_2 & 0xffffff0000000000 | // [自动静态注释] 调用尚未恢复正式名称的函数
                                                 param_2 & 0xffffffff | uVar9 << 0x20); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (plVar8 == (long *)0x0) { // [自动静态注释] 条件判断/分支
      return 0xf; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar7 = (uint)param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar3 != 0) { // [自动静态注释] 条件判断/分支
      uVar6 = uVar7 / uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    plVar8 = (long *)(*plVar8 + (ulong)(uVar7 - uVar6 * uVar3) * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      plVar8 = (long *)*plVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (plVar8 == (long *)0x0) goto LAB__text__004346b8; // [自动静态注释] 条件判断/分支
    } while (*(uint *)(plVar8 + 1) != uVar7); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  uVar9 = FUN__text__00436bf0(plVar8,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  return uVar9; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



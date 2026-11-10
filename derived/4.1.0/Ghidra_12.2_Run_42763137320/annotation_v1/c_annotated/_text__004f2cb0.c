/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003F2CB0
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f2cb0; name: FUN_.text__004f2cb0
 */


void FUN__text__004f2cb0(long param_1,uint *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int *piVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  piVar1 = (int *)(param_1 + 0x24); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    cVar3 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar4) { // [自动静态注释] 条件判断/分支
      *piVar1 = *piVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar3 != '\0'); // [自动静态注释] 循环/迭代
  uVar7 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar7 == 2) { // [自动静态注释] 条件判断/分支
    FUN__text__004e88b0(param_1,*(undefined8 *)(param_2 + 2),param_2 + 5, // [自动静态注释] 调用尚未恢复正式名称的函数
                        *(undefined1 *)((long)param_2 + 0x1e),param_2[4]);
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (uVar7 == 1) { // [自动静态注释] 条件判断/分支
      FUN__text__004e8740(param_1,*(undefined8 *)(param_2 + 2),param_2 + 5,param_2[4]); // [自动静态注释] 调用尚未恢复正式名称的函数
      cVar3 = *(char *)((long)param_2 + 0x1f); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      goto joined_r0x004f2d38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    if (uVar7 == 0) { // [自动静态注释] 条件判断/分支
      FUN__text__004e85a0(param_1,*(undefined8 *)(param_2 + 2),param_2 + 5,param_2[4]); // [自动静态注释] 调用尚未恢复正式名称的函数
      cVar3 = *(char *)((long)param_2 + 0x1f); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      goto joined_r0x004f2d38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  cVar3 = *(char *)((long)param_2 + 0x1f); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
joined_r0x004f2d38: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (((cVar3 != '\0') && (*(char *)((long)param_2 + 0x1d) != '\0')) && (*param_2 < 3)) { // [自动静态注释] 条件判断/分支
    FUN__text__0042eb90(param_1 + 0x28,*param_2 & 1); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  uVar7 = *(uint *)(param_1 + 0x100); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (uVar7 != 0) { // [自动静态注释] 循环/迭代
    uVar7 = uVar7 - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar6 = *(long **)(*(long *)(param_1 + 0xf8) + (ulong)uVar7 * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((((char)param_2[7] == '\0') || (plVar6[0x10] == 0)) && // [自动静态注释] 条件判断/分支
       (uVar5 = FUN__text__004647d0(plVar6,*(undefined8 *)(param_2 + 0xc)), (uVar5 & 1) == 0)) { // [自动静态注释] 调用尚未恢复正式名称的函数
      (**(code **)(*plVar6 + 0xa0))(plVar6,param_2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
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
                    /* WARNING: Could not recover jumptable at 0x004f2e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x10) + 0x20))((long *)(param_1 + 0x10)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



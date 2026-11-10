/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001D9D50
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002d9d50; name: FUN_.text__002d9d50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002d9d50(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int *piVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_50 [24]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *local_18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__002d9e70(&local_18,*(undefined8 *)(param_1 + 8)); // [自动静态注释] 调用尚未恢复正式名称的函数
  puVar3 = *(undefined8 **)(param_1 + 0x1f0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (puVar3 < *(undefined8 **)(param_1 + 0x1f8)) { // [自动静态注释] 条件判断/分支
    uVar8 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar8 = uVar8 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(uVar8 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    *(undefined8 *)(uVar8 + *(long *)(uVar8 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0x200);
    *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
    *puVar3 = local_18;
    if (local_18 != (long *)0x0) { // [自动静态注释] 条件判断/分支
      (**(code **)(local_18[9] + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
    *(undefined8 **)(param_1 + 0x1f0) = puVar3 + 1;
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__002d9fa0(param_1 + 0x1e8,&local_18); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005e927c(auStack_50,_DAT_008a2688); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar6 = FUN__text__002f95a0(param_1,auStack_50); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__002f2760(uVar6,local_18); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (local_38 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  if (local_18 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    lVar7 = local_18[0xb]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    piVar1 = (int *)(lVar7 + 0x54); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
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
      *(undefined8 *)(lVar7 + 0x60) = 0;
      (**(code **)(*local_18 + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



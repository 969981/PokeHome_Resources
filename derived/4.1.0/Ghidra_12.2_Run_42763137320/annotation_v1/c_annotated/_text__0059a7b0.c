/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0049A7B0
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0059a7b0; name: FUN_.text__0059a7b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0059a7b0(long *param_1,long *param_2,undefined4 *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int *piVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar6 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar6 = uVar6 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar6 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(long **)(uVar6 + *(long *)(uVar6 + 0x98) * 8 + 0x18) = param_2;
  *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + 1;
  lVar4 = (**(code **)(*param_2 + 0x10))(param_2,0x150,0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar4 == 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*param_2 + 0xb8))(param_2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__0059aa78(0,*param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
    *param_1 = 0;
    _DAT_00000010 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    _DAT_00000018 = 0x150; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    _DAT_00000020 = 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    _DAT_00000008 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + -1;
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__0059aa78(lVar4,*param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  *param_1 = lVar4;
  *(long **)(lVar4 + 8) = param_2;
  *(long *)(lVar4 + 0x10) = lVar4;
  *(undefined8 *)(lVar4 + 0x18) = 0x150;
  *(undefined8 *)(lVar4 + 0x20) = 0x10;
  *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + -1;
  lVar4 = *(long *)(lVar4 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(lVar4 + 0x58) == 0) { // [自动静态注释] 条件判断/分支
    uVar5 = (**(code **)**(undefined8 **)(lVar4 + 0x60))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(lVar4 + 0x58) = uVar5;
  } // [自动静态注释] 作用域/控制流边界
  piVar1 = (int *)(lVar4 + 0x54); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    cVar2 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar3) { // [自动静态注释] 条件判断/分支
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar2 != '\0'); // [自动静态注释] 循环/迭代
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



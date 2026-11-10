/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00334930
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00434930; name: FUN_.text__00434930
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN__text__00434930(long param_1,ulong param_2,undefined8 param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int *piVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar8 = param_2 >> 0x20 & 0xff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar7 = (int)uVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (iVar7 == 3) { // [自动静态注释] 条件判断/分支
    uVar8 = FUN__text__004318b0(*_DAT_008a4658,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
    return uVar8; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if (iVar7 == 4) { // [自动静态注释] 条件判断/分支
    FUN__text__00434440(&local_28); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (local_28 != (long *)0x0) { // [自动静态注释] 条件判断/分支
      uVar8 = FUN__text__0043e3e0(local_28,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
      piVar1 = (int *)((long)local_28 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        iVar7 = *piVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        cVar3 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
        if (bVar4) { // [自动静态注释] 条件判断/分支
          *piVar1 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
        } // [自动静态注释] 作用域/控制流边界
      } while (cVar3 != '\0'); // [自动静态注释] 循环/迭代
      if (iVar7 + -1 == 0) { // [自动静态注释] 条件判断/分支
        (**(code **)(*local_28 + 0x20))(local_28); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      return uVar8 & 0xffffffff; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    plVar9 = (long *)(param_1 + uVar8 * 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = *(uint *)(plVar9 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar2 != 0) { // [自动静态注释] 条件判断/分支
      uVar5 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar6 = (uint)param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (uVar2 != 0) { // [自动静态注释] 条件判断/分支
        uVar5 = uVar6 / uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      plVar9 = (long *)(*plVar9 + (ulong)(uVar6 - uVar5 * uVar2) * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      while (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0) { // [自动静态注释] 循环/迭代
        if (*(uint *)(plVar9 + 1) == uVar6) { // [自动静态注释] 条件判断/分支
          uVar8 = FUN__text__00436de0(plVar9,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
          return uVar8; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return 0xf; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



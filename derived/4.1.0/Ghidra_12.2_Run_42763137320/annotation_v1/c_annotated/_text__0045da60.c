/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0035DA60
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0045da60; name: FUN_.text__0045da60
 */


void FUN__text__0045da60(undefined8 param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long alStack_440 [128]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar5 = DAT_00aea6c0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (DAT_00aea6c0 != 0) { // [自动静态注释] 条件判断/分支
    lVar4 = -0x40 - ((long)(int)DAT_00aea6c0 * 8 + 0xfU & 0xfffffffffffffff0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar8 = DAT_00aea6b8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      lVar7 = *plVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long *)((long)alStack_440 + lVar6 * 8 + lVar4 + 0x440) = lVar7;
      piVar10 = (int *)(lVar7 + 0x24); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        cVar2 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
        if (bVar3) { // [自动静态注释] 条件判断/分支
          *piVar10 = *piVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
        } // [自动静态注释] 作用域/控制流边界
      } while (cVar2 != '\0'); // [自动静态注释] 循环/迭代
      plVar8 = plVar8 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar6 = lVar6 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (plVar8 != DAT_00aea6b8 + DAT_00aea6c0); // [自动静态注释] 循环/迭代
    if (0 < (int)uVar5) { // [自动静态注释] 条件判断/分支
      uVar9 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        plVar8 = *(long **)((long)alStack_440 + uVar9 * 8 + lVar4 + 0x440); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        piVar10 = (int *)((long)plVar8 + 0x24); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        (**(code **)(*plVar8 + 0xa0))(plVar8,param_1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        do { // [自动静态注释] 循环/迭代
          iVar1 = *piVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          cVar2 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
          if (bVar3) { // [自动静态注释] 条件判断/分支
            *piVar10 = iVar1 + -1;
            cVar2 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
          } // [自动静态注释] 作用域/控制流边界
        } while (cVar2 != '\0'); // [自动静态注释] 循环/迭代
        if (iVar1 + -1 == 0) { // [自动静态注释] 条件判断/分支
          (**(code **)(plVar8[2] + 0x20))(plVar8 + 2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        uVar9 = uVar9 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (uVar9 != uVar5); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



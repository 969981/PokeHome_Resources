/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00313460
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 内存顺序控制, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00413460; name: FUN_.text__00413460
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00413460(ulong *param_1,ulong param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ulong *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong *puVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong *puVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar6 = _DAT_008a48c8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar5 = _DAT_008a4888; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar10 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar9 = *_DAT_008a4888; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(ulong *)(lVar9 + (uVar10 & 0xfff) * 0x38) == (uVar10 & 0xfffffffffffff000 | 1) && // [自动静态注释] 条件判断/分支
      param_2 != 0xffffffffffffffff) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    puVar8 = (ulong *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar7 = lVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    while( true ) { // [自动静态注释] 循环/迭代
      puVar12 = (ulong *)(lVar7 + (param_2 & 0xfff) * 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar1 = puVar12 + 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar11 = *puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      while ((uVar11 != 0xffffffffffffffff && (*puVar12 == (param_2 & 0xfffffffffffff000 | 1)))) { // [自动静态注释] 循环/迭代
        if (puVar8 == (ulong *)0x0) { // [自动静态注释] 条件判断/分支
          puVar8 = (ulong *)FUN__text__00414330(uVar6,0x10,8); // [自动静态注释] 调用尚未恢复正式名称的函数
          while (puVar8 == (ulong *)0x0) { // [自动静态注释] 循环/迭代
            puVar8 = (ulong *)FUN__text__00414330(uVar6,0x10,8); // [自动静态注释] 调用尚未恢复正式名称的函数
            FUN__text__00405bf0(); // [自动静态注释] 调用尚未恢复正式名称的函数
          } // [自动静态注释] 作用域/控制流边界
          *puVar8 = uVar10;
        } // [自动静态注释] 作用域/控制流边界
        puVar8[1] = uVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        while (*puVar1 == uVar11) { // [自动静态注释] 循环/迭代
          cVar3 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
          if (bVar4) { // [自动静态注释] 条件判断/分支
            *puVar1 = (ulong)puVar8;
            cVar3 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
          } // [自动静态注释] 作用域/控制流边界
          if (cVar3 == '\0') { // [自动静态注释] 条件判断/分支
            piVar2 = (int *)(lVar9 + (uVar10 & 0xfff) * 0x38 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            do { // [自动静态注释] 循环/迭代
              cVar3 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
              if (bVar4) { // [自动静态注释] 条件判断/分支
                *piVar2 = *piVar2 + 1;
                cVar3 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
              } // [自动静态注释] 作用域/控制流边界
            } while (cVar3 != '\0'); // [自动静态注释] 循环/迭代
            return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
          } // [自动静态注释] 作用域/控制流边界
        } // [自动静态注释] 作用域/控制流边界
        ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        uVar11 = *puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      param_2 = puVar12[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (param_2 == 0xffffffffffffffff) break; // [自动静态注释] 条件判断/分支
      lVar7 = *plVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    if (puVar8 != (ulong *)0x0) { // [自动静态注释] 条件判断/分支
      FUN__text__00414580(_DAT_008a48c8,puVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



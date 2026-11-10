/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003B42A0
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004b42a0; name: FUN_.text__004b42a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004b42a0(long param_1,int param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int *piVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_94 [17]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar5 = _DAT_008a45d8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar9 = *(undefined8 **)(param_1 + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (puVar9 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    puVar8 = (undefined8 *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      while (plVar7 = (long *)puVar9[2], (int)plVar7[6] != param_2) { // [自动静态注释] 循环/迭代
        puVar11 = (undefined8 *)*puVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar8 = puVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar9 = puVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (puVar11 == (undefined8 *)0x0) goto LAB__text__004b43c8; // [自动静态注释] 条件判断/分支
      } // [自动静态注释] 作用域/控制流边界
      plVar6 = (long *)plVar7[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_94[0] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*(short *)((long)plVar6 + 0x34) == 0x403) { // [自动静态注释] 条件判断/分支
LAB__text__004b4324: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        (**(code **)(*plVar6 + 0x58))(plVar6,local_94); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      else if (*(short *)((long)plVar6 + 0x34) == 0x503) { // [自动静态注释] 条件判断/分支
        FUN__text__004b934c(); // [自动静态注释] 调用尚未恢复正式名称的函数
        plVar6 = (long *)plVar7[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        goto LAB__text__004b4324; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      FUN__text__0048e190(*puVar5,(int)plVar7[6]); // [自动静态注释] 调用尚未恢复正式名称的函数
      puVar10 = (undefined8 *)*puVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar11 = (undefined8 *)(param_1 + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*(undefined8 **)(param_1 + 0x38) != puVar9) { // [自动静态注释] 条件判断/分支
        puVar11 = puVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      *puVar11 = puVar10;
      if (*(undefined8 **)(param_1 + 0x40) == puVar9) { // [自动静态注释] 条件判断/分支
        *(undefined8 **)(param_1 + 0x40) = puVar8;
      } // [自动静态注释] 作用域/控制流边界
      *puVar9 = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 **)(param_1 + 0x48) = puVar9;
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -1;
      plVar6 = (long *)plVar7[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      piVar1 = (int *)((long)plVar6 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
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
        (**(code **)(*plVar6 + 0x20))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      (**(code **)(*plVar7 + 8))(plVar7); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      FUN__text__00400fc0(0,plVar7); // [自动静态注释] 调用尚未恢复正式名称的函数
      puVar9 = puVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (puVar10 != (undefined8 *)0x0); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
LAB__text__004b43c8: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  puVar9 = *(undefined8 **)(param_1 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (puVar9 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    puVar8 = (undefined8 *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      while (plVar7 = (long *)puVar9[2], (int)plVar7[6] == param_2) { // [自动静态注释] 循环/迭代
        plVar6 = (long *)plVar7[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        local_94[0] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (*(short *)((long)plVar6 + 0x34) == 0x403) { // [自动静态注释] 条件判断/分支
LAB__text__004b4424: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          (**(code **)(*plVar6 + 0x58))(plVar6,local_94); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        else if (*(short *)((long)plVar6 + 0x34) == 0x503) { // [自动静态注释] 条件判断/分支
          FUN__text__004b934c(); // [自动静态注释] 调用尚未恢复正式名称的函数
          plVar6 = (long *)plVar7[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          goto LAB__text__004b4424; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        FUN__text__0048e190(*puVar5,(int)plVar7[6]); // [自动静态注释] 调用尚未恢复正式名称的函数
        puVar10 = (undefined8 *)*puVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar11 = (undefined8 *)(param_1 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (*(undefined8 **)(param_1 + 0x60) != puVar9) { // [自动静态注释] 条件判断/分支
          puVar11 = puVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        *puVar11 = puVar10;
        if (*(undefined8 **)(param_1 + 0x68) == puVar9) { // [自动静态注释] 条件判断/分支
          *(undefined8 **)(param_1 + 0x68) = puVar8;
        } // [自动静态注释] 作用域/控制流边界
        *puVar9 = *(undefined8 *)(param_1 + 0x70);
        *(undefined8 **)(param_1 + 0x70) = puVar9;
        *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -1;
        plVar6 = (long *)plVar7[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        piVar1 = (int *)((long)plVar6 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
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
          (**(code **)(*plVar6 + 0x20))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        (**(code **)(*plVar7 + 8))(plVar7); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        FUN__text__00400fc0(0,plVar7); // [自动静态注释] 调用尚未恢复正式名称的函数
        puVar9 = puVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (puVar10 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
          return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      puVar11 = (undefined8 *)*puVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar8 = puVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar9 = puVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (puVar11 != (undefined8 *)0x0); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



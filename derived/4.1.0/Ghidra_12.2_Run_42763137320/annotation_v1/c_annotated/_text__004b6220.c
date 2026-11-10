/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003B6220
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004b6220; name: FUN_.text__004b6220
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__004b6220(long param_1,long *param_2,undefined8 param_3,uint param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int *piVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_a4 [17]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar5 = _DAT_008a45d8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((param_4 & 0xfffffffe) == 2) { // [自动静态注释] 条件判断/分支
    puVar10 = *(undefined8 **)(param_1 + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (puVar10 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
      puVar9 = (undefined8 *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        while (plVar8 = (long *)puVar10[2], (long *)plVar8[1] != param_2) { // [自动静态注释] 循环/迭代
LAB__text__004b6280: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          puVar11 = (undefined8 *)*puVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar9 = puVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar10 = puVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (puVar11 == (undefined8 *)0x0) goto LAB__text__004b6394; // [自动静态注释] 条件判断/分支
        } // [自动静态注释] 作用域/控制流边界
        plVar7 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (param_4 == 2) { // [自动静态注释] 条件判断/分支
          uVar6 = FUN__text__004b93f0(param_2,param_3,plVar8[8],plVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
          if ((uVar6 & 1) == 0) goto LAB__text__004b6280; // [自动静态注释] 条件判断/分支
          plVar7 = (long *)plVar8[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        local_a4[0] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (*(short *)((long)plVar7 + 0x34) == 0x403) { // [自动静态注释] 条件判断/分支
LAB__text__004b62e8: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          (**(code **)(*plVar7 + 0x58))(plVar7,local_a4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        else if (*(short *)((long)plVar7 + 0x34) == 0x503) { // [自动静态注释] 条件判断/分支
          FUN__text__004b934c(); // [自动静态注释] 调用尚未恢复正式名称的函数
          plVar7 = (long *)plVar8[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          goto LAB__text__004b62e8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        FUN__text__0048e190(*puVar5,(int)plVar8[6]); // [自动静态注释] 调用尚未恢复正式名称的函数
        puVar12 = (undefined8 *)*puVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar11 = (undefined8 *)(param_1 + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (*(undefined8 **)(param_1 + 0x38) != puVar10) { // [自动静态注释] 条件判断/分支
          puVar11 = puVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        *puVar11 = puVar12;
        if (*(undefined8 **)(param_1 + 0x40) == puVar10) { // [自动静态注释] 条件判断/分支
          *(undefined8 **)(param_1 + 0x40) = puVar9;
        } // [自动静态注释] 作用域/控制流边界
        *puVar10 = *(undefined8 *)(param_1 + 0x48);
        *(undefined8 **)(param_1 + 0x48) = puVar10;
        *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -1;
        plVar7 = (long *)plVar8[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        piVar1 = (int *)((long)plVar7 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
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
          (**(code **)(*plVar7 + 0x20))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        (**(code **)(*plVar8 + 8))(plVar8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        FUN__text__00400fc0(0,plVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
        puVar10 = puVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (puVar12 != (undefined8 *)0x0); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
LAB__text__004b6394: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    puVar10 = *(undefined8 **)(param_1 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (puVar10 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
      puVar9 = (undefined8 *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        while ((plVar8 = (long *)puVar10[2], (long *)plVar8[1] == param_2 && // [自动静态注释] 循环/迭代
               (uVar6 = FUN__text__004b93f0(param_2,param_3,plVar8[8],plVar8), (uVar6 & 1) != 0))) { // [自动静态注释] 调用尚未恢复正式名称的函数
          plVar7 = (long *)plVar8[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          local_a4[0] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (*(short *)((long)plVar7 + 0x34) == 0x403) { // [自动静态注释] 条件判断/分支
LAB__text__004b640c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            (**(code **)(*plVar7 + 0x58))(plVar7,local_a4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          } // [自动静态注释] 作用域/控制流边界
          else if (*(short *)((long)plVar7 + 0x34) == 0x503) { // [自动静态注释] 条件判断/分支
            FUN__text__004b934c(); // [自动静态注释] 调用尚未恢复正式名称的函数
            plVar7 = (long *)plVar8[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            goto LAB__text__004b640c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          } // [自动静态注释] 作用域/控制流边界
          FUN__text__0048e190(*puVar5,(int)plVar8[6]); // [自动静态注释] 调用尚未恢复正式名称的函数
          puVar12 = (undefined8 *)*puVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar11 = (undefined8 *)(param_1 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (*(undefined8 **)(param_1 + 0x60) != puVar10) { // [自动静态注释] 条件判断/分支
            puVar11 = puVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
          *puVar11 = puVar12;
          if (*(undefined8 **)(param_1 + 0x68) == puVar10) { // [自动静态注释] 条件判断/分支
            *(undefined8 **)(param_1 + 0x68) = puVar9;
          } // [自动静态注释] 作用域/控制流边界
          *puVar10 = *(undefined8 *)(param_1 + 0x70);
          *(undefined8 **)(param_1 + 0x70) = puVar10;
          *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -1;
          plVar7 = (long *)plVar8[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          piVar1 = (int *)((long)plVar7 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
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
            (**(code **)(*plVar7 + 0x20))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          } // [自动静态注释] 作用域/控制流边界
          (**(code **)(*plVar8 + 8))(plVar8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          FUN__text__00400fc0(0,plVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
          puVar10 = puVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (puVar12 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
            return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
          } // [自动静态注释] 作用域/控制流边界
        } // [自动静态注释] 作用域/控制流边界
        puVar11 = (undefined8 *)*puVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar9 = puVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar10 = puVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (puVar11 != (undefined8 *)0x0); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



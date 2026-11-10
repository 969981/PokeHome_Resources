/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003B5DB0
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004b5db0; name: FUN_.text__004b5db0
 */


void FUN__text__004b5db0(long param_1,uint param_2,long *param_3,undefined4 param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int *piVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_74 [17]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar3 = *(undefined4 *)(param_1 + 0x88); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)((long)param_3 + 0x34) = param_4;
  *(undefined4 *)(param_3 + 3) = uVar3;
  if (*(long *)(param_1 + 0x70) != 0) { // [自动静态注释] 条件判断/分支
    *(uint *)(*(long *)(param_1 + 0x70) + 8) = param_2;
    *(long **)(*(long *)(param_1 + 0x70) + 0x10) = param_3;
    puVar6 = *(undefined8 **)(param_1 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
joined_r0x004b5e5c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (puVar6 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
      puVar6 = *(undefined8 **)(param_1 + 0x70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 **)(param_1 + 0x68) = puVar6;
      *(undefined8 *)(param_1 + 0x70) = *puVar6;
      *puVar6 = 0;
      *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x68);
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if (param_2 < *(uint *)(puVar6 + 1)) { // [自动静态注释] 条件判断/分支
        plVar8 = *(long **)(param_1 + 0x70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(long **)(param_1 + 0x60) = plVar8;
        plVar9 = plVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        do { // [自动静态注释] 循环/迭代
          puVar7 = puVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar6 = (undefined8 *)*puVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (puVar6 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
            plVar8 = *(long **)(param_1 + 0x70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *(long **)(param_1 + 0x68) = plVar8;
            goto LAB__text__004b5e88; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          } // [自动静态注释] 作用域/控制流边界
        } while (*(uint *)(puVar6 + 1) <= param_2); // [自动静态注释] 循环/迭代
        plVar8 = *(long **)(param_1 + 0x70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__004b5e88: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *puVar7 = plVar8;
        plVar9 = *(long **)(param_1 + 0x70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      *(long *)(param_1 + 0x70) = *plVar9;
      *plVar8 = (long)puVar6;
    } // [自动静态注释] 作用域/控制流边界
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  puVar6 = (undefined8 *)FUN__text__00400f80(0,0x18); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (puVar6 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    *puVar6 = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 **)(param_1 + 0x70) = puVar6;
    *(uint *)(puVar6 + 1) = param_2;
    *(long **)(*(long *)(param_1 + 0x70) + 0x10) = param_3;
    puVar6 = *(undefined8 **)(param_1 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    goto joined_r0x004b5e5c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  plVar8 = (long *)param_3[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_74[0] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(short *)((long)plVar8 + 0x34) != 0x403) { // [自动静态注释] 条件判断/分支
    if (*(short *)((long)plVar8 + 0x34) != 0x503) goto LAB__text__004b5ef0; // [自动静态注释] 条件判断/分支
    FUN__text__004b934c(); // [自动静态注释] 调用尚未恢复正式名称的函数
    plVar8 = (long *)param_3[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  (**(code **)(*plVar8 + 0x58))(plVar8,local_74); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
LAB__text__004b5ef0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__0048e190(DAT_00ae9a80,(int)param_3[6]); // [自动静态注释] 调用尚未恢复正式名称的函数
  plVar8 = (long *)param_3[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  piVar1 = (int *)((long)plVar8 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
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
    (**(code **)(*plVar8 + 0x20))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  (**(code **)(*param_3 + 8))(param_3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__00400fc0(0,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004C0F50
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 内存顺序控制, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005c0f50; name: FUN_.text__005c0f50
 */


void FUN__text__005c0f50(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int *piVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar9 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar8 = *(long *)(lVar9 + 0xd8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((lVar8 != 0) && (*(int *)(lVar8 + 0x54) != 0)) { // [自动静态注释] 条件判断/分支
    piVar1 = (int *)(lVar8 + 0x54); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar10 = *(int *)(lVar8 + 0x54); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      plVar11 = *(long **)(lVar8 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar7 = (long *)FUN__text__003ead60(); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (plVar7 != plVar11) { // [自动静态注释] 条件判断/分支
        do { // [自动静态注释] 循环/迭代
          plVar11 = (long *)*plVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } while (plVar11 != plVar7 && plVar11 != (long *)0x0); // [自动静态注释] 循环/迭代
        if (plVar11 == (long *)0x0) { // [自动静态注释] 条件判断/分支
          return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      iVar2 = *piVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (iVar2 == iVar10) { // [自动静态注释] 条件判断/分支
        cVar3 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
        if (bVar4) { // [自动静态注释] 条件判断/分支
          *piVar1 = iVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
        } // [自动静态注释] 作用域/控制流边界
        if (cVar3 == '\0') { // [自动静态注释] 条件判断/分支
          lVar8 = *(long *)(lVar8 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (lVar8 == 0) { // [自动静态注释] 条件判断/分支
            return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
          } // [自动静态注释] 作用域/控制流边界
          uVar5 = FUN__text__005cd4dc(*(undefined8 *)(lVar8 + 0x60)); // [自动静态注释] 调用尚未恢复正式名称的函数
          uVar6 = FUN__text__005cd554(*(undefined8 *)(lVar8 + 0x60)); // [自动静态注释] 调用尚未恢复正式名称的函数
          lVar9 = *(long *)(lVar9 + 0xb0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined2 *)(lVar9 + 0x664) = uVar5;
          *(undefined2 *)(lVar9 + 0x666) = uVar6;
                    /* WARNING: Could not recover jumptable at 0x005c102c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(long *)(lVar8 + -8) + 0x18))((long *)(lVar8 + -8)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      iVar10 = iVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (iVar2 != 0); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



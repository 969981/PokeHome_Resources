/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004D2F60
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005d2f60; name: FUN_.text__005d2f60
 */


ulong FUN__text__005d2f60(long *param_1,long *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar4 = (long)param_2 - (long)param_1 >> 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar4 < 6) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x005d2f84 */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*(code *)(&UNK__text__005d2f94 + (ulong)*(byte *)(uVar4 + 0x757ce0) * 4))(1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    return uVar4; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  lVar5 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar7 = param_1 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar8 = *plVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar6 = param_1 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = *plVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = *(ulong *)(lVar8 + 0xa0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar9 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar4 < *(ulong *)(lVar5 + 0xa0)) { // [自动静态注释] 条件判断/分支
    plVar10 = plVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar4 <= *(ulong *)(lVar2 + 0xa0)) { // [自动静态注释] 条件判断/分支
      *param_1 = lVar8;
      param_1[1] = lVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar9 = plVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*(ulong *)(lVar5 + 0xa0) <= *(ulong *)(lVar2 + 0xa0)) goto LAB__text__005d311c; // [自动静态注释] 条件判断/分支
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (uVar4 <= *(ulong *)(lVar2 + 0xa0)) goto LAB__text__005d311c; // [自动静态注释] 条件判断/分支
    *plVar7 = lVar2;
    *plVar6 = lVar8;
    plVar10 = plVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(ulong *)(lVar5 + 0xa0) <= *(ulong *)(lVar2 + 0xa0)) goto LAB__text__005d311c; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  *plVar9 = lVar2;
  *plVar10 = lVar5;
LAB__text__005d311c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (param_1 + 3 != param_2) { // [自动静态注释] 条件判断/分支
    iVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar2 = 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar9 = param_1 + 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      plVar7 = plVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar8 = *plVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar5 = *plVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*(ulong *)(lVar8 + 0xa0) < *(ulong *)(lVar5 + 0xa0)) { // [自动静态注释] 条件判断/分支
        lVar11 = lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        do { // [自动静态注释] 循环/迭代
          lVar1 = lVar11 + -8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(long *)((long)param_1 + lVar11) = lVar5;
          if (lVar1 == 0) { // [自动静态注释] 条件判断/分支
            *param_1 = lVar8;
            goto joined_r0x005d3144; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          } // [自动静态注释] 作用域/控制流边界
          lVar5 = *(long *)((long)param_1 + lVar11 + -0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          lVar11 = lVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } while (*(ulong *)(lVar8 + 0xa0) < *(ulong *)(lVar5 + 0xa0)); // [自动静态注释] 循环/迭代
        *(long *)((long)param_1 + lVar1) = lVar8;
joined_r0x005d3144: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        iVar3 = iVar3 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (iVar3 == 8) { // [自动静态注释] 条件判断/分支
          return (ulong)(plVar7 + 1 == param_2); // [自动静态注释] 返回表达式；具体返回语义取决于调用者
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      lVar2 = lVar2 + 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar9 = plVar7 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar6 = plVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (plVar7 + 1 != param_2); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004A52C0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a52c0; name: FUN_.text__005a52c0
 */


ulong FUN__text__005a52c0(long *param_1,long *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar5 = (long)param_2 - (long)param_1 >> 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar5 < 6) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x005a52f8 */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (*(code *)(&UNK__text__005a5308 + (ulong)*(byte *)(uVar5 + 0x757c84) * 4))(1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    return uVar5; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005a51b0(param_1,param_1 + 2,param_1 + 4); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (param_1 + 6 != param_2) { // [自动静态注释] 条件判断/分支
    lVar7 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar8 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar2 = param_1 + 6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar11 = param_1 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      plVar6 = plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar1 = *plVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar5 = plVar6[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar4 = uVar5 < (ulong)plVar11[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*(ulong *)(lVar1 + 0xa0) != *(ulong *)(*plVar11 + 0xa0)) { // [自动静态注释] 条件判断/分支
        bVar4 = *(ulong *)(lVar1 + 0xa0) < *(ulong *)(*plVar11 + 0xa0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      if (bVar4) { // [自动静态注释] 条件判断/分支
        lVar3 = lVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        do { // [自动静态注释] 循环/迭代
          lVar9 = lVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined8 *)((long)param_1 + lVar9 + 0x30) =
               *(undefined8 *)((long)param_1 + lVar9 + 0x20);
          *(undefined8 *)((long)param_1 + lVar9 + 0x38) =
               *(undefined8 *)((long)param_1 + lVar9 + 0x28);
          if (lVar9 == -0x20) { // [自动静态注释] 条件判断/分支
            *param_1 = lVar1;
            param_1[1] = uVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            goto joined_r0x005a5360; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          } // [自动静态注释] 作用域/控制流边界
          uVar10 = *(ulong *)(*(long *)((long)param_1 + lVar9 + 0x10) + 0xa0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar4 = uVar5 < *(ulong *)((long)param_1 + lVar9 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (*(ulong *)(lVar1 + 0xa0) != uVar10) { // [自动静态注释] 条件判断/分支
            bVar4 = *(ulong *)(lVar1 + 0xa0) < uVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
          lVar3 = lVar9 + -0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } while (bVar4); // [自动静态注释] 循环/迭代
        *(long *)((long)param_1 + lVar9 + 0x20) = lVar1;
        *(ulong *)((long)param_1 + lVar9 + 0x28) = uVar5;
joined_r0x005a5360: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        iVar8 = iVar8 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (iVar8 == 8) { // [自动静态注释] 条件判断/分支
          return (ulong)(plVar6 + 2 == param_2); // [自动静态注释] 返回表达式；具体返回语义取决于调用者
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      lVar7 = lVar7 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar2 = plVar6 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar11 = plVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (plVar6 + 2 != param_2); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



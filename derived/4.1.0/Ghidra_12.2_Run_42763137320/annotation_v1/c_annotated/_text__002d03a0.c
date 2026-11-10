/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001D03A0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002d03a0; name: FUN_.text__002d03a0
 */


void FUN__text__002d03a0(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined2 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  short *psVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong *puVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  short local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  short sStack_36; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uStack_34; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar8 = *(long *)(param_1 + 0xa0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x50);
  uVar5 = (*(long *)(lVar8 + 0x278) - *(long *)(lVar8 + 0x270) >> 3) * 0x38e38e39; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((int)uVar5 == 0) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(param_1 + 0x98) = 0;
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar10 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar9 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar10 = uVar10 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      psVar6 = (short *)(*(long *)(lVar8 + 0x270) + uVar9 * 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_38 = *psVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      sStack_36 = psVar6[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar4 = psVar6[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_34 = (uint)uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar7 = *(ulong **)(param_1 + 0x50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar2 = *(ulong **)(param_1 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (puVar7 == puVar2) { // [自动静态注释] 条件判断/分支
LAB__text__002d0490: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        if (puVar7 == puVar2) goto LAB__text__002d0498; // [自动静态注释] 条件判断/分支
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        do { // [自动静态注释] 循环/迭代
          if ((((short)*puVar7 == local_38) && (*(short *)((long)puVar7 + 2) == sStack_36)) && // [自动静态注释] 条件判断/分支
             (*(uint *)((long)puVar7 + 4) == (uint)uVar4)) goto LAB__text__002d0490; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          puVar7 = puVar7 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } while (puVar7 != puVar2); // [自动静态注释] 循环/迭代
LAB__text__002d0498: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        if (puVar2 < *(ulong **)(param_1 + 0x60)) { // [自动静态注释] 条件判断/分支
          if (*(long *)(uVar10 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
            FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
          } // [自动静态注释] 作用域/控制流边界
          *(undefined8 *)(uVar10 + *(long *)(uVar10 + 0x98) * 8 + 0x18) =
               *(undefined8 *)(param_1 + 0x68);
          *(long *)(uVar10 + 0x98) = *(long *)(uVar10 + 0x98) + 1;
          *puVar2 = (ulong)CONCAT24(uVar4,CONCAT22(sStack_36,local_38));
          *(long *)(uVar10 + 0x98) = *(long *)(uVar10 + 0x98) + -1;
          *(ulong **)(param_1 + 0x58) = puVar2 + 1;
        } // [自动静态注释] 作用域/控制流边界
        else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          FUN__text__002d2840((undefined8 *)(param_1 + 0x50),&local_38); // [自动静态注释] 调用尚未恢复正式名称的函数
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      uVar9 = uVar9 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (uVar9 != (uVar5 & 0xffffffff)); // [自动静态注释] 循环/迭代
    puVar1 = *(undefined2 **)(param_1 + 0x50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar3 = *(undefined2 **)(param_1 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(param_1 + 0x98) = 0;
    if (puVar1 != puVar3) { // [自动静态注释] 条件判断/分支
      lVar8 = *(long *)(param_1 + 0x88); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (lVar8 == 0) { // [自动静态注释] 条件判断/分支
        *(int *)(param_1 + 0x98) =
             (int)((ulong)((long)puVar3 + (0x7fffffff8 - (long)puVar1)) >> 3) + 1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      while( true ) { // [自动静态注释] 循环/迭代
        if ((lVar8 == 0) || // [自动静态注释] 条件判断/分支
           (uVar5 = FUN__text__002d3c40(lVar8,*puVar1,puVar1[1],1), (uVar5 & 1) == 0)) { // [自动静态注释] 调用尚未恢复正式名称的函数
          *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
        } // [自动静态注释] 作用域/控制流边界
        if (puVar1 + 4 == puVar3) break; // [自动静态注释] 条件判断/分支
        lVar8 = *(long *)(param_1 + 0x88); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar1 = puVar1 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



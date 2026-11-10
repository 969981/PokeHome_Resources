/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000BE9B0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001be9b0; name: FUN_.text__001be9b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001be9b0(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((*(long *)(param_1 + 8) != 0) && // [自动静态注释] 条件判断/分支
     (lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x2d0), lVar6 != 0)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar7 = (long *)(lVar6 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (**(code **)(*plVar7 + 0x10))(plVar7); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    plVar3 = _DAT_008a1108; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar6 = *(long *)(param_1 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar6 != 0) { // [自动静态注释] 条件判断/分支
      if (*(int *)(param_1 + 0x30) == 0) { // [自动静态注释] 条件判断/分支
        uVar2 = *(uint *)(lVar6 + 600); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (uVar2 != 0) { // [自动静态注释] 条件判断/分支
          lVar9 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar5 = 7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (uVar2 < 2) { // [自动静态注释] 条件判断/分支
            uVar5 = 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
          do { // [自动静态注释] 循环/迭代
            if ((lVar9 == 0x4b0) || (lVar8 = *(long *)(lVar6 + 0x10), lVar8 == 0)) // [自动静态注释] 条件判断/分支
            goto LAB__text__001beac0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            lVar1 = lVar6 + 0x270 + lVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar4 = FUN__text__00193a7c(lVar8,lVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
            if (((uVar4 & 1) != 0) && (uVar4 = FUN__text__00193be8(lVar8,lVar1), (uVar4 & 1) != 0)) // [自动静态注释] 条件判断/分支
            { // [自动静态注释] 作用域/控制流边界
              if ((*plVar3 == 0) || (lVar8 = *(long *)(*plVar3 + 0x68), lVar8 == 0)) // [自动静态注释] 条件判断/分支
              goto LAB__text__001beac0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              if ((*(byte *)(lVar8 + 0x2ac) & 1) == 0) { // [自动静态注释] 条件判断/分支
                *(undefined4 *)(lVar8 + 0x2ac) = uVar5;
              } // [自动静态注释] 作用域/控制流边界
            } // [自动静态注释] 作用域/控制流边界
            lVar9 = lVar9 + 0x28; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } while ((ulong)uVar2 * 0x28 != lVar9); // [自动静态注释] 循环/迭代
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      *(undefined4 *)(lVar6 + 600) = 0;
                    /* WARNING: Could not recover jumptable at 0x001beabc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x18))(plVar7); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
LAB__text__001beac0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
} // [自动静态注释] 作用域/控制流边界



/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00401CA0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00501ca0; name: FUN_.text__00501ca0
 */


undefined8 FUN__text__00501ca0(long *param_1,int param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar1 = *(int *)((long)param_1 + 0xc) + param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*param_1 == 0) { // [自动静态注释] 条件判断/分支
    uVar4 = *(uint *)(param_1 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar6 = FUN__text__00400f80(0,(ulong)uVar1 << 4); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (lVar6 != 0) { // [自动静态注释] 条件判断/分支
      lVar7 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((lVar7 != 0) && (lVar7 != lVar6)) { // [自动静态注释] 条件判断/分支
        if (uVar4 != 0) { // [自动静态注释] 条件判断/分支
          lVar7 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          do { // [自动静态注释] 循环/迭代
            puVar2 = (undefined8 *)(lVar6 + lVar7); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *puVar2 = 0;
            puVar2[1] = 0xffffffff00000000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            lVar8 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *puVar2 = 0;
            puVar3 = (undefined8 *)(lVar8 + lVar7); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *(undefined4 *)(puVar2 + 1) = 0;
            piVar9 = (int *)*puVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *puVar2 = piVar9;
            *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar3 + 1);
            *(undefined4 *)((long)puVar2 + 0xc) = *(undefined4 *)((long)puVar3 + 0xc);
            if (piVar9 != (int *)0x0) { // [自动静态注释] 条件判断/分支
              *piVar9 = *piVar9 + 1;
            } // [自动静态注释] 作用域/控制流边界
            puVar2 = (undefined8 *)(*param_1 + lVar7); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            piVar9 = *(int **)(*param_1 + lVar7); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            if ((piVar9 != (int *)0x0) && (iVar5 = *piVar9, *piVar9 = iVar5 + -1, iVar5 + -1 == 0)) // [自动静态注释] 条件判断/分支
            { // [自动静态注释] 作用域/控制流边界
              FUN__text__00400fc0(*(undefined4 *)((long)puVar2 + 0xc),*puVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
            } // [自动静态注释] 作用域/控制流边界
            lVar7 = lVar7 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *puVar2 = 0;
            *(undefined4 *)(puVar2 + 1) = 0;
          } while ((ulong)uVar4 * 0x10 != lVar7); // [自动静态注释] 循环/迭代
          lVar7 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        FUN__text__00400fc0(0,lVar7); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
      goto LAB__text__00501dc4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar6 = FUN__text__00400fa0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (lVar6 != 0) { // [自动静态注释] 条件判断/分支
LAB__text__00501dc4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *param_1 = lVar6;
      *(uint *)((long)param_1 + 0xc) = uVar1;
      return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



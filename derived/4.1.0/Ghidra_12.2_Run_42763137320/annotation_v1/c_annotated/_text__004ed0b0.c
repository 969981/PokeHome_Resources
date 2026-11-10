/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003ED0B0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ed0b0; name: FUN_.text__004ed0b0
 */


void FUN__text__004ed0b0(long param_1,long param_2,int param_3,int param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_4 <= param_3) { // [自动静态注释] 条件判断/分支
    param_3 = param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  plVar4 = *(long **)(param_1 + 0x70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar4 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    plVar6 = (long *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      while (plVar5 = plVar4, iVar2 = (**(code **)(*plVar5 + 0x10))(plVar5), iVar2 == 1) { // [自动静态注释] 循环/迭代
        if ((((int)plVar5[2] < param_3) || // [自动静态注释] 条件判断/分支
            (*(long *)(plVar5[3] + 0x80) != *(long *)(param_2 + 0x50))) || // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
           (uVar3 = FUN__text__004edb20(param_2,*(undefined4 *)(plVar5[3] + 0x88)), (uVar3 & 1) == 0 // [自动静态注释] 调用尚未恢复正式名称的函数
           )) goto LAB__text__004ed1c4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
LAB__text__004ed170: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        plVar4 = (long *)plVar5[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        plVar1 = (long *)(param_1 + 0x70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (*(long **)(param_1 + 0x70) != plVar5) { // [自动静态注释] 条件判断/分支
          plVar1 = plVar6 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        *plVar1 = (long)plVar4;
        if (*(long **)(param_1 + 0x68) == plVar5) { // [自动静态注释] 条件判断/分支
          *(long **)(param_1 + 0x68) = plVar6;
        } // [自动静态注释] 作用域/控制流边界
        (**(code **)*plVar5)(plVar5); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        FUN__text__00400fc0(0,plVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
        if (plVar4 == (long *)0x0) { // [自动静态注释] 条件判断/分支
          return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      if ((((iVar2 == 0) && (param_3 <= (int)plVar5[2])) && (plVar5[3] == *(long *)(param_2 + 0x50)) // [自动静态注释] 条件判断/分支
          ) && (uVar3 = FUN__text__004edb20(param_2,(int)plVar5[4]), (uVar3 & 1) == 0)) // [自动静态注释] 调用尚未恢复正式名称的函数
      goto LAB__text__004ed170; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
LAB__text__004ed1c4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      plVar4 = (long *)plVar5[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar6 = plVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while ((long *)plVar5[1] != (long *)0x0); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0032D840
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0042d840; name: FUN_.text__0042d840
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN__text__0042d840(long *param_1,int param_2,ulong param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar5 = (**(code **)(*param_1 + 0x78))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((uVar5 & 1) == 0) { // [自动静态注释] 条件判断/分支
    return (long *)0x0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  plVar6 = (long *)(**(code **)(*param_1 + 0x80))(param_1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar6 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    for (plVar6 = (long *)*plVar6; plVar6 != (long *)0x0; plVar6 = (long *)plVar6[2]) { // [自动静态注释] 循环/迭代
      if ((int)plVar6[7] == param_2) { // [自动静态注释] 条件判断/分支
        return plVar6; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  plVar6 = (long *)FUN__text__00400f80(2,0x48); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar2 = _DAT_008a4c60; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar6 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    plVar6[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar6[3] = (long)param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar6[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar6[5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar6[6] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *plVar6 = lVar2 + 0x10;
    plVar6[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar1 = _DAT_008a4658; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(int *)(plVar6 + 7) = param_2;
    *(undefined4 *)((long)plVar6 + 0x3c) = 0x2ca33bdb;
    uVar7 = *puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined1 *)(plVar6 + 8) = 0;
    iVar3 = FUN__text__00430dd0(uVar7,param_2,plVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (iVar3 != 1) { // [自动静态注释] 条件判断/分支
      FUN__text__004303d0(plVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__00400fc0(2,plVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
      return (long *)0x0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    plVar8 = (long *)(**(code **)(*param_1 + 0x80))(param_1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*plVar8 == 0) { // [自动静态注释] 条件判断/分支
      *plVar8 = (long)plVar6;
      plVar6[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar4 = FUN__text__004317a0(*puVar1,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined4 *)((long)plVar6 + 0x3c) = uVar4;
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      plVar6[2] = *plVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *plVar8 = (long)plVar6;
      uVar4 = FUN__text__004317a0(*puVar1,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined4 *)((long)plVar6 + 0x3c) = uVar4;
    } // [自动静态注释] 作用域/控制流边界
    if ((param_3 & 1) != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__0042d4a0(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
      return plVar6; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return plVar6; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



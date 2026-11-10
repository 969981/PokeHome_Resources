/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0020E1A4
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0030e1a4; name: FUN_.text__0030e1a4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN__text__0030e1a4(undefined8 param_1,long *param_2,undefined8 *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *extraout_x8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auVar5 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar4 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = uVar4 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar4 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(long **)(uVar4 + 0x18 + *(long *)(uVar4 + 0x98) * 8) = param_2;
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
  plVar1 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x58,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar1 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    local_28 = *param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar1[7] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar3 = _DAT_0089f690; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(plVar1 + 8) = 0;
    plVar1[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar1[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar1[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar1[5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(plVar1 + 6) = 0;
    *plVar1 = lVar3 + 0x10;
    if (uVar4 == 0) { // [自动静态注释] 条件判断/分支
      lVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      lVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*(long *)(uVar4 + 0x98) != 0) { // [自动静态注释] 条件判断/分支
        lVar3 = *(long *)(uVar4 + 0x18 + *(long *)(uVar4 + 0x98) * 8 + -8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    *_DAT_008a2ba0 = 1;
    *plVar1 = 0x87cc40;
    plVar1[1] = lVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar1[9] = 0x87cc70; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar1[10] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__0030e2f0(&local_48,local_28,&local_28); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (plVar1[10] != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(plVar1[10] + 0x50) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    plVar1[1] = (long)param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar1[2] = (long)plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar1[10] = local_48; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar1[3] = 0x58; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar1[4] = 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
    return plVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  auVar5 = (**(code **)(*param_2 + 0xb8))(param_2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar1 = auVar5._0_8_; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = uVar4 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar4 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(long **)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x18) = plVar1;
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
  lVar3 = (**(code **)(*plVar1 + 0x10))(plVar1,0x1b8,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar3 == 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*plVar1 + 0xb8))(plVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    plVar2 = (long *)FUN__text__0030e61c(0,*auVar5._8_8_); // [自动静态注释] 调用尚未恢复正式名称的函数
    _DAT_00000018 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    _DAT_00000020 = 0x1b8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    _DAT_00000028 = 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    _DAT_00000010 = plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
    *extraout_x8 = 0;
    return plVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__0030e61c(lVar3,*auVar5._8_8_); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(long **)(lVar3 + 0x10) = plVar1;
  *(long *)(lVar3 + 0x18) = lVar3;
  *(undefined8 *)(lVar3 + 0x20) = 0x1b8;
  *(undefined8 *)(lVar3 + 0x28) = 8;
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
  plVar1 = (long *)(**(code **)(*(long *)(lVar3 + 0x50) + 0x10))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *extraout_x8 = lVar3;
  return plVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



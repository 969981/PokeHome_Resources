/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0004CD04
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0014cd04; name: FUN_.text__0014cd04
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0014cd04(undefined8 *param_1,long *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *extraout_x8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auVar6 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar5 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = uVar5 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar5 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(long **)(uVar5 + 0x18 + *(long *)(uVar5 + 0x98) * 8) = param_2;
  *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + 1;
  plVar1 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x330,0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar1 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    memset(plVar1,0,0x330); // [自动静态注释] 内存复制、清零或移动
    *(undefined4 *)(plVar1 + 6) = 0;
    plVar1[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar1[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar1[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar1[5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *plVar1 = 0x8677a8;
    lVar2 = _DAT_008a0178; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar5 == 0) { // [自动静态注释] 条件判断/分支
      lVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      lVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*(long *)(uVar5 + 0x98) != 0) { // [自动静态注释] 条件判断/分支
        lVar3 = *(long *)(uVar5 + 0x18 + *(long *)(uVar5 + 0x98) * 8 + -8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    *(undefined4 *)(plVar1 + 10) = 0;
    *plVar1 = lVar2 + 0x10;
    plVar1[1] = lVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar4 = plVar1 + 9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *plVar4 = lVar2 + 0x48;
    FUN__text__0014a430(plVar1 + 0xc); // [自动静态注释] 调用尚未恢复正式名称的函数
    plVar1[100] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar1[1] = (long)param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar1[2] = (long)plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *param_1 = plVar1;
    plVar1[3] = 0x330; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar1[4] = 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + -1;
                    /* WARNING: Could not recover jumptable at 0x0014ce10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x10))(plVar4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  auVar6 = (**(code **)(*param_2 + 0xb8))(param_2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar1 = auVar6._0_8_; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = uVar5 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar5 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(long **)(uVar5 + *(long *)(uVar5 + 0x98) * 8 + 0x18) = plVar1;
  *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + 1;
  lVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,0x180,0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar2 == 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*plVar1 + 0xb8))(plVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__005bceac(0,*auVar6._8_8_); // [自动静态注释] 调用尚未恢复正式名称的函数
    _DAT_00000010 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    _DAT_00000018 = 0x180; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    _DAT_00000020 = 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    _DAT_00000008 = plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + -1;
    *extraout_x8 = 0;
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005bceac(lVar2,*auVar6._8_8_); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(long **)(lVar2 + 8) = plVar1;
  *(long *)(lVar2 + 0x10) = lVar2;
  *(undefined8 *)(lVar2 + 0x18) = 0x180;
  *(undefined8 *)(lVar2 + 0x20) = 0x10;
  *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + -1;
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *extraout_x8 = lVar2;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



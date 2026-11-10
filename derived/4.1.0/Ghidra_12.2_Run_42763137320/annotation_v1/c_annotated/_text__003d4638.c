/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002D4638
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d4638; name: FUN_.text__003d4638
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN__text__003d4638(undefined8 param_1,long *param_2,undefined4 *param_3,undefined8 *param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined4 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar6 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar6 = uVar6 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar6 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(long **)(uVar6 + 0x18 + *(long *)(uVar6 + 0x98) * 8) = param_2;
  *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + 1;
  plVar3 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x140,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar3 == (long *)0x0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*param_2 + 0xb8))(param_2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  uVar1 = *param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = *param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar3[7] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(plVar3 + 8) = 0;
  lVar4 = _DAT_0089f690; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar3[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar3[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar3[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar3[5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(plVar3 + 6) = 0;
  *plVar3 = lVar4 + 0x10;
  if (uVar6 == 0) { // [自动静态注释] 条件判断/分支
    lVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(uVar6 + 0x98) != 0) { // [自动静态注释] 条件判断/分支
      lVar4 = *(long *)(uVar6 + 0x18 + *(long *)(uVar6 + 0x98) * 8 + -8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(plVar3 + 10) = 0;
  lVar2 = _DAT_008a0238; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *plVar3 = _DAT_008a0238 + 0x10;
  plVar3[1] = lVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar3[9] = lVar2 + 0x50; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__005b4f04(plVar3 + 0xb); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__005b4f04(plVar3 + 0x19); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined4 *)(plVar3 + 0x27) = 0xffffffff;
  FUN__text__005b4f8c(plVar3 + 0xb,0x4002,4,uVar1,uVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__005b4f8c(plVar3 + 0x19,0x4002,4,uVar1,uVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar4 = _DAT_008a37d0 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar3[9] = _DAT_008a37d0 + 0x50; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *plVar3 = lVar4;
  plVar3[1] = (long)param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar3[2] = (long)plVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar3[3] = 0x140; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar3[4] = 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + -1;
  return plVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



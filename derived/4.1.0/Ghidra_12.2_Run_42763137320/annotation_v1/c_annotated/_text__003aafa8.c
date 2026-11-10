/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002AAFA8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003aafa8; name: FUN_.text__003aafa8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN__text__003aafa8(undefined8 param_1,long *param_2,long *param_3,long *param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                          long *param_5,undefined4 *param_6,undefined4 *param_7) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  undefined4 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar7 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar7 = uVar7 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar7 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(long **)(uVar7 + *(long *)(uVar7 + 0x98) * 8 + 0x18) = param_2;
  *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
  plVar4 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0xc0,0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar4 == (long *)0x0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*param_2 + 0xb8))(param_2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar6 = *param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar6 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  uVar1 = *param_6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = *param_7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__003c2ea4(plVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
  plVar4[0x10] = lVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *plVar4 = 0x882100;
  plVar4[9] = 0x882158; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar4[10] = 0x882198; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar6 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  plVar4[0x13] = param_4[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar4[0x12] = *param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar3 = _DAT_008a3540; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar4[0x15] = param_5[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar5 = *param_5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(plVar4 + 0x16) = uVar2;
  *(undefined4 *)((long)plVar4 + 0xb4) = uVar1;
  *(undefined4 *)(plVar4 + 0x17) = 0;
  *plVar4 = lVar3 + 0x10;
  plVar4[0x14] = lVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar4[9] = lVar3 + 0x68; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar4[10] = lVar3 + 0xa8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar6 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  plVar4[1] = (long)param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar4[2] = (long)plVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar4[3] = 0xc0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar4[4] = 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
  return plVar4; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



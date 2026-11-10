/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0020DED4
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0030ded4; name: FUN_.text__0030ded4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN__text__0030ded4(undefined8 param_1,long *param_2,long *param_3,long *param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar8 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar8 = uVar8 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar8 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(long **)(uVar8 + 0x18 + *(long *)(uVar8 + 0x98) * 8) = param_2;
  *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
  plVar5 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0xf000a8,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar5 == (long *)0x0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*param_2 + 0xb8))(param_2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar6 = *param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar1 = *param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = param_4[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar5[7] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(plVar5 + 8) = 0;
  lVar3 = _DAT_0089f690; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(plVar5 + 6) = 0;
  plVar5[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar5[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar5[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar5[5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *plVar5 = lVar3 + 0x10;
  lVar3 = _DAT_008a2b90; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar8 == 0) { // [自动静态注释] 条件判断/分支
    lVar7 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar7 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(uVar8 + 0x98) != 0) { // [自动静态注释] 条件判断/分支
      lVar7 = *(long *)(uVar8 + 0x18 + *(long *)(uVar8 + 0x98) * 8 + -8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  plVar5[0xb] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar4 = _DAT_008a2b98; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(plVar5 + 0xc) = 0;
  plVar5[0xd] = lVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar5[0xe] = lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *puVar4 = 1;
  *plVar5 = lVar3 + 0x10;
  plVar5[1] = lVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar5[9] = lVar3 + 0x40; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar5[10] = lVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  nn::os::InitializeLightEvent(plVar5 + 0xf,0,1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  nn::os::InitializeLightEvent((long)plVar5 + 0x84,0,1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  memset(plVar5 + 0x12,0,0xf00002); // [自动静态注释] 内存复制、清零或移动
  *(undefined8 *)((long)plVar5 + 0xf00094) = 0;
  *(undefined8 *)((long)plVar5 + 0xf0009c) = 0;
  plVar5[1] = (long)param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar5[2] = (long)plVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar5[3] = 0xf000a8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar5[4] = 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
  return plVar5; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



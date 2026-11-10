/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0012A4BC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0022a4bc; name: FUN_.text__0022a4bc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN__text__0022a4bc(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 *param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                          undefined8 *param_5) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar3 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = uVar3 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar3 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(long **)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x18) = param_2;
  *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
  plVar2 = (long *)(**(code **)(*param_2 + 0x10))(param_2,12000,0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar2 == (long *)0x0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*param_2 + 0xb8))(param_2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__001281fc(plVar2,*param_3,*param_4,*param_5); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar1 = _DAT_008a1960; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[0xcc] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[0xcd] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[0xce] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[0xcf] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[0xdc] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[0xdd] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[0xde] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[0xdf] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)(plVar2 + 0xec) = 0;
  plVar2[200] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[0xc9] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[0xca] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *plVar2 = lVar1 + 0x10;
  *(undefined4 *)((long)plVar2 + 0x7cc) = 0;
  plVar2[9] = lVar1 + 0xa8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[10] = lVar1 + 0xe8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)((long)plVar2 + 0x7c4) = 0;
  *(undefined8 *)((long)plVar2 + 0x764) = 0;
  *(undefined8 *)((long)plVar2 + 0x76c) = 0;
  *(undefined8 *)((long)plVar2 + 0x774) = 0;
  *(undefined8 *)((long)plVar2 + 0x77c) = 0;
  *(undefined8 *)((long)plVar2 + 0x784) = 0;
  *(undefined8 *)((long)plVar2 + 0x78c) = 0;
  *(undefined8 *)((long)plVar2 + 0x794) = 0;
  *(undefined8 *)((long)plVar2 + 0x79c) = 0;
  *(undefined8 *)((long)plVar2 + 0x7a4) = 0;
  *(undefined8 *)((long)plVar2 + 0x7ac) = 0;
  *(undefined8 *)((long)plVar2 + 0x7b4) = 0;
  *(undefined8 *)((long)plVar2 + 0x7bc) = 0;
  FUN__text__003d0f70(plVar2 + 0xfa); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar1 = _DAT_008a1348 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[0xfa] = lVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__003d0f70(plVar2 + 0x1c6); // [自动静态注释] 调用尚未恢复正式名称的函数
  plVar2[0x1c6] = lVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__003d0f70(plVar2 + 0x292); // [自动静态注释] 调用尚未恢复正式名称的函数
  plVar2[0x292] = lVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__003d0f70(plVar2 + 0x35e); // [自动静态注释] 调用尚未恢复正式名称的函数
  plVar2[0x35e] = lVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__003d0f70(plVar2 + 0x42a); // [自动静态注释] 调用尚未恢复正式名称的函数
  plVar2[0x42a] = lVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__003d0f70(plVar2 + 0x4f6); // [自动静态注释] 调用尚未恢复正式名称的函数
  plVar2[0x4f6] = lVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[0x5c2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[0x5c3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[0x5c4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[0x5c5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[0x5c6] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[0x5c7] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[0x5c8] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[0x5c9] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[0x5ca] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[0x5cb] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[0x5d8] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[0x5d9] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[0x5da] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[1] = (long)param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[2] = (long)plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[3] = 12000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[4] = 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
  return plVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



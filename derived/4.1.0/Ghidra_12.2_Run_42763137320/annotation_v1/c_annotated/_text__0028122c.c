/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0018122C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0028122c; name: FUN_.text__0028122c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN__text__0028122c(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 *param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
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
  plVar2 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x16e0,0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar2 == (long *)0x0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*param_2 + 0xb8))(param_2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__0028ea5c(plVar2,*param_3,*param_4,*param_5); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined1 *)(plVar2 + 0x10d) = 0;
  lVar1 = _DAT_008a2150; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[0x10e] = -0x340d631b7bddd9bb; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(plVar2 + 0x10f) = 0;
  *(undefined1 *)((long)plVar2 + 0x87c) = 0;
  plVar2[0x110] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[0x111] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *plVar2 = lVar1 + 0x10;
  plVar2[9] = lVar1 + 0xb8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[10] = lVar1 + 0xf8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__003d0f70(plVar2 + 0x112); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar1 = _DAT_008a1348 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[0x112] = lVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__003d0f70(plVar2 + 0x1de); // [自动静态注释] 调用尚未恢复正式名称的函数
  plVar2[0x1de] = lVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[0x2aa] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[0x2ac] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[0x2ad] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[0x2ae] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[0x2af] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[700] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[0x2bd] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[0x2be] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[0x2bf] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[0x2cc] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[0x2cd] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[0x2ce] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[0x2cf] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[1] = (long)param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[2] = (long)plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[3] = 0x16e0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[4] = 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
  return plVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002ACBC0
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003acbc0; name: FUN_.text__003acbc0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003acbc0(undefined8 *param_1,long *param_2,uint *param_3,long *param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *__dest; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *__src; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar2 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0xc0,0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = uVar4 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar4 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(long **)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x18) = param_2;
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
  param_4 = (long *)*param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = *param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[4] = (long)param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[5] = 0x555555555555555; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar3 = _DAT_008a3588; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[0xc] = (long)param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[0xd] = 0x555555555555555; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[10] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[0x14] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[0x12] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[0x15] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[0x16] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *plVar2 = lVar3 + 0x10;
  plVar2[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar1 == 0) goto LAB__text__003accd8; // [自动静态注释] 条件判断/分支
  __dest = (void *)(**(code **)(*param_4 + 0x10))(param_4,(ulong)uVar1 * 0x30,0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  __src = (void *)plVar2[0x14]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (((__src == (void *)0x0) || (__dest == (void *)0x0)) || (plVar2[0x15] == 0)) { // [自动静态注释] 条件判断/分支
    if (__src != (void *)0x0) goto LAB__text__003accb0; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    memmove(__dest,__src,plVar2[0x15] * 0x30); // [自动静态注释] 内存复制、清零或移动
    __src = (void *)plVar2[0x14]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__003accb0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    (**(code **)(*(long *)plVar2[0xc] + 0x18))((long *)plVar2[0xc],__src,plVar2[0x16] * 0x30,0x10); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  plVar2[0x14] = (long)__dest; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[0x16] = (ulong)uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__003accd8: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  param_1[2] = 0xc0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[3] = 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar3 = *(long *)(uVar4 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = plVar2;
  param_1[1] = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(uVar4 + 0x98) = lVar3 + -1;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



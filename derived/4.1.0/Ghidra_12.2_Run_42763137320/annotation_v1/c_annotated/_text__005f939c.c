/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004F939C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f939c; name: FUN_.text__005f939c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN__text__005f939c(undefined8 param_1,long *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar4 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = uVar4 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar4 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(long **)(uVar4 + 0x18 + *(long *)(uVar4 + 0x98) * 8) = param_2;
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
  plVar2 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x2c0,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar3 = _DAT_0089f690; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar2 == (long *)0x0) { // [自动静态注释] 条件判断/分支
    lVar3 = (**(code **)(*param_2 + 0xb8))(param_2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__005f9600(lVar3 + 0x178); // [自动静态注释] 调用尚未恢复正式名称的函数
    plVar2 = (long *)FUN__text__005f97f0(lVar3 + 0x50); // [自动静态注释] 调用尚未恢复正式名称的函数
    return plVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  plVar2[7] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(plVar2 + 8) = 0;
  plVar2[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(plVar2 + 6) = 0;
  plVar2[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *plVar2 = lVar3 + 0x10;
  if (uVar4 == 0) { // [自动静态注释] 条件判断/分支
    lVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(uVar4 + 0x98) != 0) { // [自动静态注释] 条件判断/分支
      lVar3 = *(long *)(uVar4 + 0x18 + *(long *)(uVar4 + 0x98) * 8 + -8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  *_DAT_008a5d20 = 1;
  lVar1 = _DAT_008a5d28; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *plVar2 = _DAT_008a5d28 + 0x10;
  plVar2[1] = lVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[9] = lVar1 + 0x40; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__005fa38c(plVar2 + 10,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__005faf10(plVar2 + 0x2f,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__005fa37c(plVar2 + 10); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__005faef4(plVar2 + 0x2f); // [自动静态注释] 调用尚未恢复正式名称的函数
  plVar2[1] = (long)param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[2] = (long)plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[3] = 0x2c0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[4] = 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
  return plVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



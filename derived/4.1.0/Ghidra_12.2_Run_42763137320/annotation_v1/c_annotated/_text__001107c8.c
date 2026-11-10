/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000107C8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001107c8; name: FUN_.text__001107c8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN__text__001107c8(undefined8 param_1,long *param_2,long *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar6 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar6 = uVar6 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar6 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(long **)(uVar6 + *(long *)(uVar6 + 0x98) * 8 + 0x18) = param_2;
  *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + 1;
  plVar4 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x278,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar4 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    lVar5 = *param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__005e6444(); // [自动静态注释] 调用尚未恢复正式名称的函数
    plVar4[0x4c] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(plVar4 + 0x4d) = 1;
    *(undefined1 *)((long)plVar4 + 0x26c) = 0;
    lVar1 = _DAT_0089fda8 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar2 = _DAT_0089fda8 + 0x68; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar3 = _DAT_0089fda8 + 0xa8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar4[0x4e] = lVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar4[9] = lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar4[10] = lVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *plVar4 = lVar1;
    plVar4[1] = (long)param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar4[2] = (long)plVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar4[3] = 0x278; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar4[4] = 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + -1;
    FUN__text__005e706c(plVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
    return plVar4; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  (**(code **)(*param_2 + 0xb8))(param_2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  plVar4 = (long *)FUN__text__005e6444(0); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar1 = _DAT_0089fdb0 + 0x68; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = _DAT_0089fdb0 + 0xa8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *plVar4 = _DAT_0089fdb0 + 0x10;
  plVar4[9] = lVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar4[10] = lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar4[0x4c] != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(plVar4[0x4c] + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    plVar4[0x4c] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  plVar4 = (long *)FUN__text__005e66f0(plVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
  return plVar4; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



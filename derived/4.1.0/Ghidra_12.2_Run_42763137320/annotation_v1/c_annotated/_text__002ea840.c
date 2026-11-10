/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001EA840
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002ea840; name: FUN_.text__002ea840
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002ea840(long *param_1,undefined8 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__002eb310(); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar1 = _DAT_008a2850; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar3 = param_1 + 0xd; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *plVar3 = 0;
  *(undefined4 *)((long)param_1 + 0x6f) = 0;
  *param_1 = lVar1 + 0x10;
  param_1[9] = lVar1 + 0xd8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[10] = lVar1 + 0x118; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0xc] = lVar1 + 0x140; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = uVar4 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar4 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  plVar2 = (long *)param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long **)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x18) = plVar2;
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
  lVar1 = (**(code **)(*plVar2 + 0x10))(plVar2,0x310,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar1 == 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*plVar2 + 0xb8))(plVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__006374c0(lVar1,plVar2,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(long **)(lVar1 + 8) = plVar2;
  *(long *)(lVar1 + 0x10) = lVar1;
  *(undefined8 *)(lVar1 + 0x18) = 0x310;
  *(undefined8 *)(lVar1 + 0x20) = 8;
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (*plVar3 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(*plVar3 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *plVar3 = lVar1;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



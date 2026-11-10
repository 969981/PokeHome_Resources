/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004A5D34
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a5d34; name: FUN_.text__005a5d34
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005a5d34(undefined8 *param_1,long *param_2,undefined8 *param_3,long *param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        undefined4 *param_5,long param_6) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  undefined4 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar5 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = uVar5 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar5 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(long **)(uVar5 + *(long *)(uVar5 + 0x98) * 8 + 0x18) = param_2;
  *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + 1;
  plVar2 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x280,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar2 == (long *)0x0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*param_2 + 0xb8))(param_2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  uVar1 = *param_5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*param_4 != 0) { // [自动静态注释] 条件判断/分支
    lVar3 = *param_4 + 0x48; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005e2600(plVar2,*param_3,lVar3,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar3 = _DAT_008a55e0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(plVar2 + 0x4e) = uVar1;
  plVar2[0x4f] = param_6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar4 = plVar2 + 9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *plVar4 = lVar3 + 0x68;
  plVar2[10] = lVar3 + 0xa8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *plVar2 = lVar3 + 0x10;
  plVar2[1] = (long)param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[2] = (long)plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[3] = 0x280; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[4] = 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + -1;
  FUN__text__005e706c(plVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar3 = *plVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = plVar2;
                    /* WARNING: Could not recover jumptable at 0x005a5e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x10))(plVar4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



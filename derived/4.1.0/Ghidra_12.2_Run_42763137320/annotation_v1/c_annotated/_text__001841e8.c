/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000841E8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001841e8; name: FUN_.text__001841e8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN__text__001841e8(undefined8 param_1,long *param_2,long *param_3,long *param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar3 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = uVar3 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar3 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(long **)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x18) = param_2;
  *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
  plVar2 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x128,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar2 == (long *)0x0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*param_2 + 0xb8))(param_2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  local_28 = *param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_3 = 0;
  local_48 = *param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_4 = 0;
  FUN__text__0012566c(plVar2,&local_28,&local_48); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar1 = _DAT_008a1168; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[0x13] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[0x14] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(plVar2 + 0x15) = 0;
  plVar2[0x16] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[0x17] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(plVar2 + 0x18) = 0;
  *(undefined4 *)(plVar2 + 0x1b) = 0;
  *(undefined4 *)(plVar2 + 0x1e) = 0;
  *(undefined4 *)(plVar2 + 0x21) = 0;
  *(undefined4 *)(plVar2 + 0x12) = 0;
  plVar2[0xf] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)((long)plVar2 + 0x11f) = 0;
  *plVar2 = lVar1 + 0x10;
  plVar2[9] = lVar1 + 0x78; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[10] = lVar1 + 0xb8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[0x19] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[0x1a] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[0x1c] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[0x1d] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[0x1f] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[0x20] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[0x10] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[0x11] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[0x22] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[0x23] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (local_48 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    local_48 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (local_28 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  plVar2[1] = (long)param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[2] = (long)plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[3] = 0x128; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[4] = 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
  return plVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



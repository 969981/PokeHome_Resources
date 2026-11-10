/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00031878
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00131878; name: FUN_.text__00131878
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00131878(undefined8 *param_1,long param_2,long *param_3,undefined8 param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        long *param_5) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*param_3 == 0) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  uVar6 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar6 = uVar6 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar6 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
LAB__text__00131ab4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  uVar5 = *(undefined8 *)(param_2 + 0xa8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long **)(uVar6 + 0x18 + *(long *)(uVar6 + 0x98) * 8) = param_5;
  *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + 1;
  plVar3 = (long *)(**(code **)(*param_5 + 0x10))(param_5,0x720,0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar3 == (long *)0x0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*param_5 + 0xb8))(param_5); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__001281fc(plVar3,param_2,param_4,uVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar2 = _DAT_0089fb58; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar3[200] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar3[0xc9] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar3[0xca] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar3[0xcb] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar3[0xd8] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar3[0xd9] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar3[0xda] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar3[0xdb] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(plVar3 + 0xdc) = 0;
  *(undefined2 *)((long)plVar3 + 0x6ec) = 0;
  plVar3[0xde] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar3[0xdf] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar3[0xe0] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar4 = plVar3 + 9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *plVar4 = lVar2 + 0xb8;
  *(undefined8 *)((long)plVar3 + 0x6e4) = 0xffffffffffffffff;
  plVar3[10] = lVar2 + 0xf8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)((long)plVar3 + 0x6ee) = 1;
  plVar3[0xe1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar3[0xe2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar3[0xe3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar3[4] = 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = plVar3;
  *plVar3 = lVar2 + 0x10;
  plVar3[1] = (long)param_5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar3[2] = (long)plVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar3[3] = 0x720; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + -1;
  (**(code **)(*plVar4 + 0x10))(plVar4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  local_48 = *param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (local_48 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_48 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00128598(plVar3,&local_48); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (local_48 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    local_48 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  local_68 = plVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (**(code **)(plVar3[9] + 0x10))(plVar4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  puVar1 = *(undefined8 **)(param_2 + 0x80); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (puVar1 < *(undefined8 **)(param_2 + 0x88)) { // [自动静态注释] 条件判断/分支
    if (*(long *)(uVar6 + 0x98) == 0x10) goto LAB__text__00131ab4; // [自动静态注释] 条件判断/分支
    *(undefined8 *)(uVar6 + 0x18 + *(long *)(uVar6 + 0x98) * 8) = *(undefined8 *)(param_2 + 0x90);
    *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + 1;
    *puVar1 = local_68;
    *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + -1;
    *(undefined8 **)(param_2 + 0x80) = puVar1 + 1;
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__00130fb0(param_2 + 0x78,&local_68); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (local_68 != (long *)0x0) { // [自动静态注释] 条件判断/分支
      (**(code **)(local_68[9] + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  *(undefined1 *)(param_2 + 0xc0) = 0;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



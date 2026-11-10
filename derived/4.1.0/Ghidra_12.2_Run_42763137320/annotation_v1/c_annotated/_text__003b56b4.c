/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002B56B4
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b56b4; name: FUN_.text__003b56b4
 */


void FUN__text__003b56b4(long param_1,undefined8 *param_2,long *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auVar7 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int local_14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(undefined8 *)(param_1 + 0xc) = *param_2;
  auVar7 = (**(code **)(*param_3 + 0x10))(param_3,0x40,0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar3 = auVar7._0_8_; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = uVar4 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar4 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(long **)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x18) = param_3;
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
  puVar3[6] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *puVar3 = param_3;
  puVar3[1] = 0xfffffffffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
  lVar6 = *(long *)(param_1 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 **)(param_1 + 0x20) = puVar3;
  if (lVar6 != 0) { // [自动静态注释] 条件判断/分支
    plVar1 = *(long **)(lVar6 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar2 = (long *)(lVar6 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (plVar1 == plVar2) { // [自动静态注释] 条件判断/分支
      puVar5 = (undefined8 *)(*plVar2 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__003b576c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      (*(code *)*puVar5)(plVar2,auVar7._8_8_,puVar3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    else if (plVar1 != (long *)0x0) { // [自动静态注释] 条件判断/分支
      puVar5 = (undefined8 *)(*plVar1 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar2 = plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      goto LAB__text__003b576c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    (**(code **)(**(long **)(param_1 + 0x28) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              (*(long **)(param_1 + 0x28),lVar6,*(undefined8 *)(param_1 + 0x30), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
               *(undefined8 *)(param_1 + 0x38));
    puVar3 = *(undefined8 **)(param_1 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(long **)(param_1 + 0x28) = param_3;
  *(undefined8 *)(param_1 + 0x30) = 0x40;
  *(undefined8 *)(param_1 + 0x38) = 0x10;
  local_14 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__003b5900(&local_50,param_3,&local_14,puVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
  puVar3 = local_50; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_50 = (undefined8 *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar5 = *(undefined8 **)(param_1 + 0x40); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 **)(param_1 + 0x40) = puVar3;
  if (puVar5 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    *(long **)(param_1 + 0x48) = local_48;
    *(undefined8 *)(param_1 + 0x50) = local_40;
    *(undefined8 *)(param_1 + 0x58) = local_38;
    goto LAB__text__003b58e0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  if (puVar5[10] != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)*puVar5 + 0x18))((long *)*puVar5,puVar5[8],puVar5[10] << 4,8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  plVar1 = (long *)puVar5[6]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2 = puVar5 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar1 == plVar2) { // [自动静态注释] 条件判断/分支
    puVar3 = (undefined8 *)(*plVar2 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__003b5838: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    (*(code *)*puVar3)(plVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  else if (plVar1 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    puVar3 = (undefined8 *)(*plVar1 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar2 = plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    goto LAB__text__003b5838; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  (**(code **)(**(long **)(param_1 + 0x48) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            (*(long **)(param_1 + 0x48),puVar5,*(undefined8 *)(param_1 + 0x50), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
             *(undefined8 *)(param_1 + 0x58));
  puVar3 = local_50; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_50 = (undefined8 *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 0x58) = local_38;
  *(long **)(param_1 + 0x48) = local_48;
  *(undefined8 *)(param_1 + 0x50) = local_40;
  if (puVar3 == (undefined8 *)0x0) goto LAB__text__003b58e0; // [自动静态注释] 条件判断/分支
  if (puVar3[10] != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)*puVar3 + 0x18))((long *)*puVar3,puVar3[8],puVar3[10] << 4,8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  plVar1 = (long *)puVar3[6]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2 = puVar3 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar1 == plVar2) { // [自动静态注释] 条件判断/分支
    puVar5 = (undefined8 *)(*plVar2 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__003b58c0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    (*(code *)*puVar5)(plVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  else if (plVar1 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    puVar5 = (undefined8 *)(*plVar1 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar2 = plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    goto LAB__text__003b58c0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  (**(code **)(*local_48 + 0x18))(local_48,puVar3,local_40,local_38); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
LAB__text__003b58e0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__003b5ab0(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



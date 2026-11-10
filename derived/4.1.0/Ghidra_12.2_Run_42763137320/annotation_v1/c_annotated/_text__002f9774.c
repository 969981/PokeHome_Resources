/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001F9774
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002f9774; name: FUN_.text__002f9774
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002f9774(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uStack_4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uStack_3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uStack_2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uStack_1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar2 = *(undefined8 **)(param_1 + 0xd0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (puVar2 < *(undefined8 **)(param_1 + 0xd8)) { // [自动静态注释] 条件判断/分支
    uVar3 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = uVar3 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(uVar3 + 0x98) == 0x10) goto LAB__text__002f99c0; // [自动静态注释] 条件判断/分支
    *(undefined8 *)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0xe0);
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
    uVar1 = _DAT_008a2948; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *puVar2 = _DAT_008a2950;
    puVar2[1] = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = _DAT_008a2960; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar2[2] = _DAT_008a2958; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar2[3] = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
    *(undefined8 **)(param_1 + 0xd0) = puVar2 + 0x10;
    puVar2 = *(undefined8 **)(param_1 + 0x100); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (puVar2 < *(undefined8 **)(param_1 + 0x108)) goto LAB__text__002f98c0; // [自动静态注释] 条件判断/分支
LAB__text__002f9804: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__002fbf40(param_1 + 0xf8,&uStack_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    puVar2 = *(undefined8 **)(param_1 + 0x130); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (puVar2 < *(undefined8 **)(param_1 + 0x138)) goto LAB__text__002f981c; // [自动静态注释] 条件判断/分支
LAB__text__002f9934: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__002fc1c0(param_1 + 0x128,&uStack_3); // [自动静态注释] 调用尚未恢复正式名称的函数
    puVar2 = *(undefined8 **)(param_1 + 0x160); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(undefined8 **)(param_1 + 0x168) <= puVar2) goto LAB__text__002f9890; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__002fbcc0(param_1 + 200,&uStack_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    puVar2 = *(undefined8 **)(param_1 + 0x100); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(undefined8 **)(param_1 + 0x108) <= puVar2) goto LAB__text__002f9804; // [自动静态注释] 条件判断/分支
LAB__text__002f98c0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar3 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = uVar3 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(uVar3 + 0x98) == 0x10) goto LAB__text__002f99c0; // [自动静态注释] 条件判断/分支
    *(undefined8 *)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0x110);
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
    uVar1 = _DAT_008a2988; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *puVar2 = _DAT_008a2990;
    puVar2[1] = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = _DAT_008a29a0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar2[2] = _DAT_008a2998; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar2[3] = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
    *(undefined8 **)(param_1 + 0x100) = puVar2 + 0x10;
    puVar2 = *(undefined8 **)(param_1 + 0x130); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(undefined8 **)(param_1 + 0x138) <= puVar2) goto LAB__text__002f9934; // [自动静态注释] 条件判断/分支
LAB__text__002f981c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar3 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = uVar3 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(uVar3 + 0x98) == 0x10) goto LAB__text__002f99c0; // [自动静态注释] 条件判断/分支
    *(undefined8 *)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0x140);
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
    uVar1 = _DAT_008a2968; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *puVar2 = _DAT_008a2970;
    puVar2[1] = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = _DAT_008a2980; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar2[2] = _DAT_008a2978; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar2[3] = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
    *(undefined8 **)(param_1 + 0x130) = puVar2 + 0x10;
    puVar2 = *(undefined8 **)(param_1 + 0x160); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(undefined8 **)(param_1 + 0x168) <= puVar2) { // [自动静态注释] 条件判断/分支
LAB__text__002f9890: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      FUN__text__002fc440(param_1 + 0x158,&uStack_4); // [自动静态注释] 调用尚未恢复正式名称的函数
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  uVar3 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = uVar3 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar3 + 0x98) != 0x10) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0x170);
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
    uVar1 = _DAT_008a29a8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *puVar2 = _DAT_008a29b0;
    puVar2[1] = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = _DAT_008a29c0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar2[2] = _DAT_008a29b8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar2[3] = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
    *(undefined8 **)(param_1 + 0x160) = puVar2 + 0x10;
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
LAB__text__002f99c0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    /* WARNING: Subroutine does not return */
  FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
} // [自动静态注释] 作用域/控制流边界



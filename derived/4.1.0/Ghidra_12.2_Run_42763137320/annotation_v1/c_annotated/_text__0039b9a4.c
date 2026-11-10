/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0029B9A4
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0039b9a4; name: FUN_.text__0039b9a4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0039b9a4(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uStack_3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uStack_2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uStack_1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar2 = *(undefined8 **)(param_1 + 0xe8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (puVar2 < *(undefined8 **)(param_1 + 0xf0)) { // [自动静态注释] 条件判断/分支
    uVar3 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = uVar3 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(uVar3 + 0x98) == 0x10) goto LAB__text__0039bb64; // [自动静态注释] 条件判断/分支
    *(undefined8 *)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0xf8);
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
    uVar1 = _DAT_008a3408; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *puVar2 = _DAT_008a3410;
    puVar2[1] = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = _DAT_008a3420; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar2[2] = _DAT_008a3418; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar2[3] = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
    *(undefined8 **)(param_1 + 0xe8) = puVar2 + 0x10;
    puVar2 = *(undefined8 **)(param_1 + 0x118); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (puVar2 < *(undefined8 **)(param_1 + 0x120)) goto LAB__text__0039bad8; // [自动静态注释] 条件判断/分支
LAB__text__0039ba34: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__0039e480(param_1 + 0x110,&uStack_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    puVar2 = *(undefined8 **)(param_1 + 0x148); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(undefined8 **)(param_1 + 0x150) <= puVar2) { // [自动静态注释] 条件判断/分支
LAB__text__0039bb4c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      FUN__text__0039e700(param_1 + 0x140,&uStack_3); // [自动静态注释] 调用尚未恢复正式名称的函数
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__0039e200(param_1 + 0xe0,&uStack_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    puVar2 = *(undefined8 **)(param_1 + 0x118); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(undefined8 **)(param_1 + 0x120) <= puVar2) goto LAB__text__0039ba34; // [自动静态注释] 条件判断/分支
LAB__text__0039bad8: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar3 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = uVar3 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(uVar3 + 0x98) == 0x10) goto LAB__text__0039bb64; // [自动静态注释] 条件判断/分支
    *(undefined8 *)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0x128);
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
    uVar1 = _DAT_008a3448; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *puVar2 = _DAT_008a3450;
    puVar2[1] = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = _DAT_008a3460; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar2[2] = _DAT_008a3458; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar2[3] = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
    *(undefined8 **)(param_1 + 0x118) = puVar2 + 0x10;
    puVar2 = *(undefined8 **)(param_1 + 0x148); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(undefined8 **)(param_1 + 0x150) <= puVar2) goto LAB__text__0039bb4c; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  uVar3 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = uVar3 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar3 + 0x98) != 0x10) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0x158);
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
    uVar1 = _DAT_008a3428; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *puVar2 = _DAT_008a3430;
    puVar2[1] = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = _DAT_008a3440; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar2[2] = _DAT_008a3438; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar2[3] = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
    *(undefined8 **)(param_1 + 0x148) = puVar2 + 0x10;
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
LAB__text__0039bb64: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    /* WARNING: Subroutine does not return */
  FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
} // [自动静态注释] 作用域/控制流边界



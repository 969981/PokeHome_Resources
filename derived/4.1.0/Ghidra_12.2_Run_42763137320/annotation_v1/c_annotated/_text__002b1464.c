/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001B1464
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002b1464; name: FUN_.text__002b1464
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002b1464(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uStack_3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uStack_2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uStack_1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar2 = *(undefined8 **)(param_1 + 0x108); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (puVar2 < *(undefined8 **)(param_1 + 0x110)) { // [自动静态注释] 条件判断/分支
    uVar3 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = uVar3 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(uVar3 + 0x98) == 0x10) goto LAB__text__002b1624; // [自动静态注释] 条件判断/分支
    *(undefined8 *)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0x118);
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
    uVar1 = _DAT_008a24d0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *puVar2 = _DAT_008a24d8;
    puVar2[1] = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = _DAT_008a24e8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar2[2] = _DAT_008a24e0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar2[3] = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
    *(undefined8 **)(param_1 + 0x108) = puVar2 + 0x10;
    puVar2 = *(undefined8 **)(param_1 + 0x138); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (puVar2 < *(undefined8 **)(param_1 + 0x140)) goto LAB__text__002b1598; // [自动静态注释] 条件判断/分支
LAB__text__002b14f4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__002b27a0(param_1 + 0x130,&uStack_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    puVar2 = *(undefined8 **)(param_1 + 0x168); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(undefined8 **)(param_1 + 0x170) <= puVar2) { // [自动静态注释] 条件判断/分支
LAB__text__002b160c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      FUN__text__002b2a20(param_1 + 0x160,&uStack_3); // [自动静态注释] 调用尚未恢复正式名称的函数
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__002b2510(param_1 + 0x100,&uStack_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    puVar2 = *(undefined8 **)(param_1 + 0x138); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(undefined8 **)(param_1 + 0x140) <= puVar2) goto LAB__text__002b14f4; // [自动静态注释] 条件判断/分支
LAB__text__002b1598: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar3 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = uVar3 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(uVar3 + 0x98) == 0x10) goto LAB__text__002b1624; // [自动静态注释] 条件判断/分支
    *(undefined8 *)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0x148);
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
    uVar1 = _DAT_008a2510; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *puVar2 = _DAT_008a2518;
    puVar2[1] = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = _DAT_008a2528; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar2[2] = _DAT_008a2520; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar2[3] = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
    *(undefined8 **)(param_1 + 0x138) = puVar2 + 0x10;
    puVar2 = *(undefined8 **)(param_1 + 0x168); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(undefined8 **)(param_1 + 0x170) <= puVar2) goto LAB__text__002b160c; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  uVar3 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = uVar3 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar3 + 0x98) != 0x10) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0x178);
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
    uVar1 = _DAT_008a24f0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *puVar2 = _DAT_008a24f8;
    puVar2[1] = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = _DAT_008a2508; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar2[2] = _DAT_008a2500; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar2[3] = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
    *(undefined8 **)(param_1 + 0x168) = puVar2 + 0x10;
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
LAB__text__002b1624: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    /* WARNING: Subroutine does not return */
  FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
} // [自动静态注释] 作用域/控制流边界



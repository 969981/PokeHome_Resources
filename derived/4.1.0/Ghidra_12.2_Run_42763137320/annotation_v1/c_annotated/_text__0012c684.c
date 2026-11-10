/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0002C684
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0012c684; name: FUN_.text__0012c684
 */


void FUN__text__0012c684(long param_1,undefined8 *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_48 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar1 = (long *)(param_1 + 0x4b8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(char *)(param_1 + 0x4f8) != '\0') { // [自动静态注释] 条件判断/分支
    plVar1 = (long *)(param_1 + 0x4d8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  lVar4 = *plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = *(ulong *)(lVar4 + 0x88); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (0xf < uVar5) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar7 = *(long *)(lVar4 + 0x80); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar2 = (undefined8 *)(lVar7 + uVar5 * 0x110); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar5 == *(ulong *)(lVar4 + 0x90)) { // [自动静态注释] 条件判断/分支
    FUN__text__0012f7f0(auStack_48,(undefined8 *)(lVar4 + 0x40),puVar2,1,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar6 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar6 = uVar6 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar6 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)(uVar6 + *(long *)(uVar6 + 0x98) * 8 + 0x18) = *(undefined8 *)(lVar4 + 0x40);
  lVar8 = lVar7 + uVar5 * 0x110; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + 1;
  uVar3 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(lVar8 + 0x10) = 0;
  *(undefined8 *)(lVar8 + 0x18) = 0;
  *(undefined8 *)(lVar8 + 0x20) = 0;
  *(undefined8 *)(lVar8 + 0x28) = 0;
  *puVar2 = uVar3;
  if ((code *)param_2[4] != (code *)0x0) { // [自动静态注释] 条件判断/分支
    (*(code *)param_2[4])(param_2 + 6,lVar7 + uVar5 * 0x110 + 0x30); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar3 = param_2[5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(lVar8 + 0x18) = param_2[3];
    *(undefined8 *)(lVar8 + 0x28) = uVar3;
    uVar3 = param_2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(lVar8 + 0x20) = param_2[4];
    *(undefined8 *)(lVar8 + 0x10) = uVar3;
  } // [自动静态注释] 作用域/控制流边界
  lVar8 = lVar7 + uVar5 * 0x110; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(lVar8 + 0x90) = 0;
  *(undefined8 *)(lVar8 + 0xa0) = 0;
  *(undefined8 *)(lVar8 + 0xa8) = 0;
  *(undefined8 *)(lVar8 + 0x98) = 0;
  if ((code *)param_2[0x14] != (code *)0x0) { // [自动静态注释] 条件判断/分支
    (*(code *)param_2[0x14])(param_2 + 0x16,lVar7 + uVar5 * 0x110 + 0xb0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar3 = param_2[0x15]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(lVar8 + 0x98) = param_2[0x13];
    *(undefined8 *)(lVar8 + 0xa8) = uVar3;
    uVar3 = param_2[0x12]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(lVar8 + 0xa0) = param_2[0x14];
    *(undefined8 *)(lVar8 + 0x90) = uVar3;
  } // [自动静态注释] 作用域/控制流边界
  *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + -1;
  *(long *)(lVar4 + 0x88) = *(long *)(lVar4 + 0x88) + 1;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



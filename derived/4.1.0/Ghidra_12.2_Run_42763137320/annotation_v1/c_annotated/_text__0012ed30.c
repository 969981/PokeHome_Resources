/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0002ED30
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0012ed30; name: FUN_.text__0012ed30
 */


void FUN__text__0012ed30(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3, // [自动静态注释] 调用尚未恢复正式名称的函数
                        undefined8 *param_4,undefined8 *param_5,long param_6,undefined8 *param_7) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar3 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = uVar3 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_2 != param_3) { // [自动静态注释] 条件判断/分支
    lVar4 = *(long *)(uVar3 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar2 = param_5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      if (lVar4 == 0x10) goto LAB__text__0012ee18; // [自动静态注释] 条件判断/分支
      *(undefined8 *)(uVar3 + 0x18 + lVar4 * 8) = *param_1;
      *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
      uVar5 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar1 = param_2 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *param_2 = 0;
      param_5 = puVar2 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *puVar2 = uVar5;
      lVar4 = *(long *)(uVar3 + 0x98) + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long *)(uVar3 + 0x98) = lVar4;
      param_2 = puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar2 = param_5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (puVar1 != param_3); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  if (*(long *)(uVar3 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
LAB__text__0012ee18: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)(uVar3 + 0x18 + *(long *)(uVar3 + 0x98) * 8) = *param_1;
  *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
  uVar5 = *param_7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_7 = 0;
  *param_5 = uVar5;
  lVar4 = *(long *)(uVar3 + 0x98) + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(uVar3 + 0x98) = lVar4;
  if (param_3 != param_4) { // [自动静态注释] 条件判断/分支
    puVar2 = param_5 + param_6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      if (lVar4 == 0x10) goto LAB__text__0012ee18; // [自动静态注释] 条件判断/分支
      *(undefined8 *)(uVar3 + 0x18 + lVar4 * 8) = *param_1;
      *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
      uVar5 = *param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar1 = param_3 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *param_3 = 0;
      *puVar2 = uVar5;
      lVar4 = *(long *)(uVar3 + 0x98) + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long *)(uVar3 + 0x98) = lVar4;
      param_3 = puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar2 = puVar2 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (puVar1 != param_4); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



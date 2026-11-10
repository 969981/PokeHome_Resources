/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002C8F40
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c8f40; name: FUN_.text__003c8f40
 */


void FUN__text__003c8f40(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3, // [自动静态注释] 调用尚未恢复正式名称的函数
                        undefined8 *param_4,undefined8 *param_5,long param_6,undefined8 *param_7) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  ulong uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar1 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = uVar1 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_2 != param_3) { // [自动静态注释] 条件判断/分支
    lVar2 = *(long *)(uVar1 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      if (lVar2 == 0x10) goto LAB__text__003c9054; // [自动静态注释] 条件判断/分支
      *(undefined8 *)(uVar1 + 0x18 + lVar2 * 8) = *param_1;
      *(long *)(uVar1 + 0x98) = *(long *)(uVar1 + 0x98) + 1;
      *param_5 = *param_2;
      uVar3 = param_2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_2[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_2 = param_2 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_5[1] = uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_5 = param_5 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar2 = *(long *)(uVar1 + 0x98) + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long *)(uVar1 + 0x98) = lVar2;
    } while (param_2 != param_3); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  if (*(long *)(uVar1 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
LAB__text__003c9054: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)(uVar1 + 0x18 + *(long *)(uVar1 + 0x98) * 8) = *param_1;
  *(long *)(uVar1 + 0x98) = *(long *)(uVar1 + 0x98) + 1;
  *param_5 = *param_7;
  uVar3 = param_7[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_7[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_5[1] = uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = *(long *)(uVar1 + 0x98) + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(uVar1 + 0x98) = lVar2;
  if (param_3 != param_4) { // [自动静态注释] 条件判断/分支
    param_5 = param_5 + param_6 * 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      if (lVar2 == 0x10) goto LAB__text__003c9054; // [自动静态注释] 条件判断/分支
      *(undefined8 *)(uVar1 + 0x18 + lVar2 * 8) = *param_1;
      *(long *)(uVar1 + 0x98) = *(long *)(uVar1 + 0x98) + 1;
      *param_5 = *param_3;
      uVar3 = param_3[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_3[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_3 = param_3 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_5[1] = uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_5 = param_5 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar2 = *(long *)(uVar1 + 0x98) + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long *)(uVar1 + 0x98) = lVar2;
    } while (param_3 != param_4); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



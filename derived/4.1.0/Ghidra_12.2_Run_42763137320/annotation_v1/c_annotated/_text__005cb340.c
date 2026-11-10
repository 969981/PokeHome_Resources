/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004CB340
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005cb340; name: FUN_.text__005cb340
 */


void FUN__text__005cb340(long *param_1,undefined8 *param_2,undefined8 *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar1 = (undefined8 *)param_2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar3 = (undefined8 *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (puVar3 != param_3) { // [自动静态注释] 条件判断/分支
    uVar5 = uVar4 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar7 = *(long *)(uVar5 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar6 = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      if (lVar7 == 0x10) goto LAB__text__005cb460; // [自动静态注释] 条件判断/分支
      *(long *)((uVar5 | 0x18) + lVar7 * 8) = param_1[3];
      *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + 1;
      puVar6 = puVar6 + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar8 = *puVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *puVar6 = 0;
      puVar1 = puVar1 + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *puVar1 = uVar8;
      lVar7 = *(long *)(uVar5 + 0x98) + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long *)(uVar5 + 0x98) = lVar7;
    } while (puVar6 != puVar3); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  param_2[1] = puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar3 = (undefined8 *)param_2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar6 = (undefined8 *)param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (puVar6 != param_3) { // [自动静态注释] 条件判断/分支
    uVar4 = uVar4 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar7 = *(long *)(uVar4 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar1 = puVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      if (lVar7 == 0x10) { // [自动静态注释] 条件判断/分支
LAB__text__005cb460: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    /* WARNING: Subroutine does not return */
        FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
      *(long *)((uVar4 | 0x18) + lVar7 * 8) = param_1[3];
      *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
      uVar8 = *param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar2 = param_3 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *param_3 = 0;
      puVar3 = puVar1 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *puVar1 = uVar8;
      lVar7 = *(long *)(uVar4 + 0x98) + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long *)(uVar4 + 0x98) = lVar7;
      param_3 = puVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar1 = puVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (puVar2 != puVar6); // [自动静态注释] 循环/迭代
    puVar1 = (undefined8 *)param_2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  param_2[2] = puVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar7 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = (long)puVar1;
  param_2[1] = lVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar7 = param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[1] = param_2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_2[2] = lVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar7 = param_1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[2] = param_2[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_2[3] = lVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_2 = param_2[1];
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



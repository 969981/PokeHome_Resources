/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004AB36C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005ab36c; name: FUN_.text__005ab36c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__005ab36c(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar8 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar8 = uVar8 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar8 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(long **)(uVar8 + *(long *)(uVar8 + 0x98) * 8 + 0x18) = param_1;
  *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
  plVar4 = (long *)(**(code **)(*param_1 + 0x10))(param_1,0x58,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar4 == (long *)0x0) { // [自动静态注释] 条件判断/分支
    lVar5 = (**(code **)(*param_1 + 0xb8))(param_1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(lVar5 + 0x50) != 0) { // [自动静态注释] 条件判断/分支
      uVar6 = (**(code **)(*(long *)(*(long *)(lVar5 + 0x50) + 0x48) + 0x18))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(lVar5 + 0x50) = 0;
    } // [自动静态注释] 作用域/控制流边界
    return uVar6; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  *_DAT_008a56f0 = 1;
  lVar5 = _DAT_008a56f8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar4[6] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar4[7] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar4[10] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar4[8] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar4[9] = lVar5 + 0x40; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *plVar4 = lVar5 + 0x10;
  plVar4[1] = (long)param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar4[2] = (long)plVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar4[3] = 0x58; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar4[4] = 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar4[5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar3 = _DAT_0089fd80; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
  puVar7 = (undefined8 *)*puVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *puVar3 = plVar4;
  if (puVar7 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    plVar4 = (long *)puVar7[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar6 = puVar7[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = puVar7[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar9 = puVar7[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (**(code **)*puVar7)(puVar7); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    (**(code **)(*plVar4 + 0x18))(plVar4,uVar6,uVar2,uVar9); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    plVar4 = (long *)*puVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  plVar1 = (long *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar4 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    plVar1 = plVar4 + 9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005e914c(plVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return *puVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



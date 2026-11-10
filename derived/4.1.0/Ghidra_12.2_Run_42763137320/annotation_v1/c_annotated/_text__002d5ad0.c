/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001D5AD0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002d5ad0; name: thunk_FUN_.text__002d5ad4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long thunk_FUN__text__002d5ad4(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
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
  lVar6 = (**(code **)(*param_1 + 0x10))(param_1,0x50,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar6 == 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*param_1 + 0xb8))(param_1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__002d5a54(0); // [自动静态注释] 调用尚未恢复正式名称的函数
    _DAT_00000010 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    _DAT_00000018 = 0x50; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    _DAT_00000020 = 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    _DAT_00000008 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__002d5a54(lVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(long **)(lVar6 + 8) = param_1;
    *(long *)(lVar6 + 0x10) = lVar6;
    *(undefined8 *)(lVar6 + 0x18) = 0x50;
    *(undefined8 *)(lVar6 + 0x20) = 8;
  } // [自动静态注释] 作用域/控制流边界
  plVar5 = _DAT_008a2820; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar7 = (undefined8 *)*_DAT_008a2820; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
  *plVar5 = lVar6;
  if (puVar7 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    plVar3 = (long *)puVar7[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar9 = puVar7[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = puVar7[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = puVar7[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (**(code **)*puVar7)(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    (**(code **)(*plVar3 + 0x18))(plVar3,uVar2,uVar4,uVar9); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar6 = *plVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  lVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar6 != 0) { // [自动静态注释] 条件判断/分支
    lVar1 = lVar6 + 0x48; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005e914c(lVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return *plVar5; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



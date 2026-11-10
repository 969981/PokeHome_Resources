/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003D0394
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004d0394; name: FUN_.text__004d0394
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004d0394(long *param_1,ulong param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar2 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar5 = *(long **)(lVar2 + (param_2 & 0xffffffff) * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar5 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    plVar1 = (long *)plVar5[0x12]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (plVar1 != (long *)0x0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*plVar1 + 0x10))(plVar1,_DAT_008a47f0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      plVar5[0x12] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    puVar6 = (undefined8 *)plVar5[0x13]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (puVar6 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
      (**(code **)*puVar6)(puVar6); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      FUN__text__00400fc0(5,puVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
      plVar5[0x13] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    (**(code **)(*plVar5 + 0x28))(plVar5); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar2 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar6 = *(undefined8 **)(lVar2 + (param_2 & 0xffffffff) * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (puVar6 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
      (**(code **)*puVar6)(puVar6); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      FUN__text__00400fc0(5,puVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
      lVar2 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  uVar4 = *(uint *)(param_1 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar6 = (undefined8 *)(lVar2 + (param_2 & 0xffffffff) * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar3 = (undefined8 *)((lVar2 + (ulong)uVar4 * 8) - 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (puVar6 < puVar3) { // [自动静态注释] 条件判断/分支
    *puVar6 = *puVar3;
    uVar4 = *(uint *)(param_1 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  *(uint *)(param_1 + 1) = uVar4 - 1;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



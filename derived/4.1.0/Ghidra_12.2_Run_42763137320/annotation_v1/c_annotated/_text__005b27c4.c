/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004B27C4
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005b27c4; name: FUN_.text__005b27c4
 */


void FUN__text__005b27c4(long param_1,long param_2,long param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ulong uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(long *)(param_1 + 200) = param_2;
  plVar3 = *(long **)(param_1 + 0x88); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_28 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_8 = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar3 == (long *)0x0 || plVar3 == (long *)(param_1 + 0x88)) { // [自动静态注释] 条件判断/分支
    FUN__text__005b3ba0(param_1 + 8,&local_8,&local_28); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar1 = (*(long *)(param_1 + 0x48) + *(long *)(param_1 + 0x40)) - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar2 = (long *)(*(long *)(*(long *)(param_1 + 0x10) + (uVar1 / 0x38) * 8) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                     (uVar1 % 0x38) * 0x48); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    plVar2 = *(long **)(param_1 + 0x90); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar2[6] = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar2[7] = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar6 = *(long **)(param_1 + 0x90); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar5 = *plVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar3 = (long *)plVar6[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *plVar3 = lVar5;
    *(long **)(lVar5 + 8) = plVar3;
    *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + -1;
    *plVar6 = 0;
    plVar6[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  puVar4 = *(undefined8 **)(param_1 + 0x78); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar3 = plVar2 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *plVar2 = param_1 + 0x70;
  plVar2[1] = (long)puVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long **)(param_1 + 0x78) = plVar2;
  *puVar4 = plVar2;
  plVar6 = (long *)(param_1 + 0xb0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar5 = *plVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 1;
  *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x98) + 1;
  if (lVar5 == param_1 + 0xa0) { // [自动静态注释] 条件判断/分支
    *(long **)(param_1 + 0xa0) = plVar3;
    plVar6 = (long *)(param_1 + 0xa8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long **)(param_1 + 0xb0) = plVar3;
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(long **)(lVar5 + 0x10) = plVar3;
    if (lVar5 != *plVar6) goto LAB__text__005b28d8; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  *plVar6 = (long)plVar3;
LAB__text__005b28d8: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  plVar2[2] = lVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__005b4940(); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



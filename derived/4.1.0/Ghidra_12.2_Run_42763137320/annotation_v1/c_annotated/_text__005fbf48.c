/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004FBF48
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005fbf48; name: FUN_.text__005fbf48
 */


void FUN__text__005fbf48(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 *param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar3 = (undefined8 *)(param_2 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1 = (undefined8 *)(**(code **)(*(long *)*puVar3 + 0x10))((long *)*puVar3,0x58,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (puVar1 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)*puVar3 + 0xb8))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *param_1 = puVar1;
  param_1[1] = puVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)(param_1 + 2) = 0;
  uVar4 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = uVar4 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar4 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x18) = *puVar3;
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
  puVar1[2] = *param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[3] = param_4[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[4] = param_4[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = param_4[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[5] = lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  puVar1[6] = param_4[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[7] = param_4[5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[8] = param_4[6]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[9] = param_4[7]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = param_4[8]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[10] = lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
  *puVar1 = 0;
  puVar1[1] = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)(param_1 + 2) = 1;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



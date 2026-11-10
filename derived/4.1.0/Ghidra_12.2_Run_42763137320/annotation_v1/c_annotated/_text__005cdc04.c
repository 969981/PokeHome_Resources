/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004CDC04
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005cdc04; name: FUN_.text__005cdc04
 */


void FUN__text__005cdc04(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar5 = *(long *)(param_1 + 0x1a8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  if (lVar5 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  puVar4 = DAT_008e1498; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  DAT_008e1498 = (undefined8 *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (puVar4 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  plVar2 = (long *)puVar4[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar6 = puVar4[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = puVar4[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = puVar4[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (**(code **)*puVar4)(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    /* WARNING: Could not recover jumptable at 0x005cdc7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2,uVar1,uVar3,uVar6); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00019310
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00119310; name: FUN_.text__00119310
 */


void FUN__text__00119310(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar3 = *(long **)(param_1 + 0x408); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1 = (undefined8 *)(**(code **)(*plVar3 + 0x10))(plVar3,8,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = uVar2 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar2 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(long **)(uVar2 + *(long *)(uVar2 + 0x98) * 8 + 0x18) = plVar3;
  *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + 1;
  *puVar1 = 0x868b18;
  *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + -1;
  puVar4 = *(undefined8 **)(param_1 + 0xd0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 **)(param_1 + 0xd0) = puVar1;
  if (puVar4 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    (**(code **)*puVar4)(puVar4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    (**(code **)(**(long **)(param_1 + 0xd8) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              (*(long **)(param_1 + 0xd8),puVar4,*(undefined8 *)(param_1 + 0xe0), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
               *(undefined8 *)(param_1 + 0xe8));
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)(param_1 + 0xe8) = 8;
  *(long **)(param_1 + 0xd8) = plVar3;
  *(undefined8 *)(param_1 + 0xe0) = 8;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002B2A24
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b2a24; name: FUN_.text__003b2a24
 */


void FUN__text__003b2a24(void *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(long *)((long)param_1 + 0xb0) != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(**(long **)((long)param_1 + 0x60) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              (*(long **)((long)param_1 + 0x60),*(undefined8 *)((long)param_1 + 0xa0), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
               *(long *)((long)param_1 + 0xb0) * 0x30,0x10);
  } // [自动静态注释] 作用域/控制流边界
  plVar1 = *(long **)((long)param_1 + 0x90); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2 = (long *)((long)param_1 + 0x70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar1 == plVar2) { // [自动静态注释] 条件判断/分支
    puVar3 = (undefined8 *)(*plVar2 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__003b2a88: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    (*(code *)*puVar3)(plVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  else if (plVar1 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    puVar3 = (undefined8 *)(*plVar1 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar2 = plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    goto LAB__text__003b2a88; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  plVar1 = *(long **)((long)param_1 + 0x50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2 = (long *)((long)param_1 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar1 == plVar2) { // [自动静态注释] 条件判断/分支
    puVar3 = (undefined8 *)(*plVar2 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (plVar1 == (long *)0x0) goto LAB__text__003b2ac4; // [自动静态注释] 条件判断/分支
    puVar3 = (undefined8 *)(*plVar1 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar2 = plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  (*(code *)*puVar3)(plVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
LAB__text__003b2ac4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  operator_delete(param_1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



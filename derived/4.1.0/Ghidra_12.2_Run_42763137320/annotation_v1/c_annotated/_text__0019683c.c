/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0009683C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0019683c; name: FUN_.text__0019683c
 */


void FUN__text__0019683c(void *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar1 = *(long *)((long)param_1 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)((long)param_1 + 0x30) = 0;
  if (lVar1 != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__0016f4b0(lVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
    (**(code **)(**(long **)((long)param_1 + 0x38) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              (*(long **)((long)param_1 + 0x38),lVar1,*(undefined8 *)((long)param_1 + 0x40), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
               *(undefined8 *)((long)param_1 + 0x48));
  } // [自动静态注释] 作用域/控制流边界
  puVar2 = *(undefined8 **)((long)param_1 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)((long)param_1 + 0x10) = 0;
  if (puVar2 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    (**(code **)*puVar2)(puVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    (**(code **)(**(long **)((long)param_1 + 0x18) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              (*(long **)((long)param_1 + 0x18),puVar2,*(undefined8 *)((long)param_1 + 0x20), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
               *(undefined8 *)((long)param_1 + 0x28));
  } // [自动静态注释] 作用域/控制流边界
  operator_delete(param_1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



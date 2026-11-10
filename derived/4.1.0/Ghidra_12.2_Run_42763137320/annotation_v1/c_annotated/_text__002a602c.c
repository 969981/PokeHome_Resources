/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001A602C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002a602c; name: FUN_.text__002a602c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002a602c(void *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *pcVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(long *)((long)param_1 + 0x10) = _DAT_0089f718 + 0x10;
  if (*(long *)((long)param_1 + 0x18) == 0) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)((long)param_1 + 0x18) = 0;
    pcVar2 = *(code **)((long)param_1 + 0xa8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__005d9290(); // [自动静态注释] 调用尚未恢复正式名称的函数
    lVar1 = *(long *)((long)param_1 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)((long)param_1 + 0x18) = 0;
    if (lVar1 != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    pcVar2 = *(code **)((long)param_1 + 0xa8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (pcVar2 != (code *)0x0) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)((long)param_1 + 0xb0) = 0;
    *(undefined8 *)((long)param_1 + 0xb8) = 0;
    *(undefined8 *)((long)param_1 + 0xa0) = 0;
    *(undefined8 *)((long)param_1 + 0xa8) = 0;
    (*pcVar2)((long)param_1 + 0xc0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  pcVar2 = *(code **)((long)param_1 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (pcVar2 != (code *)0x0) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)((long)param_1 + 0x30) = 0;
    *(undefined8 *)((long)param_1 + 0x38) = 0;
    *(undefined8 *)((long)param_1 + 0x20) = 0;
    *(undefined8 *)((long)param_1 + 0x28) = 0;
    (*pcVar2)((long)param_1 + 0x40); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  if (*(long *)((long)param_1 + 0x18) != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(*(long *)((long)param_1 + 0x18) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  operator_delete(param_1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



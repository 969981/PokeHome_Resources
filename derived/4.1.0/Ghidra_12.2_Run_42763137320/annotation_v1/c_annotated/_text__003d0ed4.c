/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002D0ED4
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d0ed4; name: FUN_.text__003d0ed4
 */


void FUN__text__003d0ed4(long param_1,undefined8 param_2,long *param_3,undefined8 param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        int param_5) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((*(long *)(param_1 + 0x68) == 0) || (*(char *)(*(long *)(param_1 + 0x68) + 0x170) == '\0')) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  plVar1 = (long *)FUN__text__003e7418(*(undefined8 *)(param_1 + 0x170)); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar2 = (**(code **)(*plVar1 + 0x38))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__003e7434(*(undefined8 *)(param_1 + 0x170),plVar1,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  lVar2 = (**(code **)(*param_3 + 0x58))(param_3,0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long **)(*(long *)(lVar2 + 0x18) + (long)param_5 * 0x10 + 8) = plVar1;
  FUN__text__003e716c(*(undefined8 *)(param_1 + 0x170)); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



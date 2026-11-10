/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002FE878
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003fe878; name: FUN_.text__003fe878
 */


short FUN__text__003fe878(long param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  short sVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  sVar2 = *(short *)(param_2 + 0x24) + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(short *)(param_2 + 0x24) = sVar2;
  if (sVar2 != 0) { // [自动静态注释] 条件判断/分支
    return sVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if (*(int *)(param_2 + 0x20) == -1) { // [自动静态注释] 条件判断/分支
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) - *(int *)(param_2 + 0x1c);
    FUN__text__003ff460(param_1 + 0x38,*(int *)(param_2 + 8) - *(int *)(param_1 + 0x338), // [自动静态注释] 调用尚未恢复正式名称的函数
                        *(undefined4 *)(param_2 + 0x1c));
    FUN__text__00400fc0(7,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + *(int *)(param_2 + 0x18);
    *(undefined8 *)(param_2 + 0x10) = 0;
    plVar1 = (long *)(param_1 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(param_1 + 0x18) != 0) { // [自动静态注释] 条件判断/分支
      plVar1 = (long *)(*(long *)(param_1 + 0x10) + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *plVar1 = param_2;
    *(long *)(param_1 + 0x10) = param_2;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__003fe0c8(*(undefined8 *)(param_1 + 0x360)); // [自动静态注释] 调用尚未恢复正式名称的函数
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



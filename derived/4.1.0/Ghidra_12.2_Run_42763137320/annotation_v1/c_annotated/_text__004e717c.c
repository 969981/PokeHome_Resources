/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003E717C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e717c; name: FUN_.text__004e717c
 */


undefined8 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
FUN__text__004e717c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                   undefined4 param_9,undefined4 param_10,long *param_11) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_3 == 0) { // [自动静态注释] 条件判断/分支
    return 0x1f; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  plVar1 = (long *)FUN__text__00400f80(0,0x1a0); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (plVar1 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    FUN__text__004e5550(plVar1,param_2,param_1,param_3,param_4,param_5,param_6,param_7,param_8, // [自动静态注释] 调用尚未恢复正式名称的函数
                        param_9,param_10); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *param_11 = (long)plVar1;
    uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((int)uVar2 == 1) { // [自动静态注释] 条件判断/分支
      return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__00447104(*param_11); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *param_11 = 0;
  return 2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



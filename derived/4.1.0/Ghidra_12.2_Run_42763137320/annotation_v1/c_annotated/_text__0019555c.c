/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0009555C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0019555c; name: FUN_.text__0019555c
 */


void FUN__text__0019555c(long param_1,undefined8 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ulong uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_18 = *(long *)(param_1 + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (local_18 == 0) { // [自动静态注释] 条件判断/分支
    FUN__text__001916b0(param_1,&local_18,param_2,0); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar1 = FUN__text__00306588(*(undefined8 *)(param_1 + 0x38)); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    plVar2 = (long *)(local_18 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (**(code **)(*plVar2 + 0x10))(plVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__001916b0(param_1,&local_18,param_2,0); // [自动静态注释] 调用尚未恢复正式名称的函数
    (**(code **)(*plVar2 + 0x18))(plVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar1 = FUN__text__00306588(*(undefined8 *)(param_1 + 0x38)); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  if ((uVar1 & 1) == 0) { // [自动静态注释] 条件判断/分支
    FUN__text__00307ca0(*(undefined8 *)(param_1 + 0x38)); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  local_38 = *(long *)(param_1 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (local_38 == 0) { // [自动静态注释] 条件判断/分支
    FUN__text__001951d4(param_1,&local_38,param_2,1); // [自动静态注释] 调用尚未恢复正式名称的函数
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  plVar2 = (long *)(local_38 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (**(code **)(*plVar2 + 0x10))(plVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__001951d4(param_1,&local_38,param_2,1); // [自动静态注释] 调用尚未恢复正式名称的函数
                    /* WARNING: Could not recover jumptable at 0x00195618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



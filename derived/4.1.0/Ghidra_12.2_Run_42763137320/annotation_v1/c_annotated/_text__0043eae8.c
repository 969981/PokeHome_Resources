/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0033EAE8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0043eae8; name: FUN_.text__0043eae8
 */


long FUN__text__0043eae8(long *param_1,long param_2,long param_3,undefined8 *param_4,int param_5, // [自动静态注释] 调用尚未恢复正式名称的函数
                        long param_6,undefined1 *param_7,undefined1 *param_8) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  ulong uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *param_7 = 0;
  if (((param_5 == 1) && (*(char *)(param_6 + 0x20) != -1)) && (*(char *)(param_3 + 8) != '\0')) { // [自动静态注释] 条件判断/分支
    uVar1 = (**(code **)(*param_1 + 0x40))(param_1,param_3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((uVar1 & 1) == 0) { // [自动静态注释] 条件判断/分支
      return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else if (*(int *)(param_3 + 0x2c) == 3) { // [自动静态注释] 条件判断/分支
    return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if ((param_2 == 0) || (*(int *)(param_2 + 0xc0) == 4)) { // [自动静态注释] 条件判断/分支
    if ((param_5 != 0) && (*(int *)(param_3 + 0x2c) == 0)) { // [自动静态注释] 条件判断/分支
      return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    param_2 = FUN__text__00443db0((int)param_1[0x12],param_1,param_5,param_6); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (param_2 == 0) { // [自动静态注释] 条件判断/分支
      return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__00444230(param_2,param_3,*param_4); // [自动静态注释] 调用尚未恢复正式名称的函数
    *param_8 = 1;
    param_8 = param_7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if ((*(byte *)((long)param_1 + 0x94) >> 1 & 1) == 0) { // [自动静态注释] 条件判断/分支
      return param_2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    if ((*(uint *)(param_3 + 0x2c) | 2) != 3) { // [自动静态注释] 条件判断/分支
      return param_2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__00444230(param_2,param_3,*param_4); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *param_8 = 1;
  return param_2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



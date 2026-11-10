/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005C6EE0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006c6ee0; name: FUN_.text__006c6ee0
 */


void FUN__text__006c6ee0(long *param_1,undefined8 param_2,undefined8 param_3,uint param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  if ((*(byte *)((long)param_1 + 0xdd) & 1) != 0) { // [自动静态注释] 条件判断/分支
    *(byte *)((long)param_1 + 0xdd) = *(byte *)((long)param_1 + 0xdd) & 0xfe;
    FUN__text__006b4450(param_1,param_3,1); // [自动静态注释] 调用尚未恢复正式名称的函数
    if ((*(byte *)((long)param_1 + 0xdd) >> 1 & 1) == 0) { // [自动静态注释] 条件判断/分支
      if (*(uint *)((long)param_1 + 0xd4) < 2) { // [自动静态注释] 条件判断/分支
        FUN__text__006c6f90(); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        FUN__text__006c7960(); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    else if (*(uint *)((long)param_1 + 0xd4) < 2) { // [自动静态注释] 条件判断/分支
      FUN__text__006c7b00(); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      FUN__text__006c84e0(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__006b34b0(param_1,param_2,param_3,param_4 & 1); // [自动静态注释] 调用尚未恢复正式名称的函数
                    /* WARNING: Could not recover jumptable at 0x006c6f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xf8))(param_1,param_2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



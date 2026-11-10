/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0055031C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0065031c; name: FUN_.text__0065031c
 */


undefined4 FUN__text__0065031c(undefined8 *param_1,int param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined4 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_1 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    if (param_1[10] != 0) { // [自动静态注释] 条件判断/分支
      if ((*(int *)((long)param_1 + 0x25c) != param_2) || (*(char *)((long)param_1 + 0x269) == '\0') // [自动静态注释] 条件判断/分支
         ) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        FUN__text__0065c438(*param_1,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
        FUN__text__0065cab0(*param_1,1); // [自动静态注释] 调用尚未恢复正式名称的函数
        uVar1 = (*(code *)param_1[10])(param_1[0xb],param_2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        FUN__text__0065cab0(*param_1,0); // [自动静态注释] 调用尚未恢复正式名称的函数
        return uVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      *(undefined1 *)((long)param_1 + 0x269) = 0;
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__0065c438(*param_1,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  nnsocketClose(param_2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



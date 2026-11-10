/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0035C13C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0045c13c; name: FUN_.text__0045c13c
 */


long FUN__text__0045c13c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        undefined4 param_5,uint param_6) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar1 = FUN__text__00400f90(5,0x1a0,0x10); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (lVar1 != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__0045bbd0(lVar1,param_2,param_3,param_4,param_5,param_6 & 1); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (*param_1 == 0) { // [自动静态注释] 条件判断/分支
      *param_1 = lVar1;
      *(undefined8 *)(lVar1 + 0x20) = 0;
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *(long *)(lVar1 + 0x20) = *param_1;
      *param_1 = lVar1;
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return lVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00586F28
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00686f28; name: FUN_.text__00686f28
 */


long FUN__text__00686f28(undefined8 param_1,undefined8 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  iVar1 = FUN__text__006869c8(); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (iVar1 != -1) { // [自动静态注释] 条件判断/分支
    if (iVar1 < 0x32) { // [自动静态注释] 条件判断/分支
      lVar2 = FUN__text__00686a30(0x2000,param_1,param_2,0x70f387); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (lVar2 == 0) { // [自动静态注释] 条件判断/分支
        return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      FUN__text__00686df4(lVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
      nnosStartThread(lVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      return lVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    nnsocketSetLastErrno(0xb); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



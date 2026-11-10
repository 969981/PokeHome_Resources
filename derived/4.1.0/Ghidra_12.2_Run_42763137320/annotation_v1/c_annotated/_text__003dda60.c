/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002DDA60
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003dda60; name: FUN_.text__003dda60
 */


undefined8 FUN__text__003dda60(undefined8 param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__003d83e0(); // [自动静态注释] 调用尚未恢复正式名称的函数
  iVar1 = FUN__text__003d7a74(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  do { // [自动静态注释] 循环/迭代
    if (iVar1 != 0x2f) { // [自动静态注释] 条件判断/分支
      return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    uVar2 = FUN__text__003d8118(param_1,0x71f664,2); // [自动静态注释] 调用尚未恢复正式名称的函数
    if ((uVar2 & 1) == 0) { // [自动静态注释] 条件判断/分支
      uVar2 = FUN__text__003d8118(param_1,0x721017,2); // [自动静态注释] 调用尚未恢复正式名称的函数
      if ((uVar2 & 1) == 0) { // [自动静态注释] 条件判断/分支
        return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      while (iVar1 = FUN__text__003d7b98(param_1), -1 < iVar1) { // [自动静态注释] 循环/迭代
        if ((iVar1 == 0x2a) && // [自动静态注释] 条件判断/分支
           ((iVar1 = FUN__text__003d7b98(param_1), iVar1 < 0 || (iVar1 == 0x2f)))) break; // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      do { // [自动静态注释] 循环/迭代
        iVar1 = FUN__text__003d7b98(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
        if (iVar1 < 0) break; // [自动静态注释] 条件判断/分支
      } while (iVar1 != 10); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__003d83e0(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    iVar1 = FUN__text__003d7a74(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  } while( true ); // [自动静态注释] 循环/迭代
} // [自动静态注释] 作用域/控制流边界



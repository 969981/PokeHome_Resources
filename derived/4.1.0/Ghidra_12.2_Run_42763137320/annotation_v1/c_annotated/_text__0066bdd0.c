/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0056BDD0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0066bdd0; name: FUN_.text__0066bdd0
 */


undefined8 FUN__text__0066bdd0(long param_1,undefined8 param_2,undefined8 param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((-1 < *(long *)(param_1 + 4000)) && (*(long *)(param_1 + 0x7e8) != 0)) { // [自动静态注释] 条件判断/分支
    if (*(long *)(param_1 + 4000) < *(long *)(param_1 + 0x7e0)) { // [自动静态注释] 条件判断/分支
      if (*(long *)(param_1 + 0x1108) == 0) { // [自动静态注释] 条件判断/分支
        *(undefined8 *)(param_1 + 0x1108) = param_2;
        *(undefined8 *)(param_1 + 0x1110) = param_3;
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        iVar1 = FUN__text__0066c6d8(param_2,param_3,*(long *)(param_1 + 0x1108), // [自动静态注释] 调用尚未恢复正式名称的函数
                                    *(undefined8 *)(param_1 + 0x1110));
        if (*(long *)(param_1 + 0x7e8) * 1000 <= (long)iVar1) { // [自动静态注释] 条件判断/分支
          FUN__text__0066713c(param_1,0x7199c7,*(undefined8 *)(param_1 + 0x7e0)); // [自动静态注释] 调用尚未恢复正式名称的函数
          return 0x1c; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *(undefined8 *)(param_1 + 0x1108) = 0;
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  if (*(long *)(param_1 + 0x7e0) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__0065a050(param_1,1000,7); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



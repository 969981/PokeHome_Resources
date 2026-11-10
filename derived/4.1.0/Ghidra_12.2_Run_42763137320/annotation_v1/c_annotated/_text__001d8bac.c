/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000D8BAC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001d8bac; name: FUN_.text__001d8bac
 */


void FUN__text__001d8bac(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  char cVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(long *)(param_1 + 0x18) == 0) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  if (**(char **)(*(long *)(param_1 + 0x18) + 0x30) != '\0') { // [自动静态注释] 条件判断/分支
    lVar3 = *(long *)(param_1 + 8) + 0x110; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar2 = FUN__text__0012cb14(lVar3,param_1 + 0x208); // [自动静态注释] 调用尚未恢复正式名称的函数
    lVar3 = FUN__text__0012cb14(lVar3,param_1 + 0x278); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (*(char *)(param_1 + 0x6e0) != '\0') { // [自动静态注释] 条件判断/分支
      if (*(char *)(lVar2 + 0x82) == '\0') { // [自动静态注释] 条件判断/分支
        FUN__text__003a14c4(lVar2,1); // [自动静态注释] 调用尚未恢复正式名称的函数
        cVar1 = *(char *)(lVar3 + 0x82); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        cVar1 = *(char *)(lVar3 + 0x82); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      if (cVar1 == '\0') { // [自动静态注释] 条件判断/分支
        FUN__text__003a14c4(lVar3,1); // [自动静态注释] 调用尚未恢复正式名称的函数
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



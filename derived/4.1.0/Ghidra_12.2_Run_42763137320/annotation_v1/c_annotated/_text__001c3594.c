/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000C3594
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001c3594; name: FUN_.text__001c3594
 */


void FUN__text__001c3594(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (((*(long **)(param_1 + 0x640) == (long *)0x0) || (**(long **)(param_1 + 0x640) == 0)) || // [自动静态注释] 条件判断/分支
     (*(long *)(param_1 + 0x6b8) == 0)) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x725e68); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (lVar1 != 0) { // [自动静态注释] 条件判断/分支
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
  } // [自动静态注释] 作用域/控制流边界
  if (*(int *)**(undefined8 **)(param_1 + 0x640) == 2) { // [自动静态注释] 条件判断/分支
    if (*(long *)(param_1 + 0x6b8) != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__001c6e54(*(long *)(param_1 + 0x6b8),0); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__001c6ea8(*(undefined8 *)(param_1 + 0x6b8),0); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__001a0d44(*(undefined8 *)(param_1 + 0x6f8)); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x725e70); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (lVar1 != 0) { // [自动静态注释] 条件判断/分支
      *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
    } // [自动静态注释] 作用域/控制流边界
    lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x725e68); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (lVar1 != 0) { // [自动静态注释] 条件判断/分支
      *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) | 1;
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__001b1b44(*(undefined8 *)(param_1 + 0x678),1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__001b1b44(*(undefined8 *)(param_1 + 0x698),1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__001c5cac(*(undefined8 *)(param_1 + 0x698),**(undefined8 **)(param_1 + 0x640)); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__001b1b44(*(undefined8 *)(param_1 + 0x6b8),1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__0019e41c(*(undefined8 *)(param_1 + 0x6f8)); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*(int *)(*(long *)(param_1 + 0x6f8) + 0x1c0) == 0) { // [自动静态注释] 条件判断/分支
    FUN__text__001b1b44(*(undefined8 *)(param_1 + 0x6d8),1); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__001c798c(*(undefined8 *)(param_1 + 0x6d8), // [自动静态注释] 调用尚未恢复正式名称的函数
                        *(int *)**(undefined8 **)(param_1 + 0x640) == 1);
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



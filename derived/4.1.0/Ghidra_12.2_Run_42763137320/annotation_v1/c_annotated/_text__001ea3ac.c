/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000EA3AC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001ea3ac; name: FUN_.text__001ea3ac
 */


void FUN__text__001ea3ac(long param_1,uint param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar1 = *(long *)(param_1 + 0x180); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_2 < *(uint *)(lVar1 + 0x23284)) { // [自动静态注释] 条件判断/分支
    if (param_2 >> 4 < 0x465) { // [自动静态注释] 条件判断/分支
      FUN__text__001e62c0(param_1,*(undefined4 *)(param_1 + 0x17c), // [自动静态注释] 调用尚未恢复正式名称的函数
                          *(undefined4 *)(lVar1 + (ulong)param_2 * 4));
      FUN__text__001e61f0(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(undefined4 *)(param_1 + 0x98) = 1;
    if (param_2 >> 4 < 0x465) { // [自动静态注释] 条件判断/分支
      *(int *)(param_1 + 0x9c) = *(int *)(lVar1 + (ulong)param_2 * 4) + 0x30;
      FUN__text__001e67f0(param_1,*(undefined4 *)(param_1 + 0x17c)); // [自动静态注释] 调用尚未恢复正式名称的函数
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Subroutine does not return */
  FUN__text__0011a180(0x717b65); // [自动静态注释] 调用尚未恢复正式名称的函数
} // [自动静态注释] 作用域/控制流边界



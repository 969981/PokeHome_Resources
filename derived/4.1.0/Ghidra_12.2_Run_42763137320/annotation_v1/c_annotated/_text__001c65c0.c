/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000C65C0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001c65c0; name: FUN_.text__001c65c0
 */


void FUN__text__001c65c0(long param_1,int *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    lVar1 = param_1 + lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((((*(int *)(lVar1 + 0x24) == *param_2) && (*(int *)(lVar1 + 0x28) == param_2[1])) && // [自动静态注释] 条件判断/分支
        (*(int *)(lVar1 + 0x2c) == param_2[2])) && (*(int *)(lVar1 + 0x30) == param_2[3])) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      FUN__text__00196350(lVar1 + 0x20); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    lVar2 = lVar2 + 0x14; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while (lVar2 != 600); // [自动静态注释] 循环/迭代
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



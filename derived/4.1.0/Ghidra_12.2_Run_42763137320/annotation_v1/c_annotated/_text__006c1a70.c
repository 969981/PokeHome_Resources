/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005C1A70
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006c1a70; name: FUN_.text__006c1a70
 */


char * FUN__text__006c1a70(char *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  size_t sVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  sVar1 = strlen(param_1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((int)sVar1 < 1) { // [自动静态注释] 条件判断/分支
    return param_1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar2 = sVar1 & 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar3 = sVar1 << 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    if (param_1[lVar3 + -0x100000000 >> 0x20] == '%') { // [自动静态注释] 条件判断/分支
      return param_1 + (lVar3 >> 0x20); // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    uVar2 = uVar2 - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar3 = lVar3 + -0x100000000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while (uVar2 != 0); // [自动静态注释] 循环/迭代
  return param_1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



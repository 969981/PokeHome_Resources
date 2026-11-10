/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00558238
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00658238; name: FUN_.text__00658238
 */


undefined8 FUN__text__00658238(char *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  size_t sVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  size_t sVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *__s; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_1 != (char *)0x0) { // [自动静态注释] 条件判断/分支
    sVar2 = strlen(param_1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      __s = *(char **)(lVar4 + 0x899d30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      sVar3 = strlen(__s); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((sVar3 <= sVar2) && // [自动静态注释] 条件判断/分支
         (iVar1 = FUN__text__0066c234(param_1 + (sVar2 - sVar3),__s), iVar1 != 0)) { // [自动静态注释] 调用尚未恢复正式名称的函数
        return *(undefined8 *)(lVar4 + 0x899d38); // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      lVar4 = lVar4 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (lVar4 != 0xa0); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



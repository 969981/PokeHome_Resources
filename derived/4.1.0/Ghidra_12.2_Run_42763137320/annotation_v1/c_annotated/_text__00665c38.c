/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00565C38
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00665c38; name: FUN_.text__00665c38
 */


undefined8 FUN__text__00665c38(undefined8 *param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  char *__s; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  size_t sVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(long *)(param_2 + 0x18) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__00656c1c(param_2,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  if (param_1 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    FUN__text__00656b14(param_2,&LAB__text__00665cec); // [自动静态注释] 调用尚未恢复正式名称的函数
    __s = (char *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    while (__s != (char *)0x0) { // [自动静态注释] 循环/迭代
      sVar1 = strlen(__s); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar2 = FUN__text__006783d4(sVar1 + 0x20); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (lVar2 == 0) { // [自动静态注释] 条件判断/分支
        FUN__text__00656c1c(param_2,0); // [自动静态注释] 调用尚未恢复正式名称的函数
        return 3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      strcpy((char *)(lVar2 + 0x18),(char *)*param_1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      FUN__text__00656b20(param_2,*(undefined8 *)(param_2 + 8),lVar2,lVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
      __s = (char *)param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_1 = param_1 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



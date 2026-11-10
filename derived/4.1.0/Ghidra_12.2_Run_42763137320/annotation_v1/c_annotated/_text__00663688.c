/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00563688
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00663688; name: FUN_.text__00663688
 */


undefined8 FUN__text__00663688(undefined8 param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar1 = FUN__text__0067fd24(param_1,*(undefined4 *)(param_2 + 8)); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((((lVar1 != 0) && (*(char *)(param_2 + 0xc) == '\x01')) && // [自动静态注释] 条件判断/分支
      (lVar1 = *(long *)(lVar1 + 0x1e8), lVar1 != 0)) && // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
     ((*(char *)(lVar1 + 0x21c) != '\0' && (*(long *)(lVar1 + 0x230) == 0)))) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar2 = FUN__text__0065fd58(); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(long *)(lVar1 + 0x230) = lVar2;
    if (lVar2 == 0) { // [自动静态注释] 条件判断/分支
      return 0xfffffdf7; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



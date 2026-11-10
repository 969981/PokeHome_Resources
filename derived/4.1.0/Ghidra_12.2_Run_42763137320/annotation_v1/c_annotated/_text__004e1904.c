/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003E1904
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e1904; name: FUN_.text__004e1904
 */


undefined8 * FUN__text__004e1904(undefined8 param_1,undefined4 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar2 = FUN__text__00400f80(6,0x28); // [自动静态注释] 调用尚未恢复正式名称的函数
  puVar3 = (undefined8 *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__004df2cc(); // [自动静态注释] 调用尚未恢复正式名称的函数
    iVar1 = FUN__text__004df2dc(lVar2,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (iVar1 != 1) { // [自动静态注释] 条件判断/分支
      return (undefined8 *)0x0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    puVar3 = (undefined8 *)FUN__text__00400f80(6,0x10); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (puVar3 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
      FUN__text__004df354(lVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__00400fc0(6,lVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
      return (undefined8 *)0x0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    *puVar3 = 0x88ed18;
    puVar3[1] = lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return puVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



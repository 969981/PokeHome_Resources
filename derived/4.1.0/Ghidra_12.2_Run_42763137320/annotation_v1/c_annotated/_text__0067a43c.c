/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0057A43C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0067a43c; name: FUN_.text__0067a43c
 */


void FUN__text__0067a43c(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_1 == 0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  lVar1 = param_1 + 0x890; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar3 = *(undefined8 **)(param_1 + 0x8e0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (puVar3 != (undefined8 *)0x0) { // [自动静态注释] 循环/迭代
    puVar2 = (undefined8 *)*puVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__006809e4(lVar1,puVar3[1]); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__006809e4(lVar1,puVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
    puVar3 = puVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00685b28(param_1 + 0x20); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__006806c8(param_1,FUN__text__0067a54c,param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__006806bc(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__0067a5c0(param_1 + 0x108,lVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__0067a5c0(param_1 + 0x120,lVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__0067a5c0(param_1 + 0x138,lVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__0067a610(param_1 + 0x150,lVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__0067a654(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  thunk_FUN__text__00680bfc(param_1 + 0x290); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00680c74(param_1 + 0x6e8); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00683464(param_1 + 0x158); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__006809e4(lVar1,param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



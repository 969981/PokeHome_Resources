/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002F79FC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f79fc; name: FUN_.text__003f79fc
 */


undefined8 * // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
FUN__text__003f79fc(undefined8 param_1,undefined8 param_2,undefined4 param_3,long *param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *param_4 = 0;
  puVar2 = (undefined8 *)FUN__text__00400f80(7,200); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (puVar2 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    FUN__text__003f60e0(param_1,100); // [自动静态注释] 调用尚未恢复正式名称的函数
    puVar2 = (undefined8 *)FUN__text__00400f80(7,200); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (puVar2 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
      return (undefined8 *)0x0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__003f83a4(puVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
  iVar1 = FUN__text__003faf34(puVar2,param_1,param_2,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (iVar1 == 1) { // [自动静态注释] 条件判断/分支
    *param_4 = (long)(puVar2 + 0xe);
    return puVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  (**(code **)*puVar2)(puVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__00400fc0(7,puVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
  return (undefined8 *)0x0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



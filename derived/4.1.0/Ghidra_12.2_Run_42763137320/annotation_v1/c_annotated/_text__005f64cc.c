/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004F64CC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f64cc; name: FUN_.text__005f64cc
 */


void FUN__text__005f64cc(undefined8 param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__005f5a2c(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar1 = FUN__text__005f5a34(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((lVar1 != param_2) && (uVar2 = FUN__text__005f5bfc(), (uVar2 & 1) == 0)) { // [自动静态注释] 条件判断/分支
    FUN__text__005f6664(param_1,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar3 = FUN__text__005f5a70(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__005f6664(param_1,uVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__005f5df8(param_1,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  lVar1 = FUN__text__005f5a5c(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((lVar1 != param_2) && (uVar2 = FUN__text__005f5bfc(), (uVar2 & 1) == 0)) { // [自动静态注释] 条件判断/分支
    FUN__text__005f6664(param_1,lVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar3 = FUN__text__005f5a70(lVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__005f6664(param_1,uVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__005f5df8(param_1,lVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
    param_2 = lVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005f5df8(param_1,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



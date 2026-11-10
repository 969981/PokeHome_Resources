/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004F60BC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f60bc; name: FUN_.text__005f60bc
 */


undefined8 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
FUN__text__005f60bc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ulong uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar2 = FUN__text__005f59ec(param_2,param_4); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (uVar2 == 0) { // [自动静态注释] 条件判断/分支
    uVar2 = FUN__text__005f5bcc(param_2,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
    if ((uVar2 & 1) == 0) { // [自动静态注释] 条件判断/分支
      FUN__text__005f6664(param_1,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
      return param_2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__005f6664(param_1,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar4 = FUN__text__005f5b08(param_2,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__005f5df8(param_1,uVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__005f5c08(param_2,1); // [自动静态注释] 调用尚未恢复正式名称的函数
    return param_2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar3 = FUN__text__005f598c(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar1 = uVar2 + param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar3 < uVar1) { // [自动静态注释] 条件判断/分支
    return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar3 = FUN__text__005f5bcc(param_2,uVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((uVar3 & 1) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__005f6664(param_1,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar4 = FUN__text__005f5b08(param_2,uVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__005f5df8(param_1,uVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__005f5c08(param_2,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  if (uVar2 < 0x100) { // [自动静态注释] 条件判断/分支
    FUN__text__005f6664(param_1,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__005f5a08(param_2,param_4); // [自动静态注释] 调用尚未恢复正式名称的函数
    return param_2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005f6664(param_1,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar4 = FUN__text__005f5b08(param_2,uVar2 - 0x18); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__005f5df8(param_1,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__005f5c08(uVar4,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return uVar4; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



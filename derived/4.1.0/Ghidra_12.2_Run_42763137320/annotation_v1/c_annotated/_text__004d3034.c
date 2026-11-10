/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003D3034
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004d3034; name: FUN_.text__004d3034
 */


undefined4 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
FUN__text__004d3034(undefined8 param_1,long *param_2,undefined8 param_3,undefined4 param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                   long *param_5) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar2 = (**(code **)(*param_2 + 0x10))(param_2,0x30,0x71f681,199); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__0048b74c(lVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
    iVar1 = FUN__text__0048bec0(lVar2,param_2,param_4); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (iVar1 == 1) { // [自动静态注释] 条件判断/分支
      FUN__text__0048c190(lVar2,param_3,param_4); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      FUN__text__0048b760(lVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
      (**(code **)(*param_2 + 0x18))(param_2,lVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      lVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  *param_5 = lVar2;
  uVar3 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar2 == 0) { // [自动静态注释] 条件判断/分支
    uVar3 = 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return uVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



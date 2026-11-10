/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00029654
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00129654; name: FUN_.text__00129654
 */


undefined8 FUN__text__00129654(long *param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((param_2 == 0) || ((lVar3 = param_1[0xd], lVar3 != 0 && (lVar3 != param_2)))) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  if (lVar3 == 0) { // [自动静态注释] 条件判断/分支
    param_1[0xd] = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar1 = param_1 + 0xf; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (**(code **)(*param_1 + 0x78))(param_1,plVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    (**(code **)(*param_1 + 0x70))(param_1,plVar1,param_1 + 0x15); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__00168178(param_1 + 0x27,plVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__00168178(param_1 + 0x2d,param_1 + 0x15); // [自动静态注释] 调用尚未恢复正式名称的函数
    param_1[0x35] = param_1[0x1d]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[0x36] = param_1[0x1e]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[0x37] = param_1[0x1f]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[0x33] = param_1[0x1b]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[0x34] = param_1[0x1c]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__0012a350(param_1 + 0x22); // [自动静态注释] 调用尚未恢复正式名称的函数
    return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar2 = FUN__text__0012b2e8(param_1 + 0x22); // [自动静态注释] 调用尚未恢复正式名称的函数
  return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



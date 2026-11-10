/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0054ECC0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0064ecc0; name: FUN_.text__0064ecc0
 */


undefined8 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
FUN__text__0064ecc0(undefined8 param_1,long param_2,long param_3,long param_4,long param_5, // [自动静态注释] 调用尚未恢复正式名称的函数
                   long param_6) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar1 = 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((((param_2 != 0) && (param_3 != 0)) && (param_4 != 0)) && ((param_5 != 0 && (param_6 != 0)))) // [自动静态注释] 条件判断/分支
  { // [自动静态注释] 作用域/控制流边界
    if (DAT_00c5f5d4 == 0) { // [自动静态注释] 条件判断/分支
      FUN__text__0067839c(param_2,param_3,param_4,param_5,param_6); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar1 = FUN__text__0064ec40(param_1,0); // [自动静态注释] 调用尚未恢复正式名称的函数
      return uVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    uVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    DAT_00c5f5d4 = DAT_00c5f5d4 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return uVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



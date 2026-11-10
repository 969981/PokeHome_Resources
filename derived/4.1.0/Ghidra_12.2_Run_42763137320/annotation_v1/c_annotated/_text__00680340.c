/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00580340
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00680340; name: FUN_.text__00680340
 */


undefined8 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
FUN__text__00680340(long param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined4 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar1 = FUN__text__006803b8(param_4); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar3 = FUN__text__0067ad9c(param_1,param_2,uVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((int)uVar3 == 0) { // [自动静态注释] 条件判断/分支
    if ((*(code **)(param_1 + 0x7f0) == (code *)0x0) || // [自动静态注释] 条件判断/分支
       (iVar2 = (**(code **)(param_1 + 0x7f0)) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                          (param_1,param_3,param_4,*(undefined8 *)(param_1 + 0x8b8)), iVar2 == 0)) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar3 = 0xfffffc7a; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return uVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002F2C1C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f2c1c; name: FUN_.text__003f2c1c
 */


bool FUN__text__003f2c1c(long param_1,undefined8 param_2,long param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_8 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar1 = (**(code **)(**(long **)(param_1 + 0x60) + 0x60)) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    (*(long **)(param_1 + 0x60),param_2,*(undefined8 *)(param_3 + 8)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if ((iVar1 == 1) && // [自动静态注释] 条件判断/分支
     (iVar1 = (**(code **)(**(long **)(param_1 + 0x60) + 0x88)) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                        (*(long **)(param_1 + 0x60),&local_8,1), iVar1 == 1)) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    iVar1 = (**(code **)(**(long **)(param_1 + 0x80) + 0x18))(*(long **)(param_1 + 0x80),local_8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    return iVar1 == 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  return false; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



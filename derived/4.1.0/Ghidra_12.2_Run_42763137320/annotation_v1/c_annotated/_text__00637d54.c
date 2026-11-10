/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00537D54
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00637d54; name: FUN_.text__00637d54
 */


uint FUN__text__00637d54(byte param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                        undefined2 param_9,undefined2 param_10,undefined2 param_11, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                        undefined2 param_12,undefined2 param_13,undefined2 param_14, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                        undefined2 param_15,undefined2 param_16,short param_17,short param_18, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                        short param_19,short param_20,short param_21,short param_22) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  iVar1 = FUN__text__00637e5c(param_1,param_2,param_5,param_6,param_7,param_8,param_9,param_10, // [自动静态注释] 调用尚未恢复正式名称的函数
                              param_11,param_12,param_13,param_14,param_15,param_16,param_4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar2 = iVar1 + (int)((((float)param_1 * 4.0) / 100.0 + 2.0) * // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                       (float)(ushort)(param_18 + param_17 + param_19 + param_20 + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                                      param_21 + param_22)) & 0xffff; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (9999 < uVar2) { // [自动静态注释] 条件判断/分支
    uVar2 = 10000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



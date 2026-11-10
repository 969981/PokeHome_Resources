/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0012F148
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0022f148; name: FUN_.text__0022f148
 */


void FUN__text__0022f148(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        undefined8 param_5,undefined4 *param_6) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_28 = *param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (local_28 == 0) { // [自动静态注释] 条件判断/分支
    FUN__text__0022ef30(param_1,param_2,&local_28,param_4,param_5,*param_6,param_6[1],param_6[2], // [自动静态注释] 调用尚未恢复正式名称的函数
                        param_6[3],param_6[4]); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  plVar2 = (long *)(local_28 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0022ef30(uVar1,param_2,&local_28,param_4,param_5,*param_6,param_6[1],param_6[2], // [自动静态注释] 调用尚未恢复正式名称的函数
                      param_6[3],param_6[4]); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    /* WARNING: Could not recover jumptable at 0x0022f1d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0001A244
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0011a244; name: FUN_.text__0011a244
 */


void FUN__text__0011a244(undefined8 *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  code *UNRECOVERED_JUMPTABLE; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  nn::os::DestroySystemEvent((SystemEventType *)(param_1 + 0x12)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  nn::os::DestroySystemEvent((SystemEventType *)(param_1 + 0x18)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (*(char *)(param_1 + 0x1d) != '\0') { // [自动静态注释] 条件判断/分支
    nn::os::DestroySystemEvent((SystemEventType *)(param_1 + 0x18)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  if (*(char *)(param_1 + 0x17) != '\0') { // [自动静态注释] 条件判断/分支
    nn::os::DestroySystemEvent((SystemEventType *)(param_1 + 0x12)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  UNRECOVERED_JUMPTABLE = (code *)param_1[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = 0x8689e0;
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  param_1[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    /* WARNING: Could not recover jumptable at 0x0011a2b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1 + 6); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00007CE4
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00107ce4; name: FUN_.text__00107ce4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00107ce4(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *UNRECOVERED_JUMPTABLE; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar1 = _DAT_0089f6a8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar2 = (undefined8 *)param_1[0x42]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x42] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = lVar1 + 0x10;
  if (puVar2 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    (**(code **)*puVar2)(puVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    (**(code **)(*(long *)param_1[0x43] + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              ((long *)param_1[0x43],puVar2,param_1[0x44],param_1[0x45]); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  UNRECOVERED_JUMPTABLE = (code *)param_1[0x33]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) { // [自动静态注释] 条件判断/分支
    param_1[0x34] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[0x35] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[0x32] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[0x33] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (*UNRECOVERED_JUMPTABLE)(param_1 + 0x36); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  UNRECOVERED_JUMPTABLE = (code *)param_1[0x23]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) { // [自动静态注释] 条件判断/分支
    param_1[0x24] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[0x25] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[0x22] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[0x23] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (*UNRECOVERED_JUMPTABLE)(param_1 + 0x26); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  UNRECOVERED_JUMPTABLE = (code *)param_1[0x13]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) { // [自动静态注释] 条件判断/分支
    param_1[0x14] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[0x15] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[0x12] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[0x13] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (*UNRECOVERED_JUMPTABLE)(param_1 + 0x16); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  UNRECOVERED_JUMPTABLE = (code *)param_1[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  param_1[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    /* WARNING: Could not recover jumptable at 0x00107da4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1 + 6); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



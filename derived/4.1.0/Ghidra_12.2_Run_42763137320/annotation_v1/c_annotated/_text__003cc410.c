/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002CC410
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003cc410; name: FUN_.text__003cc410
 */


/* WARNING: Removing unreachable block (ram,0x003cc61c) */
/* WARNING: Removing unreachable block (ram,0x003cc638) */

void FUN__text__003cc410(undefined8 *param_1,undefined8 param_2,uint param_3,int param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 local_78; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_48 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0013064c(&local_78,&local_48); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (((param_3 & 1) != 0) && (param_4 - 2U < 9)) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x003cc478 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__003cc484 + (ulong)*(byte *)((ulong)(param_4 - 2U) + 0x73a8d0) * 4))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  param_1[3] = local_60; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[4] = local_58; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[1] = local_70; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[2] = local_68; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 5) = local_50;
  if (local_60 == 0) { // [自动静态注释] 条件判断/分支
    *param_1 = local_78;
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *param_1 = local_78;
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



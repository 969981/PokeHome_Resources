/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002E5610
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003e5610; name: FUN_.text__003e5610
 */


int FUN__text__003e5610(ulong *param_1,char *param_2,ulong param_3,char *param_4,undefined8 *param_5 // [自动静态注释] 调用尚未恢复正式名称的函数
                       ) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  piVar2 = __errno_location(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *piVar2 = 0;
  uStack_58 = param_5[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_60 = *param_5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_48 = param_5[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_50 = param_5[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = vsnprintf(param_2,param_3,param_4,&local_60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((int)uVar1 < 0) { // [自动静态注释] 条件判断/分支
    return *piVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if (param_1 != (ulong *)0x0) { // [自动静态注释] 条件判断/分支
    *param_1 = (ulong)uVar1;
  } // [自动静态注释] 作用域/控制流边界
  if (uVar1 < param_3) { // [自动静态注释] 条件判断/分支
    return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  return 0x22; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



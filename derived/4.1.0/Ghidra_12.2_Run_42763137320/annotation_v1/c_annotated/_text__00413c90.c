/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00313C90
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00413c90; name: FUN_.text__00413c90
 */


void FUN__text__00413c90(undefined8 param_1,undefined8 *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_2[1] == 0) { // [自动静态注释] 条件判断/分支
    FUN__text__00413d14(param_1,0x34); // [自动静态注释] 调用尚未恢复正式名称的函数
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00412dc0(param_2[1],*(undefined4 *)(param_2 + 2),1); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_28 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_2 = 0xffffffffffffffff;
  FUN__text__00413d24(param_1,&local_28,*(undefined4 *)((long)param_2 + 0x14)); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



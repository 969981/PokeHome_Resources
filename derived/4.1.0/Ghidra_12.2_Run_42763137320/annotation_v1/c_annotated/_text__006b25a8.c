/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005B25A8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b25a8; name: FUN_.text__006b25a8
 */


void FUN__text__006b25a8(long param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined4 local_44; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined5 local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined3 uStack_3b; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_34; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((*(byte *)(param_1 + 0x62) >> 5 & 1) == 0) { // [自动静态注释] 条件判断/分支
    local_44 = 0x15; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_40 = 0xffffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_3b = 0xffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_38 = 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_34 = 0xff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__006b3b30(param_1,0x15,&local_44,0x14,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__006b3b30(param_1,param_2,param_3,param_4,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



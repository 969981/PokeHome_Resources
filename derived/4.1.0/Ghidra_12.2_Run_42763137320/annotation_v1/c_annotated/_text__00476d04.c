/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00376D04
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00476d04; name: FUN_.text__00476d04
 */


void FUN__text__00476d04(long param_1,uint param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar1 = *(uint *)(param_1 + 0x313); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((uVar1 >> 0x10 & 1) == 0) { // [自动静态注释] 条件判断/分支
    *(uint *)(param_1 + 0x313) =
         uVar1 & 0xfff00000 | uVar1 & 0xffff | (param_2 & 7) << 0x11 | 0x10000; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  local_18 = 0x400000000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__00474488(param_1,&local_18,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



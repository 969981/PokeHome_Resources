/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0044F9A0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0054f9a0; name: FUN_.text__0054f9a0
 */


undefined8 FUN__text__0054f9a0(long param_1,long *param_2,ulong param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar1 = (**(code **)(*param_2 + 0x10)) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    (param_2,(ulong)(((uint)(param_3 >> 1) & 0x7fffffff) + 1) << 2,0x70c87e,0x56); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(long *)(param_1 + 0x20) = lVar1;
  if (lVar1 == 0) { // [自动静态注释] 条件判断/分支
    return 0x34; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar2 = FUN__text__00555380(param_1,param_2,param_3 & 0xffffffff,param_3 & 0xffffffff); // [自动静态注释] 调用尚未恢复正式名称的函数
  return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002AF784
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003af784; name: FUN_.text__003af784
 */


uint FUN__text__003af784(long param_1,undefined8 param_2,int *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x800) + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(ulong *)(*(long *)(param_1 + 0x800) + 0x20) =
       CONCAT44(param_3[1] + (int)((ulong)uVar2 >> 0x20),*param_3 + (int)uVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar1 = FUN__text__003af424(param_1,param_2,2); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined8 *)(*(long *)(param_1 + 0x800) + 0x20) = uVar2;
  return uVar1 & 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



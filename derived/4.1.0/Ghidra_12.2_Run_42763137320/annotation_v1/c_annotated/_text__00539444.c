/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00439444
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00539444; name: FUN_.text__00539444
 */


undefined1  [16] // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
FUN__text__00539444(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *param_1 = param_3;
  local_48 = *(undefined8 *)(param_2 + 0xe8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_40 = *(undefined8 *)(param_2 + 0xf0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_38 = *(undefined8 *)(param_2 + 0xf8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = FUN__text__00509838(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__005394c0(param_1,&local_48,param_2 + 0x58,uVar1,*(undefined4 *)((long)param_1 + 0x1c), // [自动静态注释] 调用尚未恢复正式名称的函数
                      param_4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return ZEXT816(0); // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



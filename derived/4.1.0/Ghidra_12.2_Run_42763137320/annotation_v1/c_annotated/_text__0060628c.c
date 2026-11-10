/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0050628C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0060628c; name: FUN_.text__0060628c
 */


void FUN__text__0060628c(undefined8 *param_1,long param_2,long param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined2 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  param_1[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)((long)param_1 + 0x27) = 0;
  *param_1 = 0;
  *(undefined1 *)((long)param_1 + 0x26) = 4;
  param_1[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = FUN__text__005ff43c(*(undefined2 *)(param_3 + 0xd),*(undefined2 *)(param_3 + 0x22),4); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined2 *)((long)param_1 + 0x2c) = uVar1;
  *(byte *)((long)param_1 + 0x2e) = *(byte *)((long)param_1 + 0x2e) | 1;
  FUN__text__006277f0(param_1,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__006080a8(param_1,param_2,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined2 *)((long)param_1 + 0x27) = *(undefined2 *)(param_2 + 0x37);
  *(undefined2 *)((long)param_1 + 0x29) = *(undefined2 *)(param_2 + 0x39);
  *(undefined1 *)((long)param_1 + 0x2b) = *(undefined1 *)(param_2 + 0x3b);
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



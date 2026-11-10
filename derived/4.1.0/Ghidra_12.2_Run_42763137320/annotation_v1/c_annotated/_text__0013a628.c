/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0003A628
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0013a628; name: FUN_.text__0013a628
 */


void FUN__text__0013a628(long param_1,uint param_2,uint param_3,uint param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined4 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar3 = 0x721a50; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(int *)(param_1 + 0x64c) != 0) { // [自动静态注释] 条件判断/分支
    uVar3 = 0x721a58; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  uVar3 = FUN__text__0012cdb0(param_1 + 0x110,uVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar1 = FUN__text__003ae458(); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar2 = FUN__text__003b22d0(uVar3,uVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__0012c378(param_1 + 0x110, // [自动静态注释] 调用尚未恢复正式名称的函数
                      (ulong)(uVar2 == param_2) * 0x540 + 0x722d20 + (ulong)param_2 * 0xc0 + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                      (ulong)param_3 * 0x20 + (ulong)param_4 * 8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



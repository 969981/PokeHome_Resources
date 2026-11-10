/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00502E64
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00602e64; name: FUN_.text__00602e64
 */


bool FUN__text__00602e64(undefined8 param_1,undefined8 param_2,ulong param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 local_14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_12 = (undefined1)((ulong)param_2 >> 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_18 = (undefined4)param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_14 = (undefined2)((ulong)param_2 >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = (undefined4)(0x700050403020100 >> ((param_3 & 7) << 3)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((param_3 & 0xf8) != 0) { // [自动静态注释] 条件判断/分支
    uVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  iVar1 = FUN__text__00603450(param_1,0xd,&local_18,7,uVar2,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  return iVar1 != 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



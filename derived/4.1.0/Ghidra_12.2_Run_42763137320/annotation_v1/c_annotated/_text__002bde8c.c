/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001BDE8C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002bde8c; name: FUN_.text__002bde8c
 */


int FUN__text__002bde8c(void) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__002b1fb0(&local_18,DAT_008e1610); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_38 = 0x957027cef224ca8e; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = FUN__text__002a7bc0(local_18,&local_38); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_38 = 0xe6ed570e06924515; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = FUN__text__002a7bc0(local_18,&local_38); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_38 = 0xcc69d385f67c6dc8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = FUN__text__002a7bc0(local_18,&local_38); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (local_18 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_18 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return (uVar1 & 1) + (uVar2 & 1) + (uVar3 & 1); // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



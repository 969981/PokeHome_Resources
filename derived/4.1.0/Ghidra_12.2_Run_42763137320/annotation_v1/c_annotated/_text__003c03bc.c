/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002C03BC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c03bc; name: FUN_.text__003c03bc
 */


void FUN__text__003c03bc(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *local_30 [2]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(char *)(param_1 + 0x62) != '\0') { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__003c0454(); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003c0e80(*(undefined8 *)(param_1 + 0x58),0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  if (*(char *)(param_1 + 0x61) != '\0') { // [自动静态注释] 条件判断/分支
    local_30[0] = &local_8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_8 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__003c10e0(*(undefined8 *)(param_1 + 0x58),local_30,0); // [自动静态注释] 调用尚未恢复正式名称的函数
    if ((local_8 != 0) && (*(char *)(param_1 + 0x62) == '\0')) { // [自动静态注释] 条件判断/分支
      *(undefined1 *)(param_1 + 0x60) = 0;
      FUN__text__003c0820(*(undefined8 *)(param_1 + 0x58),0); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



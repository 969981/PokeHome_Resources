/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004903DC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005903dc; name: FUN_.text__005903dc
 */


int FUN__text__005903dc(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar1 = param_1 + 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar2 = FUN__text__0058f96c(lVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (iVar2 == 1) { // [自动静态注释] 条件判断/分支
    *(undefined2 *)(param_1 + 0x5c) = 0;
    return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00585f10(param_1 + 0x70); // [自动静态注释] 调用尚未恢复正式名称的函数
  (**(code **)(*(long *)(param_1 + 8) + 0x18))(lVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (*(long *)(param_1 + 0x100) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__00400fc0(5); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined8 *)(param_1 + 0x100) = 0;
  } // [自动静态注释] 作用域/控制流边界
  if (*(long *)(param_1 + 0x120) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__00400fc0(5); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined8 *)(param_1 + 0x120) = 0;
    *(undefined4 *)(param_1 + 0x128) = 0;
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__004dd8a0(lVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return iVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



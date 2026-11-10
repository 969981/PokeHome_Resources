/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00031E04
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00131e04; name: FUN_.text__00131e04
 */


void FUN__text__00131e04(long param_1,undefined8 *param_2,long *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(long *)(param_1 + 0x650) != 0) { // [自动静态注释] 条件判断/分支
    bVar1 = FUN__text__00132a80(*(long *)(param_1 + 0x650),param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(byte *)(param_1 + 0x690) = bVar1 & 1;
  } // [自动静态注释] 作用域/控制流边界
  if (*(long *)(param_1 + 0x670) != 0) { // [自动静态注释] 条件判断/分支
    bVar1 = FUN__text__00133648(*(long *)(param_1 + 0x670),param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(byte *)(param_1 + 0x690) = bVar1 & 1;
  } // [自动静态注释] 作用域/控制流边界
  *(undefined1 *)(param_1 + 0x691) = *(undefined1 *)(param_2 + 2);
  FUN__text__003c4c48(*(undefined8 *)(param_1 + 0x640),*(undefined1 *)((long)param_2 + 0x12)); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003c4c58(*(undefined8 *)(param_1 + 0x640),*(undefined1 *)((long)param_2 + 0x13)); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003c4c60(*(undefined8 *)(param_1 + 0x640),*(undefined1 *)((long)param_2 + 0x14)); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003c4b4c(*(undefined8 *)(param_1 + 0x640),*(undefined4 *)(param_2 + 1), // [自动静态注释] 调用尚未恢复正式名称的函数
                      *(undefined4 *)((long)param_2 + 0xc));
  (**(code **)(**(long **)(param_1 + 0x640) + 0x50))(*(long **)(param_1 + 0x640),*param_2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__003c4c50(*(undefined8 *)(param_1 + 0x640),*param_3 == 0); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*(char *)((long)param_2 + 0x11) != '\0') { // [自动静态注释] 条件判断/分支
    FUN__text__003c4740(*(undefined8 *)(param_1 + 0x640)); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  if (*(long *)(param_1 + 0x650) == 0 && *(long *)(param_1 + 0x670) == 0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__0012bca0(param_1 + 0x110,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



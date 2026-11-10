/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002CF450
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003cf450; name: FUN_.text__003cf450
 */


void FUN__text__003cf450(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ulong uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_230 [512]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((*(char *)(param_1 + 0x20060) != '\0') && // [自动静态注释] 条件判断/分支
     (uVar1 = FUN__text__003d444c(*(undefined8 *)(param_1 + 0x20048)), (uVar1 & 1) != 0)) { // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined8 *)(param_1 + 0x20038) = 0xffffffffffffffff;
    FUN__text__0014953c(auStack_230,*(undefined8 *)(param_1 + 0x20028)); // [自动静态注释] 调用尚未恢复正式名称的函数
    puVar2 = (undefined8 *)FUN__text__005d54f4(auStack_230,1); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined8 *)(param_1 + 0x20038) = *puVar2;
    FUN__text__0014821c(auStack_230); // [自动静态注释] 调用尚未恢复正式名称的函数
    lVar3 = FUN__text__006b4514(*(undefined8 *)(param_1 + 0x10)); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(long *)(*(long *)(lVar3 + 0x18) + (long)*(int *)(param_1 + 0x18) * 0x10 + 8) =
         param_1 + 0x20030; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(undefined8 *)(param_1 + 0x20050) = 0;
    *(undefined8 *)(param_1 + 0x20058) = 0;
    *(undefined4 *)(*(long *)(param_1 + 0x20048) + 0xb4) = 0;
    *(undefined1 *)(param_1 + 0x20060) = 0;
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



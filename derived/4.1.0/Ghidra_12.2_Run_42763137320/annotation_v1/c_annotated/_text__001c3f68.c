/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000C3F68
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001c3f68; name: FUN_.text__001c3f68
 */


void FUN__text__001c3f68(long param_1,uint param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  FUN__text__00128ec0(param_1,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (((param_2 & 1) == 0) || // [自动静态注释] 条件判断/分支
     ((**(char **)(*(long *)(param_1 + 0x640) + 0xc0) == '\0' && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      (FUN__text__001c7b30(*(undefined8 *)(param_1 + 0x6d8)), // [自动静态注释] 调用尚未恢复正式名称的函数
      **(char **)(*(long *)(param_1 + 0x640) + 0xc0) == '\0')))) {
    FUN__text__00128ca0(param_1,param_2 & 1,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__0019eba4(*(undefined8 *)(param_1 + 0x6f8)); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*(uint *)(param_1 + 0x650) < 0xb) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x001c3fe0 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__001c3fec + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              (ulong)*(byte *)((ulong)*(uint *)(param_1 + 0x650) + 0x725e58) * 4))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(param_1 + 0x650) = 0;
  *(undefined4 *)(param_1 + 0x64c) = 0;
  *(undefined4 *)(*(long *)(param_1 + 0x698) + 0x4c0) = 0;
  FUN__text__001c340c(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



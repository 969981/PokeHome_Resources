/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0003A0D0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0013a0d0; name: FUN_.text__0013a0d0
 */


void FUN__text__0013a0d0(long param_1,uint param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_2 < 10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x0013a0e8 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__0013a0f4 + (ulong)*(byte *)((ulong)param_2 + 0x721a23) * 4))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  local_18 = 0xcbf29ce484222645; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_18); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) | 1;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



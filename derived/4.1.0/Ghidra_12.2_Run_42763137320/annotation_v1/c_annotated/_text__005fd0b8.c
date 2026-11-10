/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004FD0B8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005fd0b8; name: FUN_.text__005fd0b8
 */


ulong FUN__text__005fd0b8(long *param_1,uint param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  char cVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_2 < 0x1a) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x005fd0d0 */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(&UNK__text__005fd0dc + (ulong)*(byte *)((ulong)param_2 + 0x757fcc) * 4))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  lVar3 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  cVar1 = *(char *)(lVar3 + 0x15); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (cVar1 != '\x02') { // [自动静态注释] 条件判断/分支
    if (cVar1 == '\x01') { // [自动静态注释] 条件判断/分支
      if (param_2 - 0x1a < 0x2d) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x005fd288 */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*(code *)(&UNK__text__005fd294 + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                          (ulong)*(byte *)((ulong)(param_2 - 0x1a) + 0x757fe6) * 4)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                          (param_2,lVar3 + 0x1e); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    if (cVar1 != '\0') { // [自动静态注释] 条件判断/分支
      return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return (ulong)*(byte *)(lVar3 + 0x1e); // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



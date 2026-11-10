/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001A2674
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002a2674; name: FUN_.text__002a2674
 */


void FUN__text__002a2674(long param_1,int param_2,ushort param_3,uint param_4,uint param_5) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  if (param_2 - 0x182U < 0x6c) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x002a268c */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__002a2698 + (ulong)*(byte *)((ulong)(param_2 - 0x182U) + 0x7328a8) * 4))() // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    ; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if (param_2 == 0x15f) { // [自动静态注释] 条件判断/分支
    if (param_3 < 4) { // [自动静态注释] 条件判断/分支
      param_1 = param_1 + (ulong)param_3 * 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((param_4 & 1) == 0) { // [自动静态注释] 条件判断/分支
        *(uint *)(param_1 + 0x27b8) = param_5 & 1;
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      *(uint *)(param_1 + 0x27c8) = param_5 & 1;
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else if ((param_2 == 0xc9) && (param_3 < 0x1c)) { // [自动静态注释] 条件判断/分支
    param_1 = param_1 + (ulong)param_3 * 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((param_4 & 1) == 0) { // [自动静态注释] 条件判断/分支
      *(uint *)(param_1 + 0x26d8) = param_5 & 1;
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    *(uint *)(param_1 + 0x2748) = param_5 & 1;
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



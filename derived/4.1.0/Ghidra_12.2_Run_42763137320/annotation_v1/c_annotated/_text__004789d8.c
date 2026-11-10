/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003789D8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004789d8; name: FUN_.text__004789d8
 */


void FUN__text__004789d8(float param_1,long param_2,int param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((*(ushort *)(param_2 + 0x208) >> 6 & 1) == 0) { // [自动静态注释] 条件判断/分支
    if (param_3 - 0x12U < 0x35) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x00478a14 */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK__text__00478a20 + (ulong)*(byte *)((ulong)(param_3 - 0x12U) + 0x73b680) * 4)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                (); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    lVar1 = *(long *)(param_2 + 0x1c8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar1 != 0) { // [自动静态注释] 条件判断/分支
      if (param_3 == 0x44) { // [自动静态注释] 条件判断/分支
        *(int *)(lVar1 + 0x10) = (int)param_1;
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      if (param_3 == 0x43) { // [自动静态注释] 条件判断/分支
        FUN__text__0047b440(lVar1,(int)param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      if (param_3 == 0x42) { // [自动静态注释] 条件判断/分支
        *(uint *)(lVar1 + 0x30) =
             *(uint *)(lVar1 + 0x30) & 0x7fffffff | (uint)(param_1 != 0.0) << 0x1f;
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0006B090
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0016b090; name: FUN_.text__0016b090
 */


ulong FUN__text__0016b090(int param_1,uint param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ulong uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_1 < 0x274) { // [自动静态注释] 条件判断/分支
    if (param_1 < 0x1e3) { // [自动静态注释] 条件判断/分支
      if (param_1 < 0x65) { // [自动静态注释] 条件判断/分支
        if (param_1 == 0x3a) goto LAB__text__0016b1c8; // [自动静态注释] 条件判断/分支
        if (param_1 != 0x3b) { // [自动静态注释] 条件判断/分支
          if (param_1 != 100) { // [自动静态注释] 条件判断/分支
            return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
          } // [自动静态注释] 作用域/控制流边界
          goto LAB__text__0016b1c8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        if (0xd2 < param_1) { // [自动静态注释] 条件判断/分支
          if ((param_1 != 0xd3) && (param_1 != 0xd7)) { // [自动静态注释] 条件判断/分支
            return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
          } // [自动静态注释] 作用域/控制流边界
LAB__text__0016b1c8: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          return (ulong)((param_2 & 0xffff) == 1); // [自动静态注释] 返回表达式；具体返回语义取决于调用者
        } // [自动静态注释] 作用域/控制流边界
        if (param_1 != 0x65) { // [自动静态注释] 条件判断/分支
          if (param_1 != 0x9d) { // [自动静态注释] 条件判断/分支
            return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
          } // [自动静态注释] 作用域/控制流边界
          goto LAB__text__0016b1c8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      uVar1 = (ulong)((param_2 & 0xffff) - 1 < 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else if (param_1 < 0x225) { // [自动静态注释] 条件判断/分支
      if (((param_1 == 0x1e3) || (param_1 == 0x1e4)) || (param_1 == 0x1f7)) // [自动静态注释] 条件判断/分支
      goto LAB__text__0016b1c8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    else if (param_1 - 0x225U < 0x17) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x0016b120 */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(&UNK__text__0016b12c + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                        (ulong)*(byte *)((ulong)(param_1 - 0x225U) + 0x72545d) * 4))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      return uVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (param_1 - 899U < 7) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x0016b0e8 */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(&UNK__text__0016b0f4 + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                        (ulong)*(byte *)((ulong)(param_1 - 899U) + 0x725488) * 4))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      return uVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    if (param_1 - 0x2c1U < 0x14) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x0016b150 */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)((ulong)*(byte *)((ulong)(param_1 - 0x2c1U) + 0x725474) * 4 + 0x16b178))(0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      return uVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    if (param_1 == 0x274) goto LAB__text__0016b1c8; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  return uVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



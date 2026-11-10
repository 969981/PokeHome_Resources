/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005814C8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006814c8; name: FUN_.text__006814c8
 */


long FUN__text__006814c8(long param_1,undefined8 param_2,uint *param_3,long param_4,long param_5, // [自动静态注释] 调用尚未恢复正式名称的函数
                        int param_6) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(char *)(param_1 + 0x3c) == '\0') { // [自动静态注释] 条件判断/分支
    FUN__text__00683180(*(undefined8 *)(param_1 + 0xb0)); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__00683180(*(undefined8 *)(param_1 + 0xa8)); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *param_3 = 0;
    lVar1 = param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (param_5 != 0) { // [自动静态注释] 条件判断/分支
      lVar1 = param_4 + param_5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        if (*(uint *)(param_1 + 0xe4) < 0xd) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x00681578 */
                    /* WARNING: Treating indirect jump as call */
          lVar1 = (*(code *)(&UNK__text__00681584 + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                            (ulong)*(ushort *)((ulong)*(uint *)(param_1 + 0xe4) * 2 + 0x76193e) * 4) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                  )(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          return lVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
        } // [自动静态注释] 作用域/控制流边界
      } while (param_4 != lVar1); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    if (param_6 != 0) { // [自动静态注释] 条件判断/分支
      if (1 < *(int *)(param_1 + 0xe4) - 1U) { // [自动静态注释] 条件判断/分支
        *(undefined1 *)(param_1 + 0x3c) = 1;
        return -0x20b; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      *param_3 = *param_3 | 1;
    } // [自动静态注释] 作用域/控制流边界
    lVar1 = lVar1 - param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar1 = -0x20b; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return lVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



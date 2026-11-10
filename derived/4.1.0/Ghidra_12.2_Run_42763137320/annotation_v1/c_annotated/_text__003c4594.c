/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002C4594
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c4594; name: FUN_.text__003c4594
 */


ulong FUN__text__003c4594(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar1 = (**(code **)(*(long *)param_1[0x14] + 0x50))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((char)param_1[0x1c] != '\0') { // [自动静态注释] 条件判断/分支
    if (uVar1 == 2) { // [自动静态注释] 条件判断/分支
      lVar3 = FUN__text__003e9680(param_1[0x18],0x71f5ee); // [自动静态注释] 调用尚未恢复正式名称的函数
      if ((lVar3 != 0) && ((*(byte *)(lVar3 + 0x58) & 1) == 0)) { // [自动静态注释] 条件判断/分支
        *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) | 1;
        (**(code **)(*param_1 + 0xa8))(param_1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    else if (uVar1 == 0) { // [自动静态注释] 条件判断/分支
      if (*(uint *)((long)param_1 + 0xe4) < 4) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x003c45ec */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*(code *)((ulong)*(byte *)((ulong)*(uint *)((long)param_1 + 0xe4) + 0x73a7c5) * 4 + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                          0x3c45f8))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      lVar3 = FUN__text__003e9680(param_1[0x18],0x71f5ee); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (lVar3 != 0) { // [自动静态注释] 条件判断/分支
        *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) & 0xfe;
        return (ulong)uVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return (ulong)uVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



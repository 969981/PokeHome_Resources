/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0045C628
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0055c628; name: FUN_.text__0055c628
 */


undefined8 FUN__text__0055c628(undefined8 param_1,ushort param_2,long param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_3 == 0) { // [自动静态注释] 条件判断/分支
    return 0x1f; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar1 = (uint)(short)param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((int)uVar1 < 0x3c) { // [自动静态注释] 条件判断/分支
    uVar2 = (uint)((short)param_2 % 10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (param_2 < 0x1e) { // [自动静态注释] 条件判断/分支
      if (uVar2 < 5) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x0055c690 */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*(code *)(&UNK__text__0055c6a0 + (ulong)*(byte *)((ulong)uVar2 + 0x73e3d3) * 4)) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                          ((ulong)uVar1 / 10); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        return uVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    else if ((0x1d < (int)uVar1) && (uVar2 < 5)) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x0055c734 */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)(&UNK__text__0055c740 + (ulong)*(byte *)((ulong)uVar2 + 0x73e3ce) * 4))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      return uVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else if (uVar1 - 0x3c < 6) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x0055c6dc */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*(code *)(&UNK__text__0055c6e8 + (ulong)*(byte *)((ulong)(uVar1 - 0x3c) + 0x73e3c8) * 4 // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                      ))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    return uVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  return 0x1f; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



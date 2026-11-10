/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00556E8C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00656e8c; name: FUN_.text__00656e8c
 */


/* WARNING: Removing unreachable block (ram,0x00656fe4) */
/* WARNING: Removing unreachable block (ram,0x00656ff8) */
/* WARNING: Removing unreachable block (ram,0x0065700c) */
/* WARNING: Removing unreachable block (ram,0x00657020) */

undefined8 FUN__text__00656e8c(long param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(uint *)(param_2 + 0x18) < 5) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x00656ec0 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&UNK__text__00656ecc + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                      (ulong)*(byte *)((ulong)*(uint *)(param_2 + 0x18) + 0x7601e1) * 4))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    return uVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if (param_1 == 0) { // [自动静态注释] 条件判断/分支
    uVar1 = 0x17; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
    uVar1 = 0x2b; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__00656d18(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  return uVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005F3F40
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006f3f40; name: FUN_.text__006f3f40
 */


undefined8 FUN__text__006f3f40(long param_1,undefined4 param_2,uint param_3,undefined8 param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar3 = *(long *)(param_1 + 0xd8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar3 == 0) { // [自动静态注释] 条件判断/分支
    uVar2 = FUN__text__006ec160(*(undefined8 *)(param_1 + 0xd0),param_2,(ulong)param_3,param_4); // [自动静态注释] 调用尚未恢复正式名称的函数
    return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  lVar4 = *(long *)(lVar3 + 0x110); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = *(uint *)(*(long *)(lVar3 + 0x188) + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__006f2360(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (param_3 < 8) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x006f3f9c */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(&UNK__text__006f3fac + (ulong)*(byte *)((ulong)param_3 + 0x77f9a8) * 4)) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                      (lVar4 + (ulong)uVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  return 0xffffffff; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00159238
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00259238; name: FUN_.text__00259238
 */


void FUN__text__00259238(long param_1,uint param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar4 = *(long *)(param_1 + 0xfe0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar4 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  uVar1 = FUN__text__00306a08(lVar4,2); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar3 = FUN__text__00306a08(lVar4,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((uVar3 & 1) == 0) { // [自动静态注释] 条件判断/分支
    FUN__text__003083f0(lVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  if (param_2 < 4) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x002592c0 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__002592cc + (ulong)*(byte *)((ulong)param_2 + 0x72bf90) * 4))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar2 = FUN__text__003279b0(*(undefined4 *)(param_1 + 0x1000)); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar1 = ((uVar1 | uVar2) ^ 0xffffffff) & 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__003a14e8(*(undefined8 *)(param_1 + 0x728),uVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003a14e8(*(undefined8 *)(param_1 + 0x740),uVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003a14e8(*(undefined8 *)(param_1 + 0x758),uVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003a14e8(*(undefined8 *)(param_1 + 0x770),uVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
                    /* WARNING: Could not recover jumptable at 0x0025942c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



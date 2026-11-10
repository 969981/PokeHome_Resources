/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00203220
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00303220; name: FUN_.text__00303220
 */


void FUN__text__00303220(long param_1,undefined8 *param_2,uint param_3,uint param_4,uint param_5, // [自动静态注释] 调用尚未恢复正式名称的函数
                        uint param_6) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((3 < param_5) || (3 < param_6)) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  if ((0x1d < param_4) || (*(uint *)(param_1 + 0x700fdc) <= param_3)) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  lVar2 = param_1 + (ulong)param_3 * 0x5fa0 + (ulong)param_4 * 0x330 + (ulong)param_6 * 0xc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = FUN__text__00306bc4(*param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00633304(uVar1,param_5,*(undefined4 *)(lVar2 + 0x354)); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00632a04(uVar1,param_5,*(undefined4 *)(lVar2 + 0x358)); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00632cb4(uVar1,param_5,*(undefined4 *)(lVar2 + 0x35c)); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar2 = *(long *)(DAT_008e15a0 + 0x80); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar2 == 0) { // [自动静态注释] 条件判断/分支
    FUN__text__00205890(0,uVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  plVar3 = (long *)(lVar2 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (**(code **)(*plVar3 + 0x10))(plVar3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__00205890(lVar2,uVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
                    /* WARNING: Could not recover jumptable at 0x003032fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x18))(plVar3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



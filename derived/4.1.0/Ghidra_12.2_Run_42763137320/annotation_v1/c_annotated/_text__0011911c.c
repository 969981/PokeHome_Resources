/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0001911C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0011911c; name: FUN_.text__0011911c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0011911c(long param_1,int param_2,int *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*param_3 == 0x20) { // [自动静态注释] 条件判断/分支
    if (param_2 != 0) { // [自动静态注释] 条件判断/分支
      plVar2 = (long *)FUN__text__00119a94(param_1 + 0x70,0); // [自动静态注释] 调用尚未恢复正式名称的函数
      iVar1 = (**(code **)(*plVar2 + 0x40))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (iVar1 == 0) goto LAB__text__001191c0; // [自动静态注释] 条件判断/分支
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (param_2 != 0) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not recover jumptable at 0x00119184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x3b0) + 0x80))(*(long **)(param_1 + 0x3b0),param_3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    plVar2 = (long *)FUN__text__00119a94(param_1 + 0x70); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar3 = (**(code **)(*plVar2 + 0x58))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (((uVar3 & 1) != 0) && // [自动静态注释] 条件判断/分支
       (lVar4 = FUN__text__00119a94(param_1 + 0x70,0), *(int *)(lVar4 + 0x28) == *param_3)) { // [自动静态注释] 调用尚未恢复正式名称的函数
LAB__text__001191c0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    /* WARNING: Could not recover jumptable at 0x001191e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x3b0) + 0x80))(*(long **)(param_1 + 0x3b0),_DAT_0089fec8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



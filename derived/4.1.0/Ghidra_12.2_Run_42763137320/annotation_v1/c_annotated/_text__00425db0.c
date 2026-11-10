/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00325DB0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00425db0; name: FUN_.text__00425db0
 */


undefined8 FUN__text__00425db0(int param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  piVar2 = DAT_00aea5d8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (DAT_00aea5e0 == 0) { // [自动静态注释] 条件判断/分支
LAB__text__00425df0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if ((piVar2 != DAT_00aea5d8 + (ulong)DAT_00aea5e0 * 10) && // [自动静态注释] 条件判断/分支
       (*(code **)(piVar2 + 6) != (code *)0x0)) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    /* WARNING: Could not recover jumptable at 0x00425e08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(piVar2 + 6))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      return uVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar3 = (ulong)DAT_00aea5e0 * 0x28; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      if (*piVar2 == param_1) goto LAB__text__00425df0; // [自动静态注释] 条件判断/分支
      piVar2 = piVar2 + 10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar3 = lVar3 + -0x28; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (lVar3 != 0); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



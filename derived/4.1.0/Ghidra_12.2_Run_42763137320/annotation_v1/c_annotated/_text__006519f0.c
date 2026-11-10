/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005519F0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006519f0; name: FUN_.text__006519f0
 */


void FUN__text__006519f0(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar2 = *(undefined8 **)(param_1 + 0xf58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (puVar2 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00667a44(param_1,2,2); // [自动静态注释] 调用尚未恢复正式名称的函数
  do { // [自动静态注释] 循环/迭代
    lVar1 = FUN__text__00651a90(param_1,*puVar2,*(undefined8 *)(param_1 + 0xf70), // [自动静态注释] 调用尚未恢复正式名称的函数
                                *(ulong *)(param_1 + 0xf40) >> 5 & 1);
    if (lVar1 == 0) { // [自动静态注释] 条件判断/分支
      FUN__text__00666f74(param_1,0x71d2c3,*puVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *(long *)(param_1 + 0xf70) = lVar1;
    } // [自动静态注释] 作用域/控制流边界
    puVar2 = (undefined8 *)puVar2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while (puVar2 != (undefined8 *)0x0); // [自动静态注释] 循环/迭代
  FUN__text__0066bd88(*(undefined8 *)(param_1 + 0xf58)); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined8 *)(param_1 + 0xf58) = 0;
  FUN__text__00667a8c(param_1,2); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



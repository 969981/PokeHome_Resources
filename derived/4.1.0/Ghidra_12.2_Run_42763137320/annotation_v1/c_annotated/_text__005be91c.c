/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004BE91C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005be91c; name: FUN_.text__005be91c
 */


void FUN__text__005be91c(long param_1,uint *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *pvVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((ulong)*param_2 < // [自动静态注释] 条件判断/分支
      (ulong)((*(long *)(param_1 + 0x7c0) - *(long *)(param_1 + 0x7b8) >> 3) * -0x5555555555555555)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  { // [自动静态注释] 作用域/控制流边界
    lVar3 = *(long *)(param_1 + 0x7b8) + (ulong)*param_2 * 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar1 = *(long *)(lVar3 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(lVar3 + 8) = 0;
    if (lVar1 != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    if ((ulong)*param_2 < // [自动静态注释] 条件判断/分支
        (ulong)((*(long *)(param_1 + 0x7c0) - *(long *)(param_1 + 0x7b8) >> 3) * -0x5555555555555555 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
               )) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      lVar3 = *(long *)(param_1 + 0x7b8) + (ulong)*param_2 * 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar1 = *(long *)(lVar3 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(lVar3 + 0x10) = 0;
      if (lVar1 == 0) { // [自动静态注释] 条件判断/分支
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Could not recover jumptable at 0x005be9c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  pvVar2 = (void *)FUN__text__005c1b24(param_1 + 0x7b8); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__005be1c0(); // [自动静态注释] 调用尚未恢复正式名称的函数
  operator_delete(pvVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



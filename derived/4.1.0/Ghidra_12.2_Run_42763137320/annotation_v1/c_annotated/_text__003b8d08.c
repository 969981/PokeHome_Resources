/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002B8D08
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b8d08; name: FUN_.text__003b8d08
 */


long FUN__text__003b8d08(long *param_1,undefined8 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_30; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__003b8bc0(&local_38,param_2, // [自动静态注释] 调用尚未恢复正式名称的函数
                      (int)((ulong)(((long *)*param_1)[1] - *(long *)*param_1) >> 3) * -0x55555555); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  lVar2 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1 = *(undefined8 **)(lVar2 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (puVar1 == *(undefined8 **)(lVar2 + 0x10)) { // [自动静态注释] 条件判断/分支
    FUN__text__003b8f20(lVar2,&local_38); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar3 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = uVar3 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(uVar3 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    *(undefined8 *)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
    puVar1[1] = uStack_30; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar1[2] = local_28; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *puVar1 = local_38;
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
    *(undefined8 **)(lVar2 + 8) = puVar1 + 3;
  } // [自动静态注释] 作用域/控制流边界
  return *(long *)(*param_1 + 8) + -0x18; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



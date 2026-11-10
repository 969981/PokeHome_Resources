/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00114DFC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00214dfc; name: FUN_.text__00214dfc
 */


int FUN__text__00214dfc(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar3 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = uVar3 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = *(long *)(uVar3 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_4 == (long *)0x0) { // [自动静态注释] 条件判断/分支
    if (lVar2 == 0x10) goto LAB__text__00214f2c; // [自动静态注释] 条件判断/分支
    param_4 = *(long **)(DAT_008e1540 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else if (lVar2 == 0x10) { // [自动静态注释] 条件判断/分支
LAB__text__00214f2c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(long **)(uVar3 + lVar2 * 8 + 0x18) = param_4;
  *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
  lVar2 = (**(code **)(*param_4 + 0x10))(param_4,0xb0,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar2 == 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*param_4 + 0xb8))(param_4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005dbcb4(lVar2,param_2,param_3,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(long **)(lVar2 + 8) = param_4;
  *(long *)(lVar2 + 0x10) = lVar2;
  *(undefined8 *)(lVar2 + 0x18) = 0xb0;
  *(undefined8 *)(lVar2 + 0x20) = 8;
  *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (*param_1 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(*param_1 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *param_1 = lVar2;
  iVar1 = FUN__text__005dbdec(lVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((iVar1 != 0) && (*param_1 != 0)) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(*param_1 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *param_1 = 0;
  } // [自动静态注释] 作用域/控制流边界
  return iVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



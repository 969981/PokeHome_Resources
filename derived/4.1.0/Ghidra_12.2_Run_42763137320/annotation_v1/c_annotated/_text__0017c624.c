/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0007C624
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0017c624; name: FUN_.text__0017c624
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__0017c624(int *param_1,int *param_2,long param_3,long *param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(long *)(param_1 + 2) != 0) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  iVar1 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = iVar1;
  if (iVar1 != 0) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__0011a180(0x717b65); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  lVar3 = *_DAT_008a1700; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long **)(lVar3 + 0x10) = param_4;
  *(long *)(lVar3 + 0x20) = param_3;
  lVar2 = (**(code **)(*param_4 + 0x10))(param_4,param_3,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(lVar3 + 0x18) = lVar2;
  if (lVar2 == 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(**(long **)(lVar3 + 0x10) + 0xb8))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar2 = *(long *)(lVar3 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005f6b94(lVar2,lVar2 + 0xa8,param_3 + -0xa8,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(long *)(lVar3 + 8) = lVar2;
  *(long *)(param_1 + 2) = lVar2;
  FUN__text__0016afa0(&local_40,lVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined8 *)(param_1 + 4) = local_40;
  *(undefined8 *)(param_1 + 6) = uStack_38;
  return *(undefined8 *)(param_1 + 2); // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



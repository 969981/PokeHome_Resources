/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00075384
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00175384; name: FUN_.text__00175384
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__00175384(uint *param_1,uint *param_2,long param_3,long *param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(long *)(param_1 + 2) != 0) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  uVar2 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = uVar2;
  if (0x13 < uVar2) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__0011a180(0x717b65); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  lVar4 = *_DAT_008a0510; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar1 = lVar4 + 8 + (ulong)uVar2 * 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(lVar1 + 0x18) = param_3;
  *(undefined8 *)(lVar1 + 8) = param_4;
  lVar3 = (**(code **)(*param_4 + 0x10))(param_4,param_3,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(lVar1 + 0x10) = lVar3;
  if (lVar3 == 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(**(long **)(lVar1 + 8) + 0xb8))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar3 = *(long *)(lVar1 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005f6b94(lVar3,lVar3 + 0xa8,param_3 + -0xa8,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(long *)(lVar4 + 8 + (ulong)uVar2 * 0x20) = lVar3;
  *(long *)(param_1 + 2) = lVar3;
  FUN__text__0016afa0(&local_60,lVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined8 *)(param_1 + 4) = local_60;
  *(undefined8 *)(param_1 + 6) = uStack_58;
  return *(undefined8 *)(param_1 + 2); // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



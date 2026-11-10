/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000C6F34
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001c6f34; name: FUN_.text__001c6f34
 */


void FUN__text__001c6f34(long param_1,undefined8 param_2,long param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  iVar1 = *(int *)(*(long *)(param_1 + 0x30) + 0x1e4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(param_1 + 0x38) == param_3) { // [自动静态注释] 条件判断/分支
    lVar2 = *(long *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((lVar2 == 0) || (lVar3 = *(long *)(param_1 + 0x18), lVar3 == 0)) { // [自动静态注释] 条件判断/分支
LAB__text__001c6fe8: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    iVar4 = iVar1 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (*(long *)(param_1 + 0xa8) != param_3) { // [自动静态注释] 条件判断/分支
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    lVar2 = *(long *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((lVar2 == 0) || (lVar3 = *(long *)(param_1 + 0x18), lVar3 == 0)) goto LAB__text__001c6fe8; // [自动静态注释] 条件判断/分支
    iVar4 = iVar1 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__001c3230(lVar2,lVar3,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (iVar4 % 3 == iVar1) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__0019e830(*(undefined8 *)(param_1 + 0x30),iVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



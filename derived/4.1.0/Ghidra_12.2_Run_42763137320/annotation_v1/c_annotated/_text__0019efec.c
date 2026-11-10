/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0009EFEC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0019efec; name: FUN_.text__0019efec
 */


void FUN__text__0019efec(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(long *)(param_1 + 0x18) == 0) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(int *)(param_1 + 0x1bc) == 0) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(lVar3 + 4) = 0;
    iVar1 = *(int *)(param_1 + 0x1c0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (*(int *)(param_1 + 0x1bc) == 4) { // [自动静态注释] 条件判断/分支
      *(undefined4 *)(lVar3 + 4) = 4;
      *(undefined4 *)(lVar3 + 0x2c) = *(undefined4 *)(*(long *)(param_1 + 0xa8) + 0x5790);
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      iVar1 = *(int *)(*(long *)(param_1 + 0x68) + 0x4cc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (iVar1 != 1) { // [自动静态注释] 条件判断/分支
        if (iVar1 == 0) { // [自动静态注释] 条件判断/分支
          *(undefined4 *)(lVar3 + 4) = 1;
          *(undefined4 *)(lVar3 + 0xc) = *(undefined4 *)(param_1 + 0x1b0);
          iVar1 = *(int *)(param_1 + 0x1c0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          *(undefined4 *)(lVar3 + 4) = 3;
          uVar2 = *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x5a68); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined8 *)(lVar3 + 0x14) = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x5a60);
          *(undefined4 *)(lVar3 + 0x1c) = uVar2;
          *(undefined4 *)(lVar3 + 0xc) = *(undefined4 *)(param_1 + 0x1b0);
          iVar1 = *(int *)(param_1 + 0x1c0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        goto joined_r0x0019f070; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      *(undefined4 *)(lVar3 + 4) = 2;
    } // [自动静态注释] 作用域/控制流边界
    *(undefined4 *)(lVar3 + 0x34) = *(undefined4 *)(param_1 + 0x228);
    *(undefined4 *)(lVar3 + 0xc) = *(undefined4 *)(param_1 + 0x1b0);
    iVar1 = *(int *)(param_1 + 0x1c0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
joined_r0x0019f070: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (iVar1 == 0) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(lVar3 + 8) = 0;
    goto LAB__text__0019f0e8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  if (iVar1 == 4) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(lVar3 + 8) = 4;
    *(undefined4 *)(lVar3 + 0x30) = *(undefined4 *)(*(long *)(param_1 + 200) + 0x5790);
LAB__text__0019f0d8: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(undefined4 *)(lVar3 + 0x38) = *(undefined4 *)(param_1 + 0x22c);
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    iVar1 = *(int *)(*(long *)(param_1 + 0x88) + 0x4cc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (iVar1 == 0) { // [自动静态注释] 条件判断/分支
      *(undefined4 *)(lVar3 + 8) = 1;
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if (iVar1 == 1) { // [自动静态注释] 条件判断/分支
        *(undefined4 *)(lVar3 + 8) = 2;
        goto LAB__text__0019f0d8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      *(undefined4 *)(lVar3 + 8) = 3;
      uVar2 = *(undefined4 *)(*(long *)(param_1 + 0x88) + 0x5a68); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(*(long *)(param_1 + 0x88) + 0x5a60);
      *(undefined4 *)(lVar3 + 0x28) = uVar2;
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(lVar3 + 0x10) = *(undefined4 *)(param_1 + 0x1b4);
LAB__text__0019f0e8: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined4 *)(lVar3 + 0x3c) =
       *(undefined4 *)(&DAT_00723978 + (long)*(int *)(param_1 + 0x1c4) * 4);
  *(undefined4 *)(lVar3 + 0x40) = *(undefined4 *)((long)*(int *)(param_1 + 0x1c8) * 4 + 0x724880);
  *(undefined8 *)(lVar3 + 0x44) = *(undefined8 *)(param_1 + 0x1cc);
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



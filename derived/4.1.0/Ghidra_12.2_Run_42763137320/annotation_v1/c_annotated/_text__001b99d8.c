/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000B99D8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001b99d8; name: FUN_.text__001b99d8
 */


void FUN__text__001b99d8(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar3 = *(long *)(param_1 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((lVar3 == 0) || (lVar4 = *(long *)(lVar3 + 0x10), lVar4 == 0)) goto LAB__text__001b9b1c; // [自动静态注释] 条件判断/分支
  iVar1 = *(int *)(param_1 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((iVar1 == 0) && (**(int **)(lVar3 + 0x38) == 0)) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(param_1 + 0x4cc) = 0;
    lVar3 = *(long *)(param_1 + 8) + 0x110; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = FUN__text__0012cb14(lVar3,param_1 + 0x1b0); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__003a14c4(uVar2,0); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (*(int *)(param_1 + 0x4cc) != 0) { // [自动静态注释] 条件判断/分支
      iVar1 = *(int *)(param_1 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      goto LAB__text__001b9a20; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(undefined4 *)(param_1 + 0x4cc) = 2;
    lVar3 = *(long *)(param_1 + 8) + 0x110; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__001b9a20: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__001961e8(lVar4,*(undefined4 *)(*(long *)(param_1 + 0x38) + (long)iVar1 * 4 + 0x1b0)); // [自动静态注释] 调用尚未恢复正式名称的函数
    iVar1 = FUN__text__00192b70(); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (iVar1 == 1) { // [自动静态注释] 条件判断/分支
      uVar2 = FUN__text__0012cb14(lVar3,param_1 + 0xd0); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__003a14e8(uVar2,0); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar2 = FUN__text__0012cb14(lVar3,param_1 + 0x140); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__003a14e8(uVar2,0); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__001ca748(param_1,*(undefined4 *)(param_1 + 0x4cc),0); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar4 = FUN__text__0012cb14(lVar3,param_1 + 0xd0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(bool *)(lVar4 + 0x15a) = *(int *)(param_1 + 0x4cc) == 2;
  lVar3 = FUN__text__0012cb14(lVar3,param_1 + 0x140); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(bool *)(lVar3 + 0x15a) = *(int *)(param_1 + 0x4cc) == 2;
  if (*(undefined8 **)(param_1 + 0x18) != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    FUN__text__001ca91c(param_1,*(int *)**(undefined8 **)(param_1 + 0x18) != 1 && // [自动静态注释] 调用尚未恢复正式名称的函数
                                *(int *)(param_1 + 0x4cc) == 2);
    FUN__text__001cab30(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
LAB__text__001b9b1c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
} // [自动静态注释] 作用域/控制流边界



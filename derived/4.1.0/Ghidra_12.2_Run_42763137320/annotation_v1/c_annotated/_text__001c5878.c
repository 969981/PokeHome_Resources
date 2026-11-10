/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000C5878
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001c5878; name: FUN_.text__001c5878
 */


void FUN__text__001c5878(long param_1,undefined4 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(undefined4 *)(param_1 + 0x4c4) = param_2;
  if (*(long *)(param_1 + 0x18) == 0) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar6 = *(long *)(param_1 + 8) + 0x110; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = FUN__text__0012cb14(lVar6,param_1 + 0x48); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar3 = FUN__text__0012cb14(lVar6,param_1 + 0x1a0); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar4 = FUN__text__0012cb14(lVar6,param_1 + 0x210); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__0012cb14(lVar6,param_1 + 0x288); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__0012cb14(lVar6,param_1 + 0x2f8); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar1 = *(int *)(param_1 + 0x4c4) - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar1 < 6) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x001c5910 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__001c591c + (ulong)*(byte *)((ulong)uVar1 + 0x725e7f) * 4))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__003a14c4(uVar2,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar6 = *(long *)(param_1 + 8) + 0x110; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar5 = FUN__text__0012cb14(lVar6,param_1 + 0xb8); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar6 = FUN__text__0012cb14(lVar6,param_1 + 0x128); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003a14e8(lVar5,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined1 *)(lVar5 + 0x110) = 0;
  *(undefined8 *)(lVar5 + 0x108) = 0x100000000000000;
  FUN__text__003a14e8(lVar6,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined8 *)(lVar6 + 0x108) = 0;
  *(undefined1 *)(lVar6 + 0x110) = 0;
  FUN__text__001c5dd4(param_1,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003a14c4(uVar3,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003a14c4(uVar4,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



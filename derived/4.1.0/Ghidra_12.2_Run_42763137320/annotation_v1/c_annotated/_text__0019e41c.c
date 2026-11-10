/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0009E41C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0019e41c; name: FUN_.text__0019e41c
 */


void FUN__text__0019e41c(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar3 = *(undefined8 **)(param_1 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (puVar3 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar1 = puVar3[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__001b99d8(*(undefined8 *)(param_1 + 0x68)); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__001b99d8(*(undefined8 *)(param_1 + 0x88)); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__001cf5fc(*(undefined8 *)(param_1 + 0xa8)); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__001cf5fc(*(undefined8 *)(param_1 + 200)); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__001ad460(*(undefined8 *)(param_1 + 0x48)); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__001b1b44(*(undefined8 *)(param_1 + 0x68),0); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__001b1b44(*(undefined8 *)(param_1 + 0x88),0); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__001b1b44(*(undefined8 *)(param_1 + 0xa8),0); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__001b1b44(*(undefined8 *)(param_1 + 200),0); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar2 = *(int *)(lVar1 + 4) - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar2 < 4) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x0019e4d0 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__0019e4dc + (ulong)*(byte *)((ulong)uVar2 + 0x725c70) * 4))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(param_1 + 0x1bc) = 0;
  uVar2 = *(int *)(lVar1 + 8) - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar2 < 4) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x0019e5ec */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__0019e5f8 + (ulong)*(byte *)((ulong)uVar2 + 0x725c74) * 4))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  uVar2 = FUN__text__00323940(); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar2 = uVar2 & 0xff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(uint *)(param_1 + 0x1e4) = uVar2;
  FUN__text__001a39b4(*(undefined8 *)(param_1 + 0x28),uVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__001c722c(*(undefined8 *)(param_1 + 0x20),uVar2,*(undefined4 *)(param_1 + 0x1e4)); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00323960(*(undefined4 *)(param_1 + 0x1e4)); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__0019e874(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__001a507c(*(undefined8 *)(param_1 + 0x28),0); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*(int *)*puVar3 == 2) { // [自动静态注释] 条件判断/分支
    FUN__text__001a39b4(*(undefined8 *)(param_1 + 0x28),0); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



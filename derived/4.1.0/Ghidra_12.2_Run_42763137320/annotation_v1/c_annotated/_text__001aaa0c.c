/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000AAA0C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001aaa0c; name: FUN_.text__001aaa0c
 */


void FUN__text__001aaa0c(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar3 = *(long *)(param_1 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar3 == 0) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  uVar4 = *(undefined8 *)(lVar3 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1 = (undefined8 *)(param_1 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = FUN__text__00195844(uVar4,*(undefined4 *)(param_1 + 0x24)); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*(int *)(lVar2 + 0xc) != 1) { // [自动静态注释] 条件判断/分支
    local_58 = *puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_50 = *(undefined8 *)(param_1 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_48 = *(undefined4 *)(param_1 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__001aa7a0(lVar3,&local_58); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__0019555c(uVar4,puVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (**(int **)(lVar3 + 0x38) == 1) { // [自动静态注释] 条件判断/分支
    uVar5 = *(undefined8 *)(lVar3 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = FUN__text__00196200(uVar5,*(undefined4 *)(param_1 + 0x24)); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (*(char *)(param_1 + 0x20) == '\0') { // [自动静态注释] 条件判断/分支
      lVar3 = FUN__text__00195358(uVar5,puVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
      local_40 = *(undefined8 *)(lVar3 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_38 = *(undefined8 *)(lVar3 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar3 = FUN__text__00192680(uVar4,&local_40); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      lVar3 = FUN__text__0019264c(uVar4,param_1 + 0x2c); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    if (lVar3 != 0) { // [自动静态注释] 条件判断/分支
      *(undefined4 *)(lVar3 + 0x18) = 0;
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



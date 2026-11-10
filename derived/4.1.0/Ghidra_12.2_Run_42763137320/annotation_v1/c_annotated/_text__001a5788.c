/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000A5788
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001a5788; name: FUN_.text__001a5788
 */


undefined1 FUN__text__001a5788(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined4 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(long *)(param_1 + 0x18) == 0) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar3 = FUN__text__00195844(uVar6,*(undefined4 *)(param_1 + 0x24)); // [自动静态注释] 调用尚未恢复正式名称的函数
  puVar1 = (undefined4 *)(param_1 + 0x78); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(char *)(param_1 + 0x90) != '\0') { // [自动静态注释] 条件判断/分支
    puVar1 = (undefined4 *)(param_1 + 0x94); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  lVar4 = FUN__text__00195844(uVar6,*puVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar2 = *(int *)(lVar4 + 0xc) != 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((bool)uVar2) { // [自动静态注释] 条件判断/分支
    uVar5 = 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (*(int *)(lVar3 + 0xc) != 1) { // [自动静态注释] 条件判断/分支
    uVar2 = uVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



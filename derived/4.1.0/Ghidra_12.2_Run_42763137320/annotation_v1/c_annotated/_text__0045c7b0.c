/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0035C7B0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0045c7b0; name: FUN_.text__0045c7b0
 */


ulong FUN__text__0045c7b0(long param_1,ulong *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar1 = *(long *)(param_1 + 0x118); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = *(uint *)(param_1 + 0x120); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*param_2 < (lVar1 + (ulong)uVar2 * 0x118) - 0x118) { // [自动静态注释] 条件判断/分支
    FUN__text__0045ba54(); // [自动静态注释] 调用尚未恢复正式名称的函数
    lVar1 = *(long *)(param_1 + 0x118); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = *(uint *)(param_1 + 0x120); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  lVar1 = lVar1 + (ulong)uVar2 * 0x118; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0045cc00(lVar1 + -0x30); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00451d7c(lVar1 + -0x58); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00451cdc(lVar1 + -0x58); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*(long *)(lVar1 + -0x98) != 0) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(lVar1 + -0x90) = 0;
    (**(code **)(**(long **)(lVar1 + -0xa0) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(undefined8 *)(lVar1 + -0x98) = 0;
    *(undefined4 *)(lVar1 + -0x8c) = 0;
  } // [自动静态注释] 作用域/控制流边界
  if ((*(long *)(lVar1 + -0x78) != 0) && (*(char *)(lVar1 + -0x70) != '\0')) { // [自动静态注释] 条件判断/分支
    (**(code **)(**(long **)(lVar1 + -0x80) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(undefined1 *)(lVar1 + -0x70) = 0;
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)(lVar1 + -0x78) = 0;
  *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + -1;
  return *param_2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



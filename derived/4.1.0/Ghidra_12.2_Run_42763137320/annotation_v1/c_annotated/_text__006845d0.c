/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005845D0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006845d0; name: FUN_.text__006845d0
 */


undefined8 FUN__text__006845d0(long *param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar3 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(lVar3 + 0x18) = *(long *)(lVar3 + 0x18) + -9;
  FUN__text__00683cb4(); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__0067999c(*(undefined8 *)(lVar3 + 0x20),*(undefined4 *)(param_2 + 0x10)); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar1 = *(long *)(lVar3 + 0x20) + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(lVar3 + 0x20) = lVar1;
  FUN__text__0067999c(lVar1,*(undefined4 *)(param_2 + 0x14)); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(long *)(lVar3 + 0x20) = *(long *)(lVar3 + 0x20) + 4;
  uVar2 = FUN__text__006834ec(param_1,*(undefined8 *)(param_2 + 0x18), // [自动静态注释] 调用尚未恢复正式名称的函数
                              *(undefined8 *)(param_2 + 0x20));
  if ((int)uVar2 == -0x1f6) { // [自动静态注释] 条件判断/分支
    uVar2 = 0xfffffdf6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



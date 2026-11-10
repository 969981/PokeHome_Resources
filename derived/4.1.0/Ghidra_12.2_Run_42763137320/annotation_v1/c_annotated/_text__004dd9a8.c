/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003DD9A8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004dd9a8; name: FUN_.text__004dd9a8
 */


undefined4 FUN__text__004dd9a8(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined4 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_30; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_2c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_24; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar1 = FUN__text__00428734(); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar2 = *(long *)(param_1 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((*(byte *)(lVar2 + 10) >> 4 & 1) != 0) { // [自动静态注释] 条件判断/分支
    local_28 = *(undefined4 *)(param_1 + 0x24); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_30 = *(undefined4 *)(param_1 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_24 = *(undefined4 *)(lVar2 + 0x2b0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_2c = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__0048e990(DAT_00ae9a88,*(undefined4 *)(lVar2 + 0x280),&local_30,param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  return uVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



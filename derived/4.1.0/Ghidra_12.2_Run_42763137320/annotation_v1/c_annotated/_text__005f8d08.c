/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004F8D08
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f8d08; name: FUN_.text__005f8d08
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005f8d08(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_30 [2]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar3 = *_DAT_0089f5b8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar1 = lVar3 + 0x1b8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((double)*(long *)(lVar3 + 0x1c0) <= (double)*(long *)(lVar3 + 0x1d0)) { // [自动静态注释] 条件判断/分支
    lVar1 = lVar3 + 0x1c8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  (**(code **)(*param_1 + 0x28))(param_1,lVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  local_30[0] = param_1[0x2d]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_30[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = FUN__text__005e40dc(); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__005e4160(uVar2,local_30); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



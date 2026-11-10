/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0002C300
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0012c300; name: FUN_.text__0012c300
 */


bool FUN__text__0012c300(long param_1,byte *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong local_8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_2 == (byte *)0x0) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  local_8 = 0xcbf29ce484222645; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar1 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (bVar1 != 0) { // [自动静态注释] 循环/迭代
    param_2 = param_2 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_8 = (local_8 ^ bVar1) * 0x100000001b3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar1 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  lVar2 = *(long *)(param_1 + 0x1c0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__003c7d90(lVar2,&local_8); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  return lVar2 != 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



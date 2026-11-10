/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000195BC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001195bc; name: FUN_.text__001195bc
 */


void FUN__text__001195bc(long param_1,uint param_2,uint param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((*(int *)(param_1 + 0x38) != 2) && ((*(int *)(param_1 + 0x38) != 1 || ((param_3 & 1) != 0)))) // [自动静态注释] 条件判断/分支
  { // [自动静态注释] 作用域/控制流边界
    lVar1 = 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((param_2 & 1) == 0) { // [自动静态注释] 条件判断/分支
      lVar1 = 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    uVar2 = *(ulong *)(param_1 + 8) >> lVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((uVar2 & 0xf000) != 0) { // [自动静态注释] 条件判断/分支
      uVar3 = (uVar2 & 0xa000) << 0xf; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(ulong *)(param_1 + 8) =
           uVar3 & 0xffffffffc0000000 | (uVar2 >> 0xc & 1) << 0x1f | // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
           uVar3 & 0x3fffffff | (uVar2 >> 0xe & 1) << 0x1d | *(ulong *)(param_1 + 8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



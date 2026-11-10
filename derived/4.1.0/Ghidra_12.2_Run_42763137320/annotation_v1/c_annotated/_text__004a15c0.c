/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003A15C0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004a15c0; name: FUN_.text__004a15c0
 */


void FUN__text__004a15c0(long param_1,uint param_2,uint *param_3,ulong param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ulong uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__0042d2a0(); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*(long *)(param_1 + 0x10) != 0) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(*(long *)(param_1 + 0x10) + 8) = 0;
    if (param_2 != 0) { // [自动静态注释] 条件判断/分支
      uVar1 = (ulong)param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        uVar1 = uVar1 - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(ulong *)(*(long *)(param_1 + 0x10) + 8) =
             1L << ((ulong)*param_3 & 0x3f) | *(ulong *)(*(long *)(param_1 + 0x10) + 8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        param_3 = param_3 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (uVar1 != 0); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    if ((param_4 & 1) != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__0042d4a0(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



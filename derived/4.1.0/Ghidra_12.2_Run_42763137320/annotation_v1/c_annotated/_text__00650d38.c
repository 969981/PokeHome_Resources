/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00550D38
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00650d38; name: FUN_.text__00650d38
 */


void FUN__text__00650d38(long param_1,int param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar1 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_2 != 1) { // [自动静态注释] 条件判断/分支
    if (param_2 == 2) { // [自动静态注释] 条件判断/分支
      uVar1 = *(uint *)(*(long *)(param_1 + 0x420) + 0x84); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((uVar1 >> 9 & 1) != 0) { // [自动静态注释] 条件判断/分支
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      uVar1 = (uVar1 >> 9 ^ 0xffffffff) & 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  if (uVar1 != (*(uint *)(param_1 + 0x3fc) & 1)) { // [自动静态注释] 条件判断/分支
    *(uint *)(param_1 + 0x3fc) = *(uint *)(param_1 + 0x3fc) & 0xfffffffe | uVar1;
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



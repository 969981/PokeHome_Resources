/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00374C38
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00474c38; name: FUN_.text__00474c38
 */


void FUN__text__00474c38(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar1 = (uint *)(param_1 + 0x313); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((*puVar1 & 0x5000) == 0x4000) { // [自动静态注释] 条件判断/分支
    FUN__text__0047af90(param_1 + 0x18,0); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (*(long *)(param_1 + 0x90) != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__00458840(); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    *puVar1 = *puVar1 & 0xffffbfff;
    FUN__text__004730bc(3,param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (*(long *)(param_1 + 0x288) != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__0042f634(DAT_00ae9a60); // [自动静态注释] 调用尚未恢复正式名称的函数
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



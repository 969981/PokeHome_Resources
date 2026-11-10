/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0054FDA0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0064fda0; name: FUN_.text__0064fda0
 */


undefined8 FUN__text__0064fda0(long param_1,undefined1 *param_2,ulong *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((*(char *)(param_1 + 1) == '\x02') && // [自动静态注释] 条件判断/分支
     (lVar1 = FUN__text__00656948(2,param_1 + 4,param_2,0x2e), lVar1 != 0)) { // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar2 = nnsocketInetNtohs(*(undefined2 *)(param_1 + 2)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *param_3 = uVar2 & 0xffff;
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *param_2 = 0;
    *param_3 = 0;
    piVar4 = __errno_location(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *piVar4 = 0x61;
  } // [自动静态注释] 作用域/控制流边界
  return uVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



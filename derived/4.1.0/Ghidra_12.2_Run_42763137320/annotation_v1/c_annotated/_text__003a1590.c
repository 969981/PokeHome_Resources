/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002A1590
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003a1590; name: FUN_.text__003a1590
 */


void FUN__text__003a1590(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((char)param_1[0x10] != '\0') { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  plVar2 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    plVar1 = plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar2 = (long *)plVar1[0xd]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while (plVar2 != (long *)0x0); // [自动静态注释] 循环/迭代
  FUN__text__003a19b0(plVar1,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  (**(code **)(*param_1 + 0xa0))(param_1,1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  for (plVar2 = (long *)param_1[0xd]; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[0xd]) { // [自动静态注释] 循环/迭代
    (**(code **)(*plVar2 + 0xa8))(plVar2,1,param_1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(undefined1 *)(param_1 + 0x10) = 1;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



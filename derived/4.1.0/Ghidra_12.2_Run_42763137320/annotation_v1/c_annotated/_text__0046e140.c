/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0036E140
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0046e140; name: FUN_.text__0046e140
 */


void FUN__text__0046e140(undefined4 *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar1 = (long *)*(long *)(param_1 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (plVar1 != (long *)0x0) { // [自动静态注释] 循环/迭代
    lVar2 = *plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(plVar1 + 2) = 0;
    *(undefined4 *)(plVar1 + 4) = 0;
    if (plVar1[6] != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    *(undefined4 *)((long)plVar1 + 0x2c) = 0;
    plVar1[6] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (plVar1[1] != 0) { // [自动静态注释] 条件判断/分支
      *(undefined4 *)(plVar1 + 2) = 0;
      FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
      plVar1[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)((long)plVar1 + 0x14) = 0;
    } // [自动静态注释] 作用域/控制流边界
    if (plVar1[3] != 0) { // [自动静态注释] 条件判断/分支
      *(undefined4 *)(plVar1 + 4) = 0;
      FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
      plVar1[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)((long)plVar1 + 0x24) = 0;
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__00400fc0(0,plVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
    plVar1 = (long *)lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005BBE90
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006bbe90; name: FUN_.text__006bbe90
 */


void FUN__text__006bbe90(long *param_1,undefined8 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar3 = (long *)param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (plVar3 != param_1) { // [自动静态注释] 循环/迭代
    FUN__text__006b1770(plVar3 + 3,param_2,(char)plVar3[0xb] == '\0'); // [自动静态注释] 调用尚未恢复正式名称的函数
    plVar1 = (long *)plVar3[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar2 = *plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long **)(*plVar3 + 8) = plVar1;
    *plVar1 = *plVar3;
    *(long **)(lVar2 + 8) = plVar3;
    *plVar3 = lVar2;
    FUN__text__006bbe84(plVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__006a0f24(plVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
    plVar3 = (long *)param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



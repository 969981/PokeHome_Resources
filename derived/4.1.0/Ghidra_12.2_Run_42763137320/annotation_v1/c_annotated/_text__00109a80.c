/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00009A80
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00109a80; name: FUN_.text__00109a80
 */


void FUN__text__00109a80(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar1 = (long *)*(long *)(param_1 + 0x80); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (plVar1 != (long *)0x0) { // [自动静态注释] 循环/迭代
    lVar2 = *plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (**(code **)(**(long **)(param_1 + 0x88) + 0x18))(*(long **)(param_1 + 0x88),plVar1,0x20,8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    plVar1 = (long *)lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  lVar2 = *(long *)(param_1 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(**(long **)(param_1 + 0x68) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              (*(long **)(param_1 + 0x68),lVar2,*(long *)(param_1 + 0x60) << 3,8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x50)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



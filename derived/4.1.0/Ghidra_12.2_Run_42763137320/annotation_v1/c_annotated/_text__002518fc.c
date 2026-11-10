/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001518FC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002518fc; name: FUN_.text__002518fc
 */


void FUN__text__002518fc(undefined8 param_1,long *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_40 [24]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar1 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_2 = 0;
  FUN__text__005e927c(auStack_40,0x8752b0); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003a1de4(lVar1,auStack_40); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (local_28 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  plVar2 = (long *)(lVar1 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (**(code **)(*plVar2 + 0x18))(plVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



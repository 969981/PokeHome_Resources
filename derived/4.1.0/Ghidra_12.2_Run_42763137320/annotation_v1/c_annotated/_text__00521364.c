/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00421364
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00521364; name: FUN_.text__00521364
 */


undefined1  [16] // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
FUN__text__00521364(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                   long param_5) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auVar3 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_30; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_38 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_30 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_28 = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar2 = (double)FUN__text__00520f94(param_4,&local_38); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*(int *)(param_4 + 0x60) == 0) { // [自动静态注释] 条件判断/分支
    lVar1 = -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar1 = *(long *)(**(long **)(param_4 + 0x58) + 0x78); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  fVar4 = -*(float *)(param_4 + 0x44); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar1 != param_5) { // [自动静态注释] 条件判断/分支
    fVar4 = *(float *)(param_4 + 0x44); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  auVar3._0_8_ = dVar2 + (double)(fVar4 * *(float *)(param_4 + 0x30)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  auVar3._8_8_ = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return auVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



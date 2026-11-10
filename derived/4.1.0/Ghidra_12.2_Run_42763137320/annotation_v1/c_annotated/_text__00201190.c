/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00101190
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00201190; name: FUN_.text__00201190
 */


void FUN__text__00201190(long *param_1,uint *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_50 [2]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lStack_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar1 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_50[0] = *(undefined4 *)(param_1[2] + (ulong)*param_2 * 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = *(long *)(lVar1 + 0xa0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lStack_40 = param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_38 = *(undefined8 *)(lStack_40 + 0x390); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_48 = lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0013f4cc(*(undefined8 *)(lVar1 + 0xd8),local_50); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (local_48 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



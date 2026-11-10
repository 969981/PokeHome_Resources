/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00012F48
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00112f48; name: FUN_.text__00112f48
 */


void FUN__text__00112f48(long *param_1,long param_2,undefined8 param_3,undefined4 param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__005f32c4(*(undefined8 *)(param_2 + 0x70)); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_18 = *(long *)(param_2 + 0x78); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (local_18 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_18 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00157094(&local_18,*(undefined8 *)(param_2 + 0x70),param_4,0xb); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (local_18 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_18 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    local_18 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  lVar1 = *(long *)(param_2 + 0x78); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = lVar1;
  if (lVar1 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



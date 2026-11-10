/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001445E4
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002445e4; name: FUN_.text__002445e4
 */


undefined8 FUN__text__002445e4(long param_1,undefined8 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ulong uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_40 [3]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((*(int *)(*(long *)(param_1 + 0x640) + 0xf0) != 1) || // [自动静态注释] 条件判断/分支
     (uVar1 = FUN__text__00119a4c(param_2,0x10000000), (uVar1 & 1) == 0)) { // [自动静态注释] 调用尚未恢复正式名称的函数
    return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar2 = FUN__text__0012cbe0(param_1 + 0x110,0x70ee35); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_40[0] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__003a8304(uVar2,local_40,1,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined4 *)(param_1 + 0x708) = 1;
  FUN__text__00243e90(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__005e927c(local_40,0x8740c0); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003c1e4c(local_40); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (local_28 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



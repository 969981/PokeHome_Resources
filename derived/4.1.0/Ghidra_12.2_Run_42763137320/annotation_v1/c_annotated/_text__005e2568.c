/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004E2568
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e2568; name: FUN_.text__005e2568
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005e2568(long *param_1,long *param_2,undefined1 param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar2 = FUN__text__005e40dc(); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__005e6534(param_1,uVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar1 = _DAT_0089fdb0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x4c] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)((long)param_1 + 0x26c) = param_3;
  *param_1 = lVar1 + 0x10;
  param_1[9] = lVar1 + 0x68; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[10] = lVar1 + 0xa8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0x4d) = 1;
  (**(code **)(*param_2 + 0x20))(&local_18,param_2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (param_1[0x4c] != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(param_1[0x4c] + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  param_1[0x4c] = local_18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



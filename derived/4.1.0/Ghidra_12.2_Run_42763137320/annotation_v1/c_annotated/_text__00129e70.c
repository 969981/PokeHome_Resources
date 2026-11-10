/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00029E70
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00129e70; name: FUN_.text__00129e70
 */


void FUN__text__00129e70(undefined8 param_1,undefined8 param_2,byte *param_3,uint param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte *pbVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong local_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte *pbStack_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  size_t local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_50 = strlen((char *)param_3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar1 = *param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_60 = 0xcbf29ce484222645; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pbVar2 = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (bVar1 != 0) { // [自动静态注释] 循环/迭代
    pbVar2 = pbVar2 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_60 = (local_60 ^ bVar1) * 0x100000001b3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar1 = *pbVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  local_48 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pbStack_58 = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__00129f20(param_1,param_2,&local_60,param_4 & 1); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (local_48 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



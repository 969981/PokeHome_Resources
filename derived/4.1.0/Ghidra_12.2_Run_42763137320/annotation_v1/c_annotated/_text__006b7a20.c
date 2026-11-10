/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005B7A20
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b7a20; name: FUN_.text__006b7a20
 */


float FUN__text__006b7a20(long *param_1,float *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong local_30; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_38 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (**(code **)(*(long *)*param_1 + 0x60))((long *)*param_1,&local_38); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  local_30 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (**(code **)(*(long *)*param_1 + 0x68))((long *)*param_1,&local_30); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  local_28 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (**(code **)(*(long *)*param_1 + 0x60))((long *)*param_1,&local_28); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bVar1 = *(byte *)(*param_1 + 0x5b) & 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar2 = ((float)local_28 - *(float *)(*param_1 + 0x50)) * 0.5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (bVar1 == 2) { // [自动静态注释] 条件判断/分支
    local_30._0_4_ = fVar2 + (float)local_30; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (bVar1 != 1) goto LAB__text__006b7ac8; // [自动静态注释] 条件判断/分支
    local_30._0_4_ = (float)local_30 - fVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  local_30 = (ulong)(uint)(float)local_30; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__006b7ac8: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return (float)local_30 - (*param_2 - (float)local_38) * 0.5; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



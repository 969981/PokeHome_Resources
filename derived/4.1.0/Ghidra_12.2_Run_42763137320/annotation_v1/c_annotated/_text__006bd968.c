/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005BD968
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006bd968; name: FUN_.text__006bd968
 */


void FUN__text__006bd968(long *param_1,float *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (((*(byte *)((long)param_1 + 0x62) >> 1 & 1) == 0) || // [自动静态注释] 条件判断/分支
     (lVar1 = FUN__text__006b44cc(param_1), (*(byte *)(lVar1 + 0x228) >> 1 & 1) == 0)) { // [自动静态注释] 调用尚未恢复正式名称的函数
    *param_2 = ABS(*(float *)(param_1 + 10));
    param_2[1] = ABS(*(float *)((long)param_1 + 0x54)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  local_40 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_38 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__006bda44(param_1,&local_40); // [自动静态注释] 调用尚未恢复正式名称的函数
  fVar3 = (float)local_38 - (float)local_40; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((float)local_38 - (float)local_40 <= ABS(*(float *)(param_1 + 10))) { // [自动静态注释] 条件判断/分支
    fVar3 = ABS(*(float *)(param_1 + 10)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  fVar2 = (float)(**(code **)(*param_1 + 0x70))(param_1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_2 = fVar3 + fVar2 * 2.0;
  fVar3 = local_38._4_4_ - local_40._4_4_; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (local_38._4_4_ - local_40._4_4_ <= ABS(*(float *)((long)param_1 + 0x54))) { // [自动静态注释] 条件判断/分支
    fVar3 = ABS(*(float *)((long)param_1 + 0x54)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  param_2[1] = fVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



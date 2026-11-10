/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002AD204
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003ad204; name: FUN_.text__003ad204
 */


void FUN__text__003ad204(long param_1,float *param_2,float *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined1 local_40 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_30 [2]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(char *)(param_1 + 0x6e8) == '\0') { // [自动静态注释] 条件判断/分支
    (**(code **)(**(long **)(param_1 + 0x98) + 0x58)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              (*(long **)(param_1 + 0x98),param_1 + 0x6d0,local_30,local_40); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(undefined8 *)param_2 = local_30[0];
    *param_3 = local_40._0_4_;
    param_3[1] = local_40._4_4_; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  *param_2 = *(float *)(param_1 + 0x6d8) - *(float *)(param_1 + 0x6e0) * 0.5;
  param_2[1] = *(float *)(param_1 + 0x6dc) + *(float *)(param_1 + 0x6e4) * 0.5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_3 = *(float *)(param_1 + 0x6d8) + *(float *)(param_1 + 0x6e0) * 0.5;
  param_3[1] = *(float *)(param_1 + 0x6dc) - *(float *)(param_1 + 0x6e4) * 0.5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



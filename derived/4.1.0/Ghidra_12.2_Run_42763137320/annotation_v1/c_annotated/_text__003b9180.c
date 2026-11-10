/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002B9180
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b9180; name: FUN_.text__003b9180
 */


void FUN__text__003b9180(float param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  float fVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *pcVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fStack_4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(char *)(param_2 + 0x1ac) == '\0') { // [自动静态注释] 条件判断/分支
    if (param_1 < *(float *)(param_2 + 0x1a0)) { // [自动静态注释] 条件判断/分支
      pcVar2 = *(code **)(param_2 + 0x120); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar1 = *(float *)(param_2 + 0x1a0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      pcVar2 = *(code **)(param_2 + 0x120); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar1 = *(float *)(param_2 + 0x1a4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (param_1 <= *(float *)(param_2 + 0x1a4)) goto joined_r0x003b9230; // [自动静态注释] 条件判断/分支
    } // [自动静态注释] 作用域/控制流边界
    param_1 = fVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (pcVar2 != (code *)0x0) { // [自动静态注释] 条件判断/分支
      local_8 = *(undefined4 *)(param_2 + 0x1d4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fStack_4 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      (*pcVar2)(param_2 + 0x140,&fStack_4,&local_8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *(float *)(param_2 + 0x1d4) = param_1;
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    pcVar2 = *(code **)(param_2 + 0x120); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
joined_r0x003b9230: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (pcVar2 != (code *)0x0) { // [自动静态注释] 条件判断/分支
      local_8 = *(undefined4 *)(param_2 + 0x1d4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fStack_4 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      (*pcVar2)(param_2 + 0x140,&fStack_4,&local_8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  *(float *)(param_2 + 0x1d4) = param_1;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



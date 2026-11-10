/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002B9248
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b9248; name: FUN_.text__003b9248
 */


void FUN__text__003b9248(float param_1,long param_2,uint param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  code *pcVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fStack_34; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(int *)(param_2 + 0x1b8) != 0) { // [自动静态注释] 条件判断/分支
    *(undefined1 *)(param_2 + 0x1dc) = 0;
  } // [自动静态注释] 作用域/控制流边界
  fVar5 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(char *)(param_2 + 0x1ac) == '\0') { // [自动静态注释] 条件判断/分支
    fVar2 = *(float *)(param_2 + 0x1a4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (param_1 <= *(float *)(param_2 + 0x1a4)) { // [自动静态注释] 条件判断/分支
      fVar2 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    fVar5 = *(float *)(param_2 + 0x1a0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(float *)(param_2 + 0x1a0) <= param_1) { // [自动静态注释] 条件判断/分支
      fVar5 = fVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  fVar6 = *(float *)(param_2 + 0x1d4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_2 + 0x1b8) = 1;
  fVar4 = fVar5 - fVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar2 = -*(float *)(param_2 + 0x1a8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (fVar5 <= fVar6) { // [自动静态注释] 条件判断/分支
    fVar2 = *(float *)(param_2 + 0x1a8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  fVar3 = (float)param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (fVar3 <= (-(fVar2 * -0.5 * fVar3) - fVar4 / fVar3) / fVar2) { // [自动静态注释] 条件判断/分支
    fVar4 = fVar4 / fVar3 + fVar3 * fVar2 * -0.5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    pcVar1 = *(code **)(param_2 + 0x120); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(param_2 + 0x1bc) = 0;
    *(undefined4 *)(param_2 + 0x1d8) = 0;
    *(float *)(param_2 + 0x1d0) = fVar2;
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    fVar4 = (fVar4 + fVar4) / fVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    pcVar1 = *(code **)(param_2 + 0x120); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(param_2 + 0x1bc) = 0;
    *(undefined4 *)(param_2 + 0x1d8) = 0;
    *(float *)(param_2 + 0x1d0) = -fVar4 / fVar3;
  } // [自动静态注释] 作用域/控制流边界
  if (pcVar1 != (code *)0x0) { // [自动静态注释] 条件判断/分支
    local_38 = fVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fStack_34 = fVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (*pcVar1)(param_2 + 0x140,&fStack_34,&local_38); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(float *)(param_2 + 0x1d4) = fVar6;
  *(float *)(param_2 + 0x1c4) = fVar5;
  *(float *)(param_2 + 0x1c8) = fVar6;
  *(uint *)(param_2 + 0x1c0) = param_3;
  *(float *)(param_2 + 0x1cc) = fVar4;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



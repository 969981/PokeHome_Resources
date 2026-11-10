/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005C5A70
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006c5a70; name: FUN_.text__006c5a70
 */


void FUN__text__006c5a70(long param_1,undefined8 param_2,float *param_3,float *param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float local_30; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fStack_2c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fStack_24; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_28 = *param_3 + *param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_30 = (*(float *)(param_1 + 0x50) - *param_4) - param_4[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fStack_24 = param_3[1] - param_4[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fStack_2c = (*(float *)(param_1 + 0x54) - param_4[2]) - param_4[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((*(byte *)(param_1 + 0x10a) >> 3 & 1) != 0) { // [自动静态注释] 条件判断/分支
    fVar2 = (float)(int)*(short *)(param_1 + 0xd2) * 0.0625; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_28 = local_28 - fVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar3 = (float)(int)*(short *)(param_1 + 0xd6) * 0.0625; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fStack_24 = fVar3 + fStack_24; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_30 = local_30 + fVar2 + (float)(int)*(short *)(param_1 + 0xd4) * 0.0625; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fStack_2c = fStack_2c + fVar3 + (float)(int)*(short *)(param_1 + 0xd8) * 0.0625; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  uVar1 = FUN__text__006add38(*(undefined8 *)(param_1 + 0x118),param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__0069d960(param_2,uVar1,&local_28,&local_30,*(undefined1 *)(param_1 + 0xf9), // [自动静态注释] 调用尚未恢复正式名称的函数
                      *(undefined8 *)(param_1 + 0x100));
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



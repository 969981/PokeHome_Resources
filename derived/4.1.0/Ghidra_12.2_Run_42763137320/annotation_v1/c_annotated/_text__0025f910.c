/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0015F910
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0025f910; name: FUN_.text__0025f910
 */


void FUN__text__0025f910(char *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_2c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint local_24; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar1 = *(uint *)(param_1 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = 0xff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar1 <= *(uint *)(param_1 + 0x44)) { // [自动静态注释] 条件判断/分支
    *(uint *)(param_1 + 0x98) = uVar1 + 1;
    uVar2 = (uint)(((float)uVar1 / (float)*(uint *)(param_1 + 0x44)) * *(float *)(param_1 + 0x20) * // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  255.0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  if (param_1[0x9c] != '\0') { // [自动静态注释] 条件判断/分支
    uVar2 = 0xff - uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  local_28 = uVar2 << 0x18 | 0xffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__005bea1c(*(undefined8 *)(*(long *)(param_1 + 0x88) + 0xb0),&local_28); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__005bf9ec(*(undefined8 *)(*(long *)(param_1 + 0x88) + 0xb0),param_1 + 0x90); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*param_1 != '\0') { // [自动静态注释] 条件判断/分支
    local_2c = 0x40200000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__005bea58(*(undefined8 *)(*(long *)(param_1 + 0x88) + 0xb0),&local_2c); // [自动静态注释] 调用尚未恢复正式名称的函数
    local_24 = (int)(((float)uVar2 / 255.0) * 255.0) << 0x18 | // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
               ((int)(*(float *)(param_1 + 0x3c) * 255.0) & 0xffU) << 0x10 | // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
               ((int)(*(float *)(param_1 + 0x38) * 255.0) & 0xffU) << 8 | // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
               (int)(*(float *)(param_1 + 0x34) * 255.0) & 0xffU; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__005bea1c(*(undefined8 *)(*(long *)(param_1 + 0x88) + 0xb0),&local_24); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__005bf9ec(*(undefined8 *)(*(long *)(param_1 + 0x88) + 0xb0),param_1 + 0x94); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00336F70
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00436f70; name: FUN_.text__00436f70
 */


void FUN__text__00436f70(long param_1,int *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_34; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *local_30; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iStack_24; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_28 = *(int *)(param_1 + 0x70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iStack_24 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(int *)(param_1 + 0x70) = iStack_24;
  if (iStack_24 != local_28 && *(int *)(param_1 + 0x60) != 0) { // [自动静态注释] 条件判断/分支
    local_68 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_50 = 0xff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_48 = 0xff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_60 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_38 = (undefined4)*(undefined8 *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_58 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_40 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(char *)(param_1 + 0x69) = *(char *)(param_1 + 0x69) + '\x01';
    *(char *)(param_1 + 0x68) = *(char *)(param_1 + 0x68) + '\x04';
    local_30 = &local_68; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_34 = (undefined1)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__00438120(param_1 + 0x58,&local_38); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(char *)(param_1 + 0x68) = *(char *)(param_1 + 0x68) + -4;
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



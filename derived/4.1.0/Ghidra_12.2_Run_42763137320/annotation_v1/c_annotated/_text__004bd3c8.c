/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003BD3C8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004bd3c8; name: FUN_.text__004bd3c8
 */


void FUN__text__004bd3c8(long *param_1,undefined4 param_2,long param_3,undefined4 param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_88; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lStack_80; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_78; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_54; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_44; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_3c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uStack_3b; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 uStack_3a; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined7 uStack_37; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_30; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plStack_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uStack_3b = param_3 == 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_3c = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_3a = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_38 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_40 = *(byte *)((long)param_1 + 0x36) & 0x1f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plStack_28 = param_1 + 7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_30 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_58 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_50 = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_48 = param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_44 = FUN__text__004ba030(); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar1 = (**(code **)(*param_1 + 0x70))(param_1,&local_58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_78 = CONCAT44(uStack_44,local_48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_70 = CONCAT26(uStack_3a,CONCAT15(uStack_3b,CONCAT14(local_3c,local_40))); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_68 = CONCAT71(uStack_37,local_38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_88 = CONCAT44(uStack_54,local_58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_60 = local_30; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lStack_80 = local_50; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__004bd1a0(uVar1,&local_88); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__0045da60(&local_58); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



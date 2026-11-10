/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005E2D48
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006e2d48; name: FUN_.text__006e2d48
 */


uint FUN__text__006e2d48(long param_1,undefined8 param_2,long param_3,uint param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        undefined8 param_5,int *param_6) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lStack_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piStack_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_40 = (ulong)(param_4 == 3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar1 = *param_6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_50 = (ulong)param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_4 != 3) { // [自动静态注释] 条件判断/分支
    uVar3 = *(undefined8 *)(*(long *)(param_3 + 0x238) + (ulong)param_4 * 8 + 0x340); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)(*(long *)(param_1 + 0x10) + (long)iVar1 * 0x9e8 + 0x9b8) = uVar3;
  *(undefined4 *)(*(long *)(param_1 + 0x10) + (long)iVar1 * 0x9e8 + 0x9c0) = 6;
  local_60 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lStack_58 = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_48 = param_5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  piStack_38 = param_6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = FUN__text__006d74b0(&local_60); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((uVar2 & 1) != 0) { // [自动静态注释] 条件判断/分支
    if (*(code **)(param_3 + 0x3f8) != (code *)0x0) { // [自动静态注释] 条件判断/分支
      (**(code **)(param_3 + 0x3f8))(&local_60); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    iVar1 = *param_6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(*(long *)(param_1 + 0x10) + (long)iVar1 * 0x9e8 + 0x9b8) = 0;
    *(undefined4 *)(*(long *)(param_1 + 0x10) + (long)iVar1 * 0x9e8 + 0x9c0) = 6;
  } // [自动静态注释] 作用域/控制流边界
  return uVar2 & 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



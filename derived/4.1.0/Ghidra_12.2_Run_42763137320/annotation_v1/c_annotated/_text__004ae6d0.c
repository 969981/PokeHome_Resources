/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003AE6D0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ae6d0; name: FUN_.text__004ae6d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004ae6d0(long param_1,ulong param_2,undefined4 param_3,undefined4 param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        undefined8 param_5,byte param_6) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_64; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_4c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_44; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar1 = _DAT_008a43d8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_68 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_60 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_4c = 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_44 = (undefined4)param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_64 = param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_58 = param_5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_50 = param_6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar2 = (**(code **)(*(long *)*_DAT_008a43d8 + 0x28)) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    ((long *)*_DAT_008a43d8,param_2,&local_68,0,param_1 + 0x40,1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if ((iVar2 != 1) && ((param_6 & 1) != 0)) { // [自动静态注释] 条件判断/分支
    local_50 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar2 = (**(code **)(*(long *)*puVar1 + 0x28)) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                      ((long *)*puVar1,param_2 & 0xffffffff,&local_68,0,param_1 + 0x40,1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  if (iVar2 == 1) { // [自动静态注释] 条件判断/分支
    FUN__text__004ae5a0(param_1,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



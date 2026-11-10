/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00371658
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00471658; name: FUN_.text__00471658
 */


undefined8 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
FUN__text__00471658(undefined4 param_1,long *param_2,undefined8 param_3,int param_4,ulong param_5, // [自动静态注释] 调用尚未恢复正式名称的函数
                   undefined4 *param_6,long *param_7,byte param_8) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plStack_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plStack_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_3c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte local_37; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_38 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_3c = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_50 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plStack_58 = param_7 + 0x6d; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_37 = (*(uint *)((long)param_7 + 0x313) & 0x2000000) == 0 & param_8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((*(ushort *)(param_7 + 0x44) & 0x40) != 0) { // [自动静态注释] 条件判断/分支
    plStack_58 = (long *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  local_60 = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plStack_48 = param_7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_40 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar1 = (**(code **)(*param_2 + 0x118))(param_2,&local_60,1,0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((iVar1 == 2) || // [自动静态注释] 条件判断/分支
     (((param_4 == 0x50 || (iVar1 == 0x50)) && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      (*(ushort *)(param_7 + 0x44) = *(ushort *)(param_7 + 0x44) | 0x100, (param_5 & 1) == 0)))) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *param_6 = 0x20;
    return 3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar2 = (**(code **)(*param_7 + 0x18))(param_7); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



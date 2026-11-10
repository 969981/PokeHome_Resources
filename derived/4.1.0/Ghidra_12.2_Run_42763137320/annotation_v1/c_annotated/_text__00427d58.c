/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00327D58
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00427d58; name: FUN_.text__00427d58
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN__text__00427d58(long param_1,undefined4 *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 extraout_var; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 extraout_x1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auVar2 [12]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_4c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  iVar1 = *(int *)(param_1 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  auVar2 = FUN__text__004de4f0(param_1 + 0x90,*param_2,param_1 + 0x24); // [自动静态注释] 调用尚未恢复正式名称的函数
  *param_2 = auVar2._8_4_;
  FUN__text__004af510(param_1 + 0xa0,*(undefined8 *)(param_1 + 0x18),iVar1,iVar1 + auVar2._4_4_); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((*(byte *)(*(long *)(param_1 + 0x18) + 10) >> 4 & 1) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__004de260(0x3f800000,param_1 + 0x24); // [自动静态注释] 调用尚未恢复正式名称的函数
    _local_50 = CONCAT44(extraout_var,iVar1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_48 = extraout_x1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__0048e990(*_DAT_008a4638,*(undefined4 *)(*(long *)(param_1 + 0x18) + 0x280),&local_50, // [自动静态注释] 调用尚未恢复正式名称的函数
                        param_1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return auVar2._0_8_ & 0xffffffff; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



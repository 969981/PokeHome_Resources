/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00375C10
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00475c10; name: FUN_.text__00475c10
 */


void FUN__text__00475c10(long param_1,long param_2,ulong param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_44; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uStack_3c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(long *)(param_1 + 0x90) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__00458920(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  if (*(int *)(param_2 + 0x148) != 0) { // [自动静态注释] 条件判断/分支
    local_50 = *(undefined8 *)(param_1 + 0x360); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_60 = *(undefined8 *)(param_1 + 0x350); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_58 = *(undefined4 *)(param_1 + 0x358); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_68 = *(undefined8 *)(param_1 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_48 = *(undefined4 *)(param_1 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_44 = *(undefined4 *)(param_1 + 0x280); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_3c = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((param_3 & 1) == 0) { // [自动静态注释] 条件判断/分支
      uStack_3c = 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    local_40 = *(undefined4 *)(param_1 + 0x330); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_3c = uStack_3c & *(int *)(param_1 + 0x313) >> 0x1f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_38 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__0046ce30(DAT_00ae9a90,param_2,&local_68,(long *)(param_1 + 0x90)); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



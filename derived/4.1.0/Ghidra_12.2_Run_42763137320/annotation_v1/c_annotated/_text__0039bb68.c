/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0029BB68
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0039bb68; name: FUN_.text__0039bb68
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0039bb68(long param_1,undefined8 param_2,undefined8 *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 local_80; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_78; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__005da7f0(&local_80,*_DAT_0089f550,param_2,*param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined8 *)(param_1 + 0xa8) = local_80;
  *(undefined8 *)(param_1 + 0xb0) = uStack_78;
  *(undefined4 *)(param_1 + 0xb8) = local_70;
  *(undefined8 *)(param_1 + 0xc0) = local_68;
  *(undefined8 *)(param_1 + 200) = uStack_60;
  *(undefined8 *)(param_1 + 0xd0) = local_58;
  if (*(long *)(param_1 + 0xd8) != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(*(long *)(param_1 + 0xd8) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)(param_1 + 0xd8) = local_50;
  *(undefined8 *)(param_1 + 0xe0) = uStack_48;
  *(undefined8 *)(param_1 + 0xe8) = local_40;
  *(undefined8 *)(param_1 + 0xf0) = uStack_38;
  FUN__text__005dd648((undefined8 *)(param_1 + 0xa8),*param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



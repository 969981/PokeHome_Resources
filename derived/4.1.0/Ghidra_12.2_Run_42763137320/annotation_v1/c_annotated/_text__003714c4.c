/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002714C4
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003714c4; name: FUN_.text__003714c4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003714c4(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 local_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_30; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__005daa98(*_DAT_0089f550,param_1 + 0x60); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__005dd7d8(&local_70); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined8 *)(param_1 + 0x60) = local_70;
  *(undefined8 *)(param_1 + 0x68) = uStack_68;
  *(undefined4 *)(param_1 + 0x70) = local_60;
  *(undefined8 *)(param_1 + 0x78) = local_58;
  *(undefined8 *)(param_1 + 0x80) = uStack_50;
  *(undefined8 *)(param_1 + 0x88) = local_48;
  if (*(long *)(param_1 + 0x90) != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(*(long *)(param_1 + 0x90) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)(param_1 + 0x90) = local_40;
  *(undefined8 *)(param_1 + 0x98) = uStack_38;
  *(undefined8 *)(param_1 + 0xa0) = local_30;
  *(undefined8 *)(param_1 + 0xa8) = uStack_28;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



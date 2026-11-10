/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00458334
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00558334; name: FUN_.text__00558334
 */


ulong FUN__text__00558334(long param_1,long *param_2,ulong param_3,undefined8 param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ulong uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  param_3 = param_3 & 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = FUN__text__0054f9a0(); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (((((int)uVar1 == 1) && // [自动静态注释] 条件判断/分支
       (uVar1 = FUN__text__00559ffc(param_1 + 0x30,param_2,param_3), (int)uVar1 == 1)) && // [自动静态注释] 调用尚未恢复正式名称的函数
      (uVar1 = FUN__text__00559ffc(param_1 + 0x40,param_2,param_3), (int)uVar1 == 1)) && // [自动静态注释] 调用尚未恢复正式名称的函数
     ((uVar1 = FUN__text__00559ffc(param_1 + 0x50,param_2,param_3), (int)uVar1 == 1 && // [自动静态注释] 调用尚未恢复正式名称的函数
      (uVar1 = FUN__text__0055aa20(param_1 + 0x60,param_2,param_3,param_4), (int)uVar1 == 1)))) { // [自动静态注释] 调用尚未恢复正式名称的函数
    lVar2 = (**(code **)(*param_2 + 0x10)) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                      (param_2,(ulong)((int)(param_3 >> 1) + 1) << 2,0x70f033,0x87); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(long *)(param_1 + 0xa8) = lVar2;
    uVar3 = 0x34; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
      uVar3 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    uVar1 = (ulong)uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return uVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



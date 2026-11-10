/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00346A1C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00446a1c; name: FUN_.text__00446a1c
 */


undefined8 FUN__text__00446a1c(long *param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  char cVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte local_14 [4]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  cVar1 = *(char *)(param_2 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (((cVar1 != '\0') && (cVar1 == -0x70)) && (*(char *)(param_2 + 0x9d) != '\0')) { // [自动静态注释] 条件判断/分支
    local_14[0] = *(byte *)(param_2 + 0x310) & 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = FUN__text__00477138(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar3 = FUN__text__00494e70(param_1,(char *)(param_2 + 0x98),uVar2,local_14, // [自动静态注释] 调用尚未恢复正式名称的函数
                                *(undefined8 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x34));
    if ((int)uVar3 != 1) { // [自动静态注释] 条件判断/分支
      return uVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    *(byte *)(param_2 + 0x310) = *(byte *)(param_2 + 0x310) & 0xfe | local_14[0];
  } // [自动静态注释] 作用域/控制流边界
  uVar3 = FUN__text__004965f0(param_1,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((int)uVar3 == 3) { // [自动静态注释] 条件判断/分支
    return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if ((int)uVar3 == 1) { // [自动静态注释] 条件判断/分支
    uVar3 = (**(code **)(*param_1 + 0x268))(param_1,param_2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return uVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界



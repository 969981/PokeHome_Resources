/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00376DD0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00476dd0; name: FUN_.text__00476dd0
 */


undefined8 FUN__text__00476dd0(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_30; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(param_1 + 0x2a8) != 0) { // [自动静态注释] 条件判断/分支
    uVar2 = FUN__text__00451690(*(long *)(param_1 + 0x2a8),param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    if ((uVar2 & 1) == 0) { // [自动静态注释] 条件判断/分支
      return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    local_28 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_38 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_30 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__004c5aa0(*(undefined8 *)(param_1 + 0x2a0),&local_38); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (((local_30 == 0) || (local_28 != *(int *)(param_1 + 0x348))) || // [自动静态注释] 条件判断/分支
       (iVar1 = FUN__text__0045171c(*(undefined8 *)(param_1 + 0x2a8),param_1,local_30, // [自动静态注释] 调用尚未恢复正式名称的函数
                                    *(undefined8 *)(param_1 + 0x340)), iVar1 != 1)) {
      FUN__text__004c5adc(*(undefined8 *)(param_1 + 0x2a0),&local_38); // [自动静态注释] 调用尚未恢复正式名称的函数
      return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__004c5adc(*(undefined8 *)(param_1 + 0x2a0),(undefined8 *)(param_1 + 0x338)); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar3 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_1 + 0x338) = local_38;
    *(long *)(param_1 + 0x340) = local_30;
    *(int *)(param_1 + 0x348) = local_28;
  } // [自动静态注释] 作用域/控制流边界
  return uVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


